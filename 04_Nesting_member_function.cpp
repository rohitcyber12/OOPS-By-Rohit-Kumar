#include<iostream>
using namespace std;
class student{
	private:
	string name;
	int urn;
	float oopsmark;
	float dsmark;
	public:
	float total(){
		return oopsmark+dsmark;
	}
	float percentage(){
		return (total()*100)/200;
	}
	string  result(){
		if(oopsmark>=33 && dsmark>=33){
			return "PASS";
		}
		else{
		return "FAIL";
	}}
	public:
	void getdetail(){
		cout<<"Enter name:";
		cin>>name;
		cout<<"URN:";
		cin>>urn;
		cout<<"Enter OOPS-Mark:";
		cin>>oopsmark;
		cout<<"Enter DS-Mark:";
		cin>>dsmark;
	}
	void showdetail(){
		cout<<"Name:"<<name<<endl;
		cout<<"URN:"<<urn<<endl;
		cout<<"Total Mark:"<<total()<<endl;
		cout<<"Percentage:"<<percentage()<<"%"<<endl;
		cout<<"Result:"<<result()<<endl;
	}
};
int main(){
	student s1;
	s1.getdetail();
	s1.showdetail();
	return 0;
}