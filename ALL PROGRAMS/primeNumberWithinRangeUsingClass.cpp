#include<iostream>
using namespace std;
class CheckPrime
{
	int start,end,i,j,f,k,a[100];
	public:
		void get();
		void check();
		void disp();
};
void CheckPrime::get()
{
	cout<<"Enter Starting number: ";
	cin>>start;
	cout<<"\nEnter Ending number: ";
	cin>>end;
}
void CheckPrime::check()
{
	f=0,k=1;
	for(i=start;i<=end;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				f++;
			}
		}
		if(f==1 || f==2)
		{
			a[k]=i;
			k++;
			//f=0;
		}
		f=0;
	}
	
}
void CheckPrime::disp()
{
	cout<<"\nThese are the Prime numbers from "<<start<<" to "<<end<<endl<<endl;
	for(i=1;i<=k-1;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	CheckPrime pr;
	pr.get();
	pr.check();
	pr.disp();
}
