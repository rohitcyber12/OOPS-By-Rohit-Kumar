#include<iostream>
using namespace std;
class student{
	string name;
	int rollno;
	float marks;
	public:
	void getdata()
	{
		cout<<"Enter student name: ";
		cin>>name;
		cout<<"Enter roll number: ";
		cin>>rollno;
		cout<<"Enter marks: ";
		cin>>marks;
	}
	void display(){
		cout<<"\nStudent Details"<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"URN:"<<rollno<<endl;
		cout<<"Marks:"<<marks<<endl;
	}
	~student(){
		cout<<"Destructor called"<<endl;
	}
};
int main(){
	student s;
	s.getdata();
	s.display();
	return 0;
}