#include<iostream>
using namespace std;
class test
{
	int a;
	public:
	void get()
	{
		cin>>a;
	}	
	void operator ==(test t2)
	{
		if(a==t2.a)
			cout<<"\nObeject t1 & t2 Are Equale "<<endl;
		else
			cout<<"\nObeject t1 & t2 Are not Equale "<<endl;
	}
};
int main()
{
	test t1,t2;
	cout<<"enter 1st object's Value: ";
	t1.get();
	cout<<"enter 2nd object's Value: ";
	t2.get();
	t1==t2;	
 } 
