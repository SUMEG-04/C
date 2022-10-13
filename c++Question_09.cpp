/*Define a class Person having name as a data member. Inherit two classes Student and 
Employee from Person. Student has additional attributes as course, marks and year and 
Employee has department and salary. Write display() method in all the three classes to 
display the corresponding attributes. Provide the necessary methods to show runtime 
polymorphism.*/

#include<iostream>
using namespace std;

class Person{
	
	
	char name[50];
	public:
	/*void set_p(){
		cout<<"Enter name:";
		fflush(stdin);
		cin.getline(name,50);
	}*/
	void display_p(char name[]){
		cout<<"name:"<<name<<endl;
	}
};

class Student: private Person{
	
	int marks;
	char course[50];
	int year;
	public:
	/*void set_s(){
		set_p();
		cout<<"Enter marks:";
		cin>>marks;
		cout<<"Enter course:";
		fflush(stdin);
		cin.getline(course,50);
		cout<<"Enter year:";
		cin>>year;
	}*/
	void display_s(char name[],int marks,char course[],int year){
		display_p(name);
		cout<<"marks:"<<marks<<endl;
		cout<<"course:"<<course<<endl;
		cout<<"year:"<<year<<endl;
	}
};

class Employee: private Person{
	
	char department[50];
	int salary;
	public:
	/*void set_e(){
		set_p();
		cout<<"Enter department:";
		fflush(stdin);
		cin.getline(department,50);
		cout<<"Enter salary:";
		cin>>salary;
	}*/
	void display_e(char name[],char* department,int salary){
		display_p(name);
		cout<<"department:"<<department<<endl;
		cout<<"salary:"<<salary<<endl;
		
	}
};

int main(){
	Student s;
	//s.set_s();
	s.display_s("sumeg",69,"BSc Cs",2020);
	cout<<endl;
	Employee e;
	//e.set_e();
	e.display_e("sumeg","CS UG",122500);
	return 0;
}