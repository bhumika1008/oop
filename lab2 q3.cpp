/*3. Create a class named Student with data member id and marks.
Create a default constructor to initialize value for id and marks,
create a parameterized constructor to initialize the objects, create
copy constructor to copy the content of one object to another
and create function to display student information.*/
#include<iostream>
using namespace std;
 class Student{
 	int id;
 	float marks;
 	
 	public:
 		//default constructor
 		Student(){
 		   id=1;
 		   marks=45.6;
		 }
		 //parameterized constructor'
		 Student(int i,float m ){
		 	id=i;
		 	marks=m;
		 }
		 //copy constructor
		 Student(Student &s){
		 	id=s.id;
		 	marks=s.marks;
		 }
		 void display(){
		 	cout<<"ID: "<< id<<endl;
		 	cout<<"Marks: "<<marks<<endl;
		 }
 };
 int main(){
 	Student s1; //default constructor
 	Student s2(8,66.95);//parameterized constructor
 	Student s3=s2;
 	cout<<"Student 1:"<<endl;
 	s1.display();
 	cout<<"Student 2:"<<endl;
 	s2.display();
 	cout<<"Student 3:"<<endl;
 	s3.display();
return 0;
 }
 
