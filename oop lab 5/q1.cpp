#include<iostream>
using namespace std;

//Abstract base class
class Fmachine{
	public:
		virtual void getdata()=0; //pure virtual function
		virtual void putdata()=0;
		
		virtual ~Fmachine(){
			//virtual destructor for cleanup
		}
};

//Derived class(concrete class)
class Aeroplane: public Fmachine{
		int code;
		string name;
		int capacity;
	public:
		//override vritual function
        void getdata()override{
		 cout<<"Enter Aeroplane code: ";
		 cin>>code;
		 cout<<"Enter Aeroplane Name: ";
		 cin.ignore();
		 getline(cin, name);
		 cout<<"Enter Capacity: ";
		 cin>>capacity;
		}
		
		void putdata() override{
		  cout<<"Aeroplane Details: "<<endl;
		  cout<<"Code: "<<code<<endl;
		  cout<<"Name: "<<name<<endl;
		  cout<<"Capacity: "<<capacity<<endl;
		}
};

int main(){
	//Dynamic memory allocation with pointer to base class
	Fmachine* ptr=new Aeroplane;
	//Dynamuc binding: calls Aeroplane's getdata() and putdata()
	ptr->getdata();
	ptr->putdata();
	//Memory cleanup
	delete ptr;
return 0;
}
