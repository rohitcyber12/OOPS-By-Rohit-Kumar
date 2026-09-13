#include<iostream>
#include<string>
using namespace std;
class Hackathon{
	protected:
	int hn;
	string teamName[100];
	string project[100];
	public:
	void gethack(){
		cout<<"Enter the number of teams of hackathon: ";
		cin>>hn;
		for(int i=0;i<hn;i++){
			cout << "Enter Team Name: ";
			cin>>teamName[i];
			cout << "Enter Project Name: ";
			cin>>project[i];
		}
	}

};
class Cultural{
	protected:
	int cn;
	string teamName1[100];
	string event[100];
	public:
	void getcult(){
		cout<<"Enter the number of teams of cultural Event: ";
		cin>>cn;
		for(int i=0;i<cn;i++){
			cout << "Enter Team Name: ";
			cin>>teamName1[i];
			cout << "Enter Event Name: ";
			cin>>event[i];
		}
	}

};
class student:public Hackathon,public Cultural{
	public:
	void display(){
		cout<<"\n----Hackathon Details----"<<endl;
		for(int i=0;i<hn;i++){
		cout<<"Team Name: "<<teamName[i]<<endl;
		cout<<"Project: "<<project[i]<<endl;
	}
		cout<<"\n----Cultural Details----"<<endl;
		for(int i=0;i<cn;i++){
		cout<<"Team Name: "<<teamName1[i]<<endl;
		cout<<"Event: "<<event[i]<<endl;
	}
	}
};
int main(){
	student s;
	cout<<"Name: Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	s.gethack();
	s.getcult();
	s.display();
	return 0;
}