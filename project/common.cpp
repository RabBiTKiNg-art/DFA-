#include "common.h"
#include<iostream>
using namespace std;
int common ::reverse(int no)
{
int rev=0,r;
while(no>0)
{
	r=no%10;
	rev=rev*10+r;
	no=no/10;
}
return rev;
}
int common::count(int n )
{ 
 
	int c = 0; 
	while (n != 0) { 
		n = n / 10; 
		++c; 
	} 
	return c; 
}

