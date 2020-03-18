#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return(a+b);
}
float sum(float a,float b)
{
	return(a+b);
}
int main()
{
	cout<<"\nSum1="<<sum(100,20);
	cout<<"\nSum2="<<sum(2.3,3);
}

