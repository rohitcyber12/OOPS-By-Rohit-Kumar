#include<iostream>
#include<string>
using namespace std;
class employee{
	public:
	string name;
	int id;
	int salary;
	void getdata(){
		cout<<"Enter Employee Name: ";
		cin>>name;
		cout<<"Enter Id of employee: ";
		cin>>id;
		cout<<"Enter salary of employee: ";
		cin>>salary;
	}
};
class manager:public employee{
	private:
	float bonus;
	public:
	void getmanager(){
		getdata();
		cout<<"Enter Bonus of employee: ";
		cin>>bonus;
	}
	void showdata(){
		cout<<"\n----Employee Details----\n";
		cout<<"Name: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
		cout<<"Designation: Manager"<<endl;
		cout<<"Salary: "<<salary<<endl;
		cout<<"Bonus:"<<bonus<<endl;
		cout<<"Gross Salary: "<<salary+bonus<<endl;
	}
};
int main(){
	manager m;
	cout<<"Name: Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	m.getmanager();
	m.showdata();
	return 0;

}