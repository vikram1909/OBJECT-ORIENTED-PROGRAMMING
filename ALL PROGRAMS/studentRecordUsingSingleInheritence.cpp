#include<iostream>
using namespace std;
class general
{
	public:
		int roll;
		string name,email,mob;
		void generalDetails(int r,string nm,string e,string m)
    	{
        	roll=r;
        	name=nm;
        	email=e;
        	mob=m;
    	}
    	void dispGenralDetails()
    	{
        	cout<<"\nRoll_no.: "<<roll<<endl;
        	cout<<"\nName.: "<<name<<endl;
        	cout<<"\nEmail_Id.: "<<email<<endl;
        	cout<<"\nMobile_no.: "<<mob<<endl;
    	}
};
class Academic:public general
{
	public:
    	int m1,m2,m3;
    	float ss,g;
    	void academicDetails(int x,int y,int z,int a1,string a2,string a3,string a4)
    	{
        	generalDetails(a1,a2,a3,a4);
        	m1=x;m2=y;m3=z;
    	}
    	void dispAcademic()
    	{
        	dispGenralDetails();
        	ss=(m1+m2+m3)/3;
        	if(ss>=90)
        	{
        		cout<<"\nScholarship: "<<70<<"%"<<endl;
        	}
        	else if(ss<90 && ss>=60)
        	{
            	cout<<"\nScholarship: "<<60<<"%"<<endl;
        	}
        	else
        	{
            	cout<<"\nScholarship: "<<40<<"%"<<endl;
        	}
    	}
};
int main()
{
    Academic ob;
    int roll,mrk1,mrk2,mrk3;
    string mob;
    string name;
    string email;
    cout<<"\nEnter Roll_No.: ";
    cin>>roll;
    cout<<"\nEnter Name.: ";
    cin>>name;
    cout<<"\nEnter Email_Id.: ";
    cin>>email;
    cout<<"\nEnter Mobile_No.: ";
    cin>>mob;
    cout<<"\nEnter marks1: ";
    cin>>mrk1;
    cout<<"\nEnter marks2: ";
    cin>>mrk2;
    cout<<"\nEnter marks3: ";
    cin>>mrk3;
    /*ob.generalDetails(roll,name,email,mob);
    ob.dispGenralDetails();*/
    ob.academicDetails(mrk1,mrk2,mrk3,roll,name,email,mob);
    ob.dispAcademic();

}

