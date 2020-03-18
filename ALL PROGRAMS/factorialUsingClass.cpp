#include<iostream>
using namespace std;
class factorial
{
	private:
		int n,m,f;
		public:
			void get();
			void fact();
};
void factorial::get()
{
	cout<<"Enter a number to find its Factorial:- ";
	cin>>n;
	m=n;
}
void factorial::fact()
{
	f=1;
	while(n>0)
	{
		f=f*n;
		n--;
	}
	cout<<"\nFactorial of "<<m<<" is "<<f;
}
int main()
{
	 factorial obj;
	 obj.get();
	 obj.fact();
}
