#include<iostream>
using namespace std;
class concatinate
{
	private:
		int a[50],b[50],i,j,m,n;
		public:
			void get();
			void concateArray();
};
void concatinate::get()
{
	do
	{
		cout<<"Enter size of 1st Array:- ";
		cin>>m;
	}while(m<=0 || m>100);
	cout<<"Enter "<<m<<" elements for 1st array:-\n";
	for(i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	do
	{
		cout<<"Enter size of 2nd Array:- ";
		cin>>n;
	}while(n<=0 || n>100);
	cout<<"Enter "<<n<<" elements for 2nd array:-\n";
	for(j=1;j<=n;j++)
	{
		cin>>b[j];
	}
}
void concatinate::concateArray()
{
	cout<<"\nThese are the elements of 1st array:-\n\n";
	for(i=1;i<=m;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\nThese are the elements of 2nd array:-\n\n";
	for(j=1;j<=n;j++)
	{
		cout<<b[j]<<"\t";
	}
	cout<<"\nThese are the elements of  array after peforming concatinate:-\n\n";
	j=1;
	for(i=1;i<=m+n;i++)
	{
		if(i>m)
		{
			a[i]=b[j];
			cout<<a[i]<<"\t";
			j++;
		}
		else
		{
			cout<<a[i]<<"\t";
		}
	}
}
int main()
{
	class concatinate con;
	con.get();
	con.concateArray();
}
