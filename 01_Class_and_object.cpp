#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int rollno;
	int marks;
};
int main(){
student s;
cout<<"Enter Student name:";
cin>>s.name;
cout<<"Enter roll number of student:";
cin>>s.rollno;
cout<<"Enter marks of the Student:";
cin>>s.marks;
cout<<"Name:"<<s.name<<endl;
cout<<"Roll Number:"<<s.rollno<<endl;
cout<<"Marks:"<<s.marks<<endl;
return 0;


}