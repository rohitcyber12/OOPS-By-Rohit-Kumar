#include<iostream>
using namespace std;
class student{
	public:
	string name;
	string branch;
	int rollno;
	student(string n,string b,int r){
		name=n;
		branch=b;
		rollno=r;
	}
	student(student &s){
		name=s.name;
		branch=s.branch;
		rollno=s.rollno;
	}
	void display(){
		cout<<"Name:"<<name<<endl;
		cout<<"Branch:"<<branch<<endl;
		cout<<"Roll Number:"<<rollno<<endl;

	}


};
int main(){
	student s1("Rohit Kumar","CSE-E1",2514169);
	student s2(s1);
	cout<<"---Parameterized construcor---"<<endl;
	s1.display();
	cout<<"---copy construcotor---"<<endl;
	s2.display();
	return 0;
}