#include<iostream>
using namespace std;

class Student
{
	string name;
	int rollNo;

	public:
		void getData()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter roll no: ";
			cin>>rollNo;
		}

		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll No: "<<rollNo<<endl;
		}

		class Address
		{
			string city;

			public:
				void getAddress()
				{
					cout<<"Enter city: ";
					cin>>city;
				}

				void displayAddress()
				{
					cout<<"City: "<<city<<endl;
				}
		};
};

int main()
{
	Student s;
	Student::Address a;

	s.getData();
	a.getAddress();

	cout<<endl;

	s.display();
	a.displayAddress();

	return 0;
}