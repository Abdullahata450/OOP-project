#include<iostream>
#include<fstream>
#include<conio.h>
#include<windows.h>
#include<String>
#include<ctime>
#include<stdio.h>
#include<cstdio>


using namespace std;
//------------------------------------------------------------------------STUDENT CLASS/parrent class----------------------------------------------------------
class Student {
protected:

	string name;

	string Email;
	string Gender;
	string phone;
	string subject;
    double id;
	int marks1;
	int total;
	int discount;
	int After_discount;
	int total_fee;
	string section;
	

public:

	Student() {

		name = "";
		
		Email = "";
		Gender = "";
		phone = "";
		section = "";
		id = 0.0;
		marks1 = 0;
		total = 0;
		discount = 0;
		total_fee = 0;
		subject = "";
		After_discount = 0;
	

	}

};


//------------------------------------------------------------------------CHILD CLASS/CLASS FORM----------------------------------------------------------

class Form : public Student { // inherited with Student class;
public:


	//--------------------inster function---------
	void insert() {
		 
		system("cls");
		char y;

		cout << "\t\t\t-------------------------------------------" << endl;
		cout << "\t\t\t--------Welcome to Admission Form----------" << endl;
		cout << "\t\t\t-------------------------------------------" << endl;
		cout << "\t\t\tEnter Your id : ";
		cin >> id;
		cout << "\t\t\tEnter Your Name :";
		cin.get();
		getline(cin, name);
		cout << "\t\t\tEnter Your Gender : ";
		cin >> Gender;
		cout << "\t\t\tEnter Your Email :";
		cin >> Email;
		cout << "\t\t\tEnter Your phone :";
		cin >> phone;



		cout << "\n\n\t\tYour Data is Saved :: " << endl;
	P:
		cout << "\n\n\t\tPress Y to  Select Your Course Which Do you want to Study :: ";

		cin >> y;
		if (y == 'y' || y == 'Y') {
			Course();
		}
		else {
			cout << "Plese Enter Correct KEY" << endl;
			goto P;
		}


	}

	//--------------------Courses function---------
	void Course() {
		system("COLOR 6");

		system("cls");
	P:
		int choice;
		cout << "\n------------------------------------------------------------------------------------------------------------";
		cout << "\n------------------------------------- Students Courses -----------------------------------------------------" << endl;



		cout << "\n\t\t\tEnter Your Course Which Do you want To Study------";
		cout << "\n\t\t\t (1) FOR ICS PRESS 1 ";
		cout << "\n\t\t\t (2) FOR FSC ENGINEERING PRESS 2 ";
		cout << "\n\t\t\t (3) FOR FSC PRE-MEDICAL PRESS 3 ";
		cout << "\n\t\t\t********************************";
		cout << "\n\t\t\tEnter Your Choice : ";
		cin >> choice;

		switch (choice)
		{
		case 1:

			ics();
			break;

		case 2:
			FSCEng();
			break;


		case 3:

			FSCmed();
			break;

		default:
			cout << "\n\n\t\tEnter Correct choice And Try Again : ";

			goto P;
			break;
		}

		ofstream myfile;
		myfile.open("StudentRecord.txt", ios::app);


	myfile<< "\n" << id <<endl;
	myfile << name <<endl;
	myfile << Gender << endl;
	myfile << Email << endl;
	myfile << phone << endl;
	myfile << marks1 << endl;
	myfile << subject << endl;
	myfile << After_discount<<endl;
	myfile << section << endl;

	myfile.close();

		char X;
		cout << "\n\n\t\tYour Chalan is Add You Can Print now";
		cout << "\n\n\t\tDo You want To add More data? (Y/N)  : ";
		cin >> X;

		if (X == 'n' || X == 'N') {
			cout << "\n\t\tGoing Back To Main Menu " << endl;
			Sleep(1000);
			menu();
		}
		if (X == 'y' || X == 'Y') {
			insert();
		}

	}
	//--------------------ICS function---------
	void ics() {

		system("cls");
		subject = "ICS";
		total_fee = 120000;


		cout << "\n\t\t\tAs You have Seletcted The ICS (Inter-Mediate-Computer Science) Subject " << endl;

		cout << "\n\t\t\tEnter Your Marks of Matric : ";
		cin >> marks1;

		if (marks1 >= 800 && marks1 < 900) {
			cout << "\n\t\t\tYou have got Model Section " << endl;
			discount = 75;
			After_discount = total_fee - (total_fee * discount / 100);

			cout << "\n\n\t\tYou have got 75% Discount :";
			cout << "\n\n\t\tYour Total Fesss of ICS is : " << total_fee;
			cout << "\n\n\t\tYour fess after Discount is : " << After_discount;
			section = "Model Section";



		}
		else if (marks1 <= 1100 && marks1 >= 900) {
			cout << "\n\t\t\tYou have got Super Section " << endl;
			discount = 95;
			After_discount = total_fee - (total_fee * discount / 100);

			cout << "\n\n\t\tYou have got 95% Discount :";
			cout << "\n\n\t\tYour Total Fesss Of ICS is : " << total_fee;
			cout << "\n\n\t\tYour fess after Discount is : " << After_discount;
			section = "Super Section";

		}
		else if (marks1 < 900 && marks1 >= 700) {
			cout << "\n\n\t\tYou have got Secondary Section ";

			discount = 50;
			int After_discount = total_fee - (total_fee * discount / 100);

			cout << "\n\n\t\tYou have got 50% Discount :";
			cout << "\n\n\t\tYour Total Fesss of ICS is : " << total_fee;
			cout << "\n\n\t\tYour fess after Discount is : " << After_discount;
			section = "Secondary Section";

		}
		else if (marks1 < 700) {
			cout << "\n\n\t\tYou are Allow to sit in Normal Section ";

			cout << "Your Fess is " << total_fee;
			section = "Normal Section";
		}







	}
	//--------------------FSC_ENG function---------
	void FSCEng() {


		system("cls");
		total_fee = 150000;
		subject = "Fsc Engineering";


		cout << "\n\n\t\tAs You have Seletcted The FSC ( Fsc engineering) Subject " << endl;

		cout << "\n\n\t\tEnter Your Marks of Matric : ";
		cin >> marks1;

		if (marks1 >= 801 && marks1 < 900) {
			cout << "\n\n\t\tYou have got model Section " << endl;
			discount = 65;
			After_discount = total_fee - (total_fee * discount / 100);

			cout << "\n\n\t\tYou have got 65% Discount :";
			cout << "\n\n\t\tYour Total Fesss is : " << total_fee;
			cout << "\n\n\t\tYour fess after Discount is : " << After_discount;
			section = "Model Section";


		}
		else if (marks1 <= 1100 && marks1 >= 900) {
			cout << "\n\n\t\tYou have got Super Section " << endl;
			discount = 85;
			After_discount = total_fee - (total_fee * discount / 100);

			cout << "\n\n\t\tYou have got 95% Discount :";
			cout << "\n\n\t\tYour Total Fesss is : " << total_fee;
			cout << "\n\n\t\tYour fess after Discount is : " << After_discount;
			section = "Super Section";
		}

		else if (marks1 < 900 && marks1 >= 700) {
			cout << "\n\n\t\tYou have got Secondary Section ";

			discount = 50;
			int After_discount = total_fee - (total_fee * discount / 100);

			cout << "\n\n\t\tYou have got 50% Discount :";
			cout << "\n\n\t\tYour Total Fesss is : " << total_fee;
			cout << "\n\n\t\tYour fess after Discount is : " << After_discount;
			section = "Secondary Section";
		}

		else if (marks1 < 700 && marks1 <= 800) {
			cout << "\n\n\t\tYou dont get any Section Or You Are allow to sit in Normal Section ";

			cout << "Your Fess is " << total_fee;
			section = "Normal Section";
		}

	}
	//--------------------FSC_MED function---------
	void FSCmed() {


		system("cls");
		total_fee = 170000;
		subject = "Fsc Pre-Medical";


		cout << "\n\n\t\tAs You have Seletcted The FSC ( Fsc Pre Medical's) Subject " << endl;

		cout << "\n\n\t\tEnter Your Marks of Matric : ";
		cin >> marks1;

		if (marks1 >= 800 && marks1 < 900) {
			cout << "\n\n\t\tYou have got model Section " << endl;
			discount = 62;
			After_discount = total_fee - (total_fee * discount / 100);

			cout << "\n\n\t\tYou have got 75% Discount :";
			cout << "\n\n\t\tYour Total Fesss is : " << total_fee;
			cout << "\n\n\t\tYour fess after Discount is : " << After_discount;

			section = "Model Section";


		}
		else if (marks1 <= 1100 && marks1 >= 900) {
			cout << "\n\n\t\tYou have got Super Section " << endl;
			discount = 88;
			After_discount = total_fee - (total_fee * discount / 100);

			cout << "\n\n\t\tYou have got 95% Discount :";
			cout << "\n\n\t\tYour Total Fesss is : " << total_fee;
			cout << "\n\n\t\tYour fess after Discount is : " << After_discount;

			section = "Super Section";
		}


		else if (marks1 < 900 && marks1 >= 700) {
			cout << "\n\n\t\tYou have got Secondary Section " << "\n";
			discount = 50;
			int After_discount = total_fee - (total_fee * discount / 100);

			cout << "\n\n\t\tYou have got 50% Discount :";
			cout << "\n\n\t\tYour Total Fesss is : " << total_fee;
			cout << "\n\n\t\tYour fess after Discount is : " << After_discount;

			section = "Secondary Section";
		}
		else if (marks1 < 700) {
			cout << "\n\n\t\tYou dont get any Section Or Your Are allow to sit in Noramal section " << "\n";

			cout << "\n\n\t\tYou Did not get any Discount :";
			cout << "Your Fess is " << total_fee;
			section = "Normal Section ";
		}






	}
	//--------------------Avaliable Coueses function---------
	void AvalCourse() {
		system("cls");
		
		cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
		cout << "-------------------------------------Avaliable Student Cousrses ------------------------------------------" << endl;
		int choice;
		char A;
		cout << "\n\t\t\tThere Are 3 Courses : " << endl;
		cout << "\n\t\t\t Press 1: ICS\n";
		cout << "\n\t\t\t Press 2: FSC-Enginerring\n";
		cout << "\n\t\t\t Press 3: FSC-Pre-Medical\n";
		cout << "\n\t\t\t Press 4: Back\n";

		cout << "\n\t\tEnter your choice To See more details of Cousrses :";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			cout << "\n\t\t" << "Subject ICS Contains Scince Subjects :" << endl;
			cout << "\n\t\t " << "Total Subject is  : 7 " << endl;
			cout << "\n\t\t" << "Total Fess Structure is  : 120000" << endl;
			cout << "\n\t\t" << "Total Fess can be sumbitted in 3 to 4 instalments   " << endl;

			cout << "\n\t\tDo you want to Apply Now (Y/N) :";
			cin >> A;
			if (A == 'y' || A == 'Y') {
				insert();
			}
			if (A == 'n' || A == 'N') {
				AvalCourse();
			}
			break;
		case 2:
			system("cls");
			cout << "\n\t\t" << "Subject FSC-Engeneering Contains Scince + Chemestry Subjects :" << endl;
			cout << "\n\t\t " << "Total Subject is  : 7 " << endl;
			cout << "\n\t\t" << "Total Fess Structure is  : 150000" << endl;
			cout << "\n\t\t" << "Total Fess can be sumbitted in 3 to 4 instalments   " << endl;

			cout << "\n\t\tDo you want to Apply Now (Y/N) :";
			cin >> A;
			if (A == 'y' || A == 'Y') {
				insert();
			}
			if (A == 'n' || A == 'N') {
				AvalCourse();
			}
			break;
		case 3:
			system("cls");
			cout << "\n\t\t" << "Subject FSC-MEDICAL Contains Medical Subjects :" << endl;
			cout << "\n\t\t " << "Total Subject is  : 8 " << endl;
			cout << "\n\t\t" << "Total Fess Structure is  : 170000" << endl;
			cout << "\n\t\t" << "Total Fess can be sumbitted in 3 to 4 instalments   " << endl;

			cout << "\n\t\tDo you want to Apply Now (Y/N) :";
			cin >> A;
			if (A == 'y' || A == 'Y') {
				insert();
			}
			if (A == 'n' || A == 'N') {
				AvalCourse();
			}
			break;

		case 4:
			menu();
			break;




		default:
			cout << "Enter Correct Number ";
			break;
		}
	}

	//--------------------Main menu  function---------
	void menu() {
		
		system("COLOR 60");
		int choice;

		system("cls");

		cout << "\t\t\t-------------------------------------------" << endl;
		cout << "\t\t\t-----WELCOME TO ADMISSION ADMIN PORTAL-----" << endl;
		cout << "\t\t\t-------------------------------------------" << endl;
		cout << "\n\t\t\t 1.ENTER TO FILL THE FORM  " << endl;
		cout << "\n\t\t\t 2.ENTER TO SEE AVALIABLE COURSE  " << endl;
		cout << "\n\t\t\t 3.ENTER TO PRINT YOUR CHALAN  " << endl;
		cout << "\n\t\t\t 4.ENTER ADMIN MODE  " << endl;
		cout << "\n\t\t\t 5.EXIT " << endl;

	Again:

		cout << "\n\t\t\t****************************";
		cout << "\n\t\t\tEnter Your choice :";
		cin >> choice;
		switch (choice) {
		case 1:
			insert();
			break;
		case 2:
			AvalCourse();
			break;

		case 3:
			printChalan();
			break;
		case 4:
			admin_pass();
			break;
		case 5:
			exit(0);
		default:
			
			cout << "\n\t\t\t Inavalid Number .. Try Again " << endl;
			
			goto Again;
			break;




		}
	}

	//--------------------  student print chalan  function---------
	void printChalan() {
		system("cls");
		fstream data;
		string PHONE;
		cout << "Enter Phone No. of Student To print Chalan : ";
		cin >> PHONE;
		data.open("StudentRecord.txt");
	//	string a1 ="\n";
		string id;
		string n;
		string g;
		string e;
		string p;
		string m;
		string s;
		string d;
		string se;
		string line;
		getline(data, line);
		while (!data.eof()) {

			getline(data, id);
			getline(data, n);
			getline(data, g);
			getline(data, e);
			getline(data, p);
			getline(data, m);
			getline(data, s);
			getline(data, d);
			getline(data, se);
		
			getline(data, line);
		
			if (p == PHONE) {

				cout << "Student ID : " << id << endl;
				cout << "Student Name : " << n << endl;
				cout << "Student Gender : " << g << endl;
				cout << "Student Email : " << e << endl;
				cout << "Student Phone  : " << p << endl;
				cout << "Student Marks : " << m << endl;
				cout << "Student Subject : " << s << endl;
				cout << "Student Discount : " << d << endl;
				cout << "Student Section : " << se;
			

			}

		
		}
		data.close();

	p:
		char E = 0;
		cout << "\b " << "\n\t\tPRESS Y TO GO BACK = ";
		cin >> E;
		if (E == 'y' || E == 'Y') {
			menu();
		}
		else {
			cout << "Enter Correct KEY";

			goto p;
		}


	}


	//--------------------Admin pass function---------
	void admin_pass() {

		string password;
		string p = "admin";

		cout << "\n\t\t\tENTER  PASSWORD TO LOGIN IN :";
		cin >> password;
		if (password == p) {
			system("cls");
			cout << "\n\t\t\tLogin successfully " << endl;


			cout << "\n\n\n";
			cout << "\t\t\t Loading";
			char y = 219;
			for (int a = 0; a < 30; a++) {
				cout << y;
				Sleep(100);

			}
			admin();
		}
		else {
			cout << "\n\t\t\tINCORRECT PASSWORD ";
			admin_pass();

		}
	}

	void admin() {
		system("cls");
		int choice;
		cout << "\n\t\t\t<<<<<<<<<< WELCOME ADMIN >>>>>>>>>>\n";
		cout << "\n\n\t\t\t\t      MENU\n";
		cout << "\t\t\t             ******";
		cout << "\n\t\t\t Press 1: VIEW INFORMATION\n";
		cout << "\n\t\t\t Press 2: MODIFY DATA\n";
		cout << "\n\t\t\t Press 3: SEARCH DATA\n";
		cout << "\n\t\t\t Press 4: DELETE DATA\n";
		cout << "\n\t\t\t Press 5: MENU";
		cout << "\n\n\t\t\t Press 6: EXIT\n";
		cout << "\n\t\t\t********************************";
		cout << "\n\t\t\tENTER YOUR CHOICE: ";


	Again:
		cin >> choice;
		switch (choice) {
		case 1:
			showData();
			break;
		case 2:
			modifyData();
			break;
		case 3:
			SearchData();
			break;
		case 4:
			DeleteData();
			break;
		case 5:
			menu();
			break;
		case 6:
			exit(0);

		default:
			cout << "\n\t\t\t Inavalid Number .. Try Again " << endl;
			goto Again;

		}

	}

	//--------------------Show student Data  function---------
	void showData() {
		system("cls");
		cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
		cout << "------------------------------------- Showing Student Details ------------------------------------------" << endl;
		ifstream file;
		file.open("StudentRecord.txt");

		string ID, N, G, E, P, M, S, D, SE;// a;

      string line="\n";
	  getline(file, line);
		while (!file.eof())
		{
			
		    getline(file, ID);
		    getline(file, N);
	    	getline(file, G);
			getline(file, E);
			getline(file, P);
			getline(file, M);
			getline(file, S);
			getline(file, D);
			getline(file, SE);
			getline(file, line);

			
		
			cout << "Student id : " << ID << endl;
			cout << "Student Name : " << N << endl;
			cout << "Student Gender : " << G << endl;
			cout << "Student Email : " << E << endl;
			cout << "Student Phone : " << P << endl;
			cout << "Student marks : " << M << endl;
			cout << "Student Subject : " << S << endl;
			cout << "Student Discount : " << D << endl;
			cout << "Student Section : " << SE << endl;
			cout << "------------------------------------- ------------------------------------------" << endl;
		
			
		}
		file.close();
		char E2 = 0;
		cout << "\n\t\tPRESS Y TO GO BACK TO MAIN MENU = ";
		cin >> E2;
		if (E2 == 'y' || E2 == 'Y') {
			admin();
		}
		else {

		}
		

	}

	//--------------------Modify student Data  function---------
	void modifyData() {
		
		system("cls");
		cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
		cout << "------------------------------------- Modifying Student Details ------------------------------------------" << endl;

		ifstream d1;
		string ID;
		cout << "Enter Student ID ";
		cin >> ID;
		d1.open("StudentRecord.txt");
		ofstream e1;
		e1.open("temp.txt");
		string id, n, g, e, p, m, s, d, se;
		string line="\n";
		getline(d1, line);
		while (!d1.eof())

		{
		
			getline(d1, id);
			getline(d1, n);
			getline(d1, g);
			getline(d1, e);
			getline(d1, p);
			getline(d1, m);
			getline(d1, s);
			getline(d1, d);
			getline(d1, se);
			getline(d1, line);

			if (id!=ID) {

	
				e1 << id << endl;	
				e1 << n << endl;
				e1 << g << endl;
				e1 << e << endl;
				e1 << p << endl;
				e1 << m << endl;
				e1 << s << endl;
				e1 << d << endl;
				e1 << se << endl;
				e1 << line << endl;

			}
			else {
				cout << "\t\t\tEnter Your id : ";
				cin >> id;
			//	e1 << id << endl;
				cout << "\t\t\tEnter Your Name :";
				cin.get();
				getline(cin, n);
//e1 << n << endl;
				cout << "\t\t\tEnter Your Gender : ";
				cin >> g;
			//	e1 << g << endl;
				cout << "\t\t\tEnter Your Email :";
				cin >> e;
				//e1 << e << endl;
				cout << "\t\t\tEnter Your phone :";
				cin >> p;
			//	e1 << p << endl;
				//e1 << m << endl;
			//	e1 << s << endl;
			//	e1 << d << endl;
			//	e1 << se << endl;
				cout << "Recoderd Updated ..." << endl;

				e1 << line << endl;
				e1 << id << endl;
				e1 << n << endl;
				e1 << g << endl;
				e1 << e << endl;
				e1 << p << endl;
				e1 << m << endl;
				e1 << s << endl;
				e1 << d << endl;
				e1 << se << endl;
				e1 << line;
				
			}

			e1.close();
			d1.close();
			remove("StudentRecord.txt");
		   int var =rename("temp.txt", "StudentRecord.txt");
		   if (var == 0) {
			   cout << "Data updated ";
		   }
		   else {
			   cout << "Data not updated ";
		   }
			
		}
	p:
		char E = 0;
		cout << "\b " << "\n\t\tPRESS Y TO GO BACK = ";
		cin >> E;
		if (E == 'y' || E == 'Y') {
			admin();
		}
		else {
			cout << "Enter Correct KEY";

			goto p;
		}


	}
	//--------------------Delete student Data  function---------
	void DeleteData() {
		system("cls");
		
		cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
		cout << "------------------------------------- Delete Student Details ------------------------------------------" << endl;

		int
			ID;
		ifstream d;
		cout << "Enter Student ID number : ";
		cin >> ID;
		d.open("StudentRecord.txt");
		ofstream e;
		e.open("new.txt");

		d >> id;
		d.ignore();
		getline(d, name);
		d >> Gender;
		d >> Email;
		d >> phone;
		d >> marks1;
		d >> subject;
		d >> After_discount;
		d >> section;

		while (!d.eof())
		{
			if (id != ID) {


				e << id << endl;
				e << name << endl;
				e << Gender << endl;
				e << Email << endl;
				e << phone << endl;
				e << marks1 << endl;
				e << subject << endl;
				e << After_discount << endl;
				e << section << endl;

			}

			break;
		}
		e.close();
		d.close();
		remove("StudentRecord.txt");
		int var = rename("new.txt", "StudentRecord.txt");
		if (var == 0) {
			cout << "Data updated ";
		}
		else {
			cout << "Data not updated ";
		}

	p:
		char E = 0;
		cout << "\b " << "\n\t\tPRESS Y TO GO BACK = ";
		cin >> E;
		if (E == 'y' || E == 'Y') {
			admin();
		}
		else {
			cout << "Enter Correct KEY";

			goto p;
		}

	}

	//--------------------Search student Data  function---------
	void SearchData() {
		system("cls");
		fstream data;
		string ID;
		cout << "Enter ID No. of Student : ";
		cin >> ID;
		data.open("StudentRecord.txt");

	   string id;
		string n;
		string g;
		string e;
		string p;
		string m;
		string s;
		string d;
		string se;
		string line = "\n";
		getline(data, line);
		
		while (!data.eof()) {
		
			getline(data, id);
			getline(data, n);
			getline(data, g);
			getline(data, e);
			getline(data, p);
			getline(data, m);
			getline(data, s);
			getline(data, d);
			getline(data, se);
			getline(data, line);

			
		if(id==ID){

			cout << "Student ID : " << id << endl;
			cout << "Student Name : " << n << endl;
			cout << "Student Gender : " << g << endl;
			cout << "Student Email : " << e << endl;
			cout << "Student Phone  : " << p << endl;
			cout << "Student Marks : " << m << endl;
			cout << "Student Subject : " << s << endl;
			cout << "Student Discount : " << d << endl;
			cout << "Student Section : " << se;

			}
		}

		data.close();

	p:
		char E = 0;
		cout << "\b " << "\n\t\tPRESS Y TO GO BACK = ";
		cin >> E;
		if (E == 'y' || E == 'Y') {
			admin();
		}
		else {
			cout << "Enter Correct KEY";

			goto p;
		}

	}


};

//-----------------------------------------------------------------------------CHILD CLASS------class pass----------------------------------------------------------
class Pass :public Form {
public:

	void pass() {
		system("COLOR 80");
		int choice;
		system("cls");

		cout << "\t\t\t\t---------------------------------------------" << endl;
		cout << "\t\t\t\t-------Welcome to Admission login form-------" << endl;
		cout << "\t\t\t\t---------------------------------------------" << endl;

	start:
		srand(time(0));
		setcolor(240);
		int r = rand();
		cout << " CAPTCHA CODE IS = " <<r<< endl;
		setcolor(15);
		cout << "\n\t\t\tENTER CAPTCHA TO LOGIN IN =";
		cin >> choice;

		if (choice == r) {
			setcolor(0x0C);
			cout << "\n\t\t\tLogin successfully " << endl;
			setcolor(15);
		}
		else {

			cout << "\n\t\t\tWrong PassWord .Enter Correct Pass " << endl;

			goto start;
		}


		cout << "\n\n\n";
		cout << "\t\t\t Loading : ";
		char y = 219;
		for (int a = 0; a < 30; a++) {
			cout << y;
			Sleep(100);

		}


		system("cls");
		menu();
	}



	string setcolor(unsigned short color) {
		HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hcon, color);
		return "";
	}

};

//---------------------------------------------------main function----------------------------------------
int main() {
	Pass s1;
	s1.pass();

}