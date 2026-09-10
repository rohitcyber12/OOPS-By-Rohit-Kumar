#include<iostream>
using namespace std;
class student{
	public:
	string name;
	string branch;
	int crn;
	int urn;
	int mark;
};
int main(){
	student s;
	cout<<"Enter student name:";
	cin>>s.name;
	cout<<"Enter branch of student:";
	cin>>s.branch;
	cout<<"Enter crn:";
	cin>>s.crn;
	cout<<"Enter urn:";
	cin>>s.urn;
	cout<<"Enter marks:";
	cin>>s.mark;
	cout<<"----Student Details----"<<endl;
	cout<<"Name: "<<s.name<<endl;
	cout<<"CRN: "<<s.crn<<endl;
	cout<<"URN: "<<s.urn<<endl;
	cout<<"Marks: "<<s.mark<<endl;
	if(s.mark>70 && s.mark<=100){
		cout<<"Pass!.Grade: A";
	}
	else if(s.mark<70 && s.mark>=40){
		cout<<"Pass!.Grade: B"<<endl;
	}
	else if(s.mark<40 && s.mark<39){
		cout<<"Fail!.Grade: c"<<endl;
	}
	else{
		cout<<"Enter Valid Number!";
	}
	return 0;
}