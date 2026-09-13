#include<iostream>
#include<string>
using namespace std;
class hospital{
	protected:
	string hospName;
	public:
	void getHospital(){
		cout<<"Enter Hospital Name: ";
		cin>>hospName;
	}
};
class doctor:public hospital{
	protected:
	string docName;
	public:
	void getdoctor(){
		cout<<"Enter Doctor Name: ";
		cin>>docName;
	}

};
class specialization:public doctor{
	private:
	string specialization;
	public:
	void getsp(){
		cout<<"Enter Specialization: ";
		cin>>specialization;
	}
	void showdetails(){
		cout<<"\n----Details----"<<endl;
		cout<<"Hospital Name: "<<hospName<<endl;
		cout<<"Doctor Name: "<<docName<<endl;
		cout<<"Specialization: "<<specialization<<endl;
	}
};
int main(){
	specialization s;
	cout<<"Name: Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	s.getHospital();
	s.getdoctor();
	s.getsp();
	s.showdetails();
	return 0;
}