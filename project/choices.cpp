#include "choices.h"
#include<iostream>
#include "endswith.h"
#include "startswith.h"
using namespace std;
void choices::options()
{
	int x;
	cout<<"WELCOME TO THE SOLUTION OF DFA"<<endl<<endl;
	cout<<"1. contains"<<endl;
	cout<<"2. doesnot contains"<<endl;
	cout<<"Enter your Choices"<<endl;
	cin>>x;
	if (x==1)
	{
		contains();
	}
	if (x==2)
	{
	//	doesnotcontains();
	}
	
}
void choices:: contains()
{
	int x;
	system("cls");
	cout<<"1. Ends with "<<endl;
	cout<<"2. Starts with"<<endl;
	cout<<"3. AS a substring "<<endl;
	cout<<"enter your choice"<<endl;
	cin>>x;
	if(x==1)
	{
		endswith e;
		e.design();
	}
	if(x==2)
	{
		startswith s;
		s.input();
	}
}

