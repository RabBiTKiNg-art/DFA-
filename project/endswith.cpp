#include "endswith.h"
#include<iostream>
using namespace std;
void endswith::design()
{
	int num,cmp[30];
	system("cls");
	cout<<"Enter a string you wnat the dfa of "<<endl;
	cout<<"Enter 1 as 1 and 0 as 2"<<endl;
	cin>>num;
	int cnt,rev,str[30];
	cnt=count(num);
	rev=reverse(num);
	int rev1;
	rev1=rev;
	int r,c,d=0;
	while(rev1>0)
	{
		r=rev1%10;
		str[d]=r;
		cmp[d]=r;
		rev1=rev1/10;
		d=d+1;
	}
	c=0;
	while(rev>0)
	{
		r=rev%10;
		cout<<"(q"<<c<<","<<r<<")-->q"<<c+1<<endl;
		rev=rev/10;
		if (c == 0 && r == 1)
		{
			cout<<"(q"<<c<<","<<"2"<<")-->q"<<c<<endl;
		}
		if(c==0 && r==2)
		{
			cout<<"(q"<<c<<","<<"1"<<")-->q"<<c<<endl;
		}
    
		int i=0;
		//if (c>0)
		//{
			//for(i=c;i>0;i--)
			//{
				if(c==1)
				{
					if(r==1)
					str[0]=2;
					if(r==2)
					str[0]=1;
					if(str[0]==cmp[0] && r==1)
					{
						cout<<"(q"<<c<<","<<"2"<<")-->q"<<c<<endl;
					}
					else if(str[0]==cmp[0] && r==2)
					{
						cout<<"(q"<<c<<","<<"1"<<")-->q"<<c<<endl;
					}
					else if (str[0]!=cmp[0] && r==2)
					{
						cout<<"(q"<<c<<","<<"1"<<")-->q"<<c-1<<endl;
					}
					else if(str[0]!=cmp[0] && r==1)
					{
						cout<<"(q"<<c<<","<<"2"<<")-->q"<<c-1<<endl;
					}
					
				}
			if(c==2)
				{
					if(r==1)
					str[1]=2;
					if(r==2)
					str[1]=1;
					if(str[1]==cmp[0] && str[1]==cmp[0] && r==1)
					{
						cout<<"(q"<<c<<","<<"2"<<")-->q"<<c<<endl;
					}
					else if(str[1]==cmp[0] && str[1]==cmp[0] && r==2)
					{
						cout<<"(q"<<c<<","<<"1"<<")-->q"<<c<<endl;
					}
					else if (str[1]!=cmp[0] && str[1]!=cmp[1] && r==2)
					{
						cout<<"(q"<<c<<","<<"1"<<")-->q"<<c-1<<endl;
					}
					else if(str[0]!=cmp[0] && r==1)
					{
						cout<<"(q"<<c<<","<<"2"<<")-->q"<<c-1<<endl;
					}
					
				}
				
			//}
		//}
		
		
	c=c+1;
	}
}

