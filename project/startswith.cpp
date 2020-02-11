#include "startswith.h"
#include<iostream>
using namespace std;
void startswith::input()
{
	system("cls");
	int num;
	cout<<"enter a string you wnat the dfa of "<<endl;
	cout<<"Enter 1 as 1 and 0 as 2"<<endl;
	cin>>num;
	int cnt,rev;
	cnt=count(num);
	rev=reverse(num);
	design(cnt,rev);
}
void startswith::design(int length,int revd)
{
	int q[length + 1];
	int count=0;
	int a;
	while(revd>0)
	{	a=count++;
		cout<<"(q"<<a<<","<<revd%10<<")-->(q"<<count<<")"<<endl;
		if (revd%10==1)
		{
			cout<<"(q"<<a<<","<<2<<")-->(D)"<<endl;
		}
			if (revd%10==2)
		{
			cout<<"(q"<<a<<","<<1<<")-->(D)"<<endl;
		}
		
		revd=revd/10;
	}
	cout<<"(q"<<count<<","<<1<<")-->(q"<<count<<")"<<endl;
	cout<<"(q"<<count<<","<<2<<")-->(q"<<count<<")"<<endl;
	cout<<endl<<"q0 is starting state"<<endl<<"and"<<endl<< "q"<<count<<"is final state";

}
