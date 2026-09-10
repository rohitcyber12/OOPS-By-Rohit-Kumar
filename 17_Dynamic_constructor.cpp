#include<iostream>
using namespace std;
class student{
	string name;
	int rollno;
	int *marks;
	public:
	student(){
		int m;
		marks=new int;
		*marks=m;
	}
	void getdetails(){
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter roll number:";
		cin>>rollno;
		cout<<"Enter mark: ";
		cin>>*marks;
	}
	void display(){
		cout<<"Name:"<<name<<endl;
		cout<<"URN:"<<rollno<<endl;
		cout<<"Marks:"<<*marks<<endl;
	}
	~student(){
		delete marks;
	}
};
int main(){
	student s;
	s.getdetails();
	s.display();
	return 0;
}