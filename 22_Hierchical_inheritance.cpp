#include<iostream>
#include<string>
using namespace std;
class employee{
	public:
	string name;
	int id;
	void getemp(){
		cout<<"Enter the name of employee: ";
		cin>>name;
		cout<<"Enter the id of employee: ";
		cin>>id;
	}
	
};
class manager:public employee{
	public:
	float bonus;
	string dept;
	void getman(){
		getemp();
		cout<<"Enter department of employee: ";
		cin>>dept;
		cout<<"Enter bonus of employee: ";
		cin>>bonus;
	}
	void showman(){
		cout<<"Name: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Department: "<<dept<<endl;
		cout<<"Bonus: "<<bonus<<endl;
	}
};
class developer:public employee{
	public:
	string lan;
	string exp;
	void getdev(){
		getemp();
		cout<<"Enter Programming language: ";
		cin>>lan;
		cout<<"Enter Experience of developer: ";
		cin>>exp;
	}
	void showdev(){
		cout<<"Name: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Programming language: "<<lan<<endl;
		cout<<"Experience: "<<exp<<endl;
	}
};
int main(){
	manager m;
	developer d;
	cout<<"Name: Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	m.getman();
	m.showman();
	d.getdev();
	d.showdev();
	return 0;
}