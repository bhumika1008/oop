/*10. WAP to find velocity (v=d/t) using friend function.*/
#include<iostream>
using namespace std;
class Velocity{
	float distance;
	float time;
	public:
		 void getdata(){
		 	cout<<"Enter distance:";
		 	cin>>distance;
		 	cout<<"Enter time:";
		 	cin>>time;
		 }
		 //declare friend function
		 friend void calculateVelocity(Velocity v);
};
//Friend function definition
void calculateVelocity(Velocity v){
	if(v.time==0){
		cout<<"Time cannot be zero.Error!"<<endl;
	}else{
		float velocity=v.distance/v.time;
		cout<<"Velocity= "<<velocity<<" m/s"<<endl;
	}
}
int main(){
	Velocity v1;
	v1.getdata();//read distance and time
	calculateVelocity(v1);//call friend function to compute velocity
return 0;
}
