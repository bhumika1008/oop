/*6. Write a program according to the specification given below:
? Create a class Account with data members acc no, balance, and
min_balance(static)
? Include methods for reading and displaying values of objects
? Define static member function to display min_balance 
? Create array of objects to store data of 5 accounts and read
and display values of each object*/
#include<iostream>
using namespace std;
class Account{
	int accno;
	double balance;
	static double min_balance;
	public:  
		void getdata(){
			cout<<"Enter account Number:";
			cin>>accno;
			cout<<"Enter balance:";
			cin>>balance;
		}
		void display(){
			cout<<"Account No:"<<accno<< ",Balance: "<<balance<<endl;
			
		}
		static void dispMinBalance(){
			cout<<"Mininum Balance: "<<min_balance<<endl;
		}
};
double Account::min_balance=500.0;
int main(){
	 Account accounts[5];
	 cout<<"Enter details for 5 accounts:"<<endl;
	 for(int i=0;i<5;i++){
	 	cout<<"Account "<<i+1<<" :\n";
	 	accounts [i].getdata();
	 }
	 cout<<"\nDisplaying account details:"<<endl;
	 for(int i=0;i<5;i++){
	 	accounts[i].display();
	 }
	 cout<<"static member information:"<<endl;
	 Account::dispMinBalance();
return 0;
}
