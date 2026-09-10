#include<iostream>
using namespace std;
class company{
private:
	int revenue;
	int expense;
protected:
string loc;
public:
	string name;
	void getdata(){
		cout<<"Enter Company name: ";
		cin>>name;
		cout<<"Enter Location: ";
		cin>>loc;
		cout<<"Enter revenue: ";
		cin>>revenue;
		cout<<"Enter Expense: ";
		cin>>expense;

	}
	friend void showdata(company c);

};
void showdata(company c){
	cout<<"\n----Company data----"<<endl;
	cout<<"Company: "<<c.name<<endl;
	cout<<"Location: "<<c.loc<<endl;
	cout<<"Revenue: "<<c.revenue<<endl;
	cout<<"Expense: "<<c.expense<<endl;
	cout<<"Profit: "<<c.revenue-c.expense<<endl;
}
int main(){
	int n;
	cout<<"Enter Number of company: ";
	cin>>n;
	company c[10];
	for(int i=0;i<n;i++){
		cout<<"\nEnter Details of company "<<i+1<<endl;
		c[i].getdata();
	}
	 cout<<"\n\n====All company Details===="<<endl;
	 for(int i=0;i<n;i++){
		showdata(c[i]);
	 }
	 return 0;
}