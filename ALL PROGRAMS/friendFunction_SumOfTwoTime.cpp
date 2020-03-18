#include<iostream>
using namespace std;
class time
{
	int h,m,s;
	int hr,min,sec;
	public:
		void line();
		void get()
		{
			cout<<"Enter Hour: ";
			cin>>h;
			cout<<"Enter Minut: ";
			cin>>m;
			cout<<"Enter Second: ";
			cin>>s;
		}
		void getShow()
		{
			cout<<"\t\t\tYou Entered Time:\n"<<endl;
			cout<<"\t\t\t"<<h<<" h "<<m<<" m "<<s<<" s "<<endl;
		}
	     void result()
		{ 
			cout<<"\n\t\t\tResult After Adding Two Time\n"<<endl;
			cout<<"\t\t\t"<<hr<<" h "<<min<<" m "<<sec<<" s "<<endl;
		}
		friend time sumTime(time,time);
};
 time sumTime(time t,time t1)
{
	time t2;
	t2.hr=t.h+t1.h;
	t2.min=t.m+t1.m;
	t2.sec=t.s+t1.s;
	if(t2.sec>=60)
	{
		t2.min=t2.min+(t2.sec/60);
		t2.sec=(t2.sec%60);
	}
	if(t2.min>=60)
	{
		t2.hr=t2.hr+(t2.min/60);
		t2.min=(t2.min%60);
	}
     return t2;
	
}
void time::line()
{
	int i;
	for(i=1;i<=80;i++)
	{
		cout<<"*";
	}
}
int main()
{	
	int i;
	time obj1[2],obj3;
	for(i=1;i<=2;i++)
	{
		obj1[i].get();
		obj1[i].getShow();
	}
			/*obj1.get();
			obj1.getShow();
			obj2.get();
			obj2.getShow();*/
			obj3=sumTime(obj1[1],obj1[2]);
			obj3.line();
			obj3.result();
}
