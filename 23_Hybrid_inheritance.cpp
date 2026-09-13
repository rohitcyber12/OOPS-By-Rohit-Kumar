#include<iostream>
#include<string>
using namespace std;
class employee{
	public:
	string name;
	int id;
	void getdata(){
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter ID: ";
		cin>>id;
	}
};
class manager:public employee{
	public:
	int bonus;
	void getmanager(){
		getdata();
		cout<<"Enter bonus: ";
		cin>>bonus;

	}
	void showmanager(){
		cout<<"\nManager Details: "<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Bonus: "<<bonus<<endl;
	}
};
class developer:public employee{
	public:
	string lang;
	int exp;
	void getdeveloper(){
		getdata();
		cout<<"Enter programming language: ";
		cin>>lang;
		cout<<"Enter experience: ";
		cin>>exp;
	}
	void showdeveloper(){
		cout<<"Name: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Programming language: "<<lang<<endl;
		cout<<"Experience: "<<exp<<" years"<<endl;
	}
};
class seniorManager:public manager{
	public:
	string project;
	void getsenior(){
		getmanager();
		cout<<"Enter project: ";
		cin>>project;
}
	void showsenior(){
		showmanager();
		cout<<"Project: "<<project<<endl;

	}
};
int main(){
	developer d;
	seniorManager s;
	cout<<"Name: Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout<<"----Developer----"<<endl;
	d.getdeveloper();
	d.showdeveloper();
	cout<<"----Senior Manager----"<<endl;
	s.getsenior();
	s.showsenior();
	return 0;
}