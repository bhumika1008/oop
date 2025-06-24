/*5. Create a class named Distance with required data members and
member function to add two lengths given by user in feet and
inches.*/
#include<iostream>
using namespace std;

class Distance{
	int feet;
	int inch;
	public:
		void getdata(){
			cout<<"Enter the no.in feet and inches:";
			cin>>feet>>inch;
		}
		Distance add(Distance d){
			Distance res;
			res.inch=inch+d.inch;
			res.feet=feet+d.feet+(res.inch/12);
			res.inch=res.inch%12;
			return res;
		}
		void display(){
			cout<<"Totla distance= "<<feet<<" ft,"<<inch<<" inch"<<endl;
		
		}
};
int main(){
	Distance d1,d2,sum;
	d1.getdata();
	d2.getdata();
	sum=d1.add(d2);
	sum.display();
return 0;
}
