#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int urn;
	
	float square(int x=5){
		return x*x;
	}
	void getdetail(){

		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter URN:";
		cin>>urn;
	}
	void showdetail(){
		cout<<"Name:"<<name<<endl;
		cout<<"URN:"<<urn<<endl;
		
	}
};
int main(){
	student s;
	int a;
	s.getdetail();
	s.showdetail();
	cout<<"Enter the number:";
	cin>>a;
	cout<<"Square by default parameter:"<<s.square()<<endl;
	cout<<"Square using user value:"<<s.square(a)<<endl;
	
}