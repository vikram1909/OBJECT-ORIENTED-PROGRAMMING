#include<iostream>
using namespace std;
class prime
{
	int num,i,f;
	public:
		void get();
		void check();
		void disp();
};
void prime::get()
{
	cout<<"Enter a number to check whether it is prime or not: "<<endl;
	cin>>num;
}
void prime::check()
{
	f=0;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			f++;
		}
	}
}
void prime::disp()
{
	if(f==1)
	{
		cout<<"Enter number "<<num<<" is prime: "<<endl;
	}
	else
	{
		cout<<"Enter number "<<num<<" is not prime: "<<endl;
	}
}
int main()
{
	prime pr;
	pr.get();
	pr.check();
	pr.disp();
}
