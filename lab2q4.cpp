/*4. Create a class named Time with required data members and
member functions to display the time format in HHH:MM: SS after
adding two time period given by user.*/
#include<iostream>
using namespace std;

class Time{
	int hrs;
	int min;
	int s;
	public:
		void getdata(){
			cout<<"Enter hrs,mins and sec:";
			cin>>hrs>>min>>s;
		}
		Time add(Time t){
			Time result;
			result.s=s+t.s;
			result.min=min+t.min+result.s/60;
			result.s=result.s%60;
			result.hrs=hrs+t.hrs+result.min/60;
			result.min=result.min%60;
			return result;
			
		}
		void display(){
			cout<<hrs<<":"<<min<<":"<<s<<endl;
		}
};
int main(){
	Time t1,t2,sum;
	t1.getdata();
	t2.getdata();
	sum=t1.add(t2);
	cout<<"Sum of time periods:"<<endl;
	sum.display();
return 0;
}
