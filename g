#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	cout<<"Enter your name "<<endl;
	cin>>name;
	
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	
	string city;
	cout<<"Enter your city name"<<endl;
	cin>>city;
	
	string college;
	cout<<"Enter your college name"<<endl;
	cin>>college;
	
	string profession;
	cout<<"Enter your profession"<<endl;
	cin>>profession;
	
	string animal;
	cout<<"Enter the type of animal that you have"<<endl;
	cin>>animal;
	
	string pet;
		cout<<"Enter the name of your pet"<<endl;
		cin>>pet;
		
	cout<<"There once was a person named "<<name<<" who lived in "<<city <<"."<<" At the age of "<<endl; 
cout<<age<<","<< name <<" went to college at "<<college<<"." <<name <<" graduated and went to work "<<endl;
cout<<"as a "<<profession<<"."<<" Then, "<< name<< " adopted a(n)"<< animal<<" named "<<pet<<". They"<<endl; 
cout<<"both lived happily ever after!"<<endl;
	return 0;
}

 
