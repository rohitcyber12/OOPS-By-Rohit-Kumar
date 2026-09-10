#include<iostream>
using namespace std;
class student{
	public:
	inline int square(int a){
		return a*a;
	}
};
int main(){
	student d;
	int num;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"Square: "<<d.square(num);
	return 0;


}