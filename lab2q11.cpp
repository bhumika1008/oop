/*11. Write a program according to the following specification:
? Make a class FriendclassA and FriendclassB
? Int a and int b are private member of FriendclassA
? Initialize value of “a” through constructor
? Take data from user for “b” through “getdata” function
? Make friend relation to do all mathematical operation on
FriendclassB by accessing the private datamember of
FriendclassA and display result.*/
#include<iostream>
using namespace std;

class FriendclassB; //forward declaration
class FriendclassA{
	int a;
	int b;
	public:
		FriendclassA(){
			a=5;
		}
		void getdata(){
			cout<<"Enter the value of b:";
			cin>>b;
		}
		//declare friendclassB as friend
		friend class FriendclassB;
};
class FriendclassB{
	public:
		void calculation(FriendclassA obj){
			cout<<"\Mahtmematical operations:"<<endl;
			cout<<"a+b= "<<obj.a+obj.b<<endl;
			cout<<"a-b= "<<obj.a-obj.b<<endl;
			cout<<"a*b= "<<obj.a*obj.b<<endl;
			if(obj.b!=0){
				cout<<"a/b= "<<(float)obj.a/obj.b<<endl;
			}else{
				cout<<"Error!"<<endl;
			}
		}
};
int main(){
  FriendclassA objA;
  objA.getdata();
  FriendclassB objB;
  objB.calculation(objA);
return 0;
}
