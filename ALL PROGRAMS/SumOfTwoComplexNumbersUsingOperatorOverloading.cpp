#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
		void get()
		{
			cout<<"A= ";
			cin>>a;
			cout<<"B= ";
			cin>>b;			
		}
		void show()
		{
			cout<<a<<" +i "<<b<<endl;
			cout<<"---------------------------------------";
		}
		Complex operator +(Complex ob2)
		{
			Complex ob3;
			ob3.a=a+ob2.a;
			ob3.b=b+ob2.b;
			return ob3;
		}
};
int main()
{
	Complex t1,t2,t3;
	cout<<"\nEnter 1st complex Number:"<<endl;
	t1.get();
	cout<<"\nThis is 1st complex Number:"<<endl;
	t1.show();
	cout<<"\nEnter 2nd complex Number:"<<endl;
	t2.get();
	cout<<"\nThis is 2nd complex Number:"<<endl;
	t2.show();
	t3=t1+t2;
	cout<<"\nThis is Sum of both complex Number:"<<endl;
	t3.show();
}
