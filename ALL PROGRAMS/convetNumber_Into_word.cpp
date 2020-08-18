#include<iostream>
using namespace std;
class convertInWord
{
	long long int num,numX,rem,div,quo;
	int count;
	public:
		convertInWord(long long int x)
		{
			num=x;
		}
		void conversion();
};
void convertInWord::conversion()
{
	int t=num;
	while(num>0)
	{
		numX=num;
		count=0;
		while(numX>0)
		{
			numX=numX/10;
			count++;
		}
		if(count==9 || count==8)
		{
			div=10000000;
			quo=num/div;
			num=num%div;
		}
		else if(count==7 || count==6)
		{
			div=100000;
			quo=num/div;
			num=num%div;
		}
		else if(count==5 || count==4)
		{
			div=1000;
			quo=num/div;
			num=num%div;
		}
		else if(count==3)
		{
			div=100;
			quo=num/div;
			num=num%div;
		}
		else if(count==2)
		{
			div=10;
			quo=num;
			num=0;
		}
		else
		{
			quo=num;
			div=0;
			num=0;
		}
		switch(quo)
		{
			case 1:
				cout<<"One ";
				break;
			case 2:
				cout<<"Two ";
				break;
			case 3:
				cout<<"Three ";
				break;	
			case 4:
				cout<<"Four ";
				break;
			case 5:
				cout<<"Five ";
				break;
			case 6:
				cout<<"Six ";
				break;
			case 7:
				cout<<"Seven ";
				break;
			case 8:
				cout<<"Eight ";
				break;
			case 9:
				cout<<"Nine ";
				break;
			case 10:
				cout<<"Ten ";
				break;
			case 11:
				cout<<"Eleven ";
				break;
			case 12:
				cout<<"Twelve ";
				break;
			case 13:
				cout<<"Thirteen ";
				break;
			case 14:
				cout<<"Fourteen ";
				break;
			case 15:
				cout<<"fifteen ";
				break;
			case 16:
				cout<<"Sixteen ";
				break;
			case 17:
				cout<<"Seventeen ";
				break;
			case 18:
				cout<<"Eighteen ";
				break;
			case 19:
				cout<<"Nineteen ";
				break;
			case 20:
				cout<<"twenty ";
				break;
			case 21:
				cout<<"Twenty one ";
				break;
			case 22:
				cout<<"Twenty two ";
				break;
			case 23:
				cout<<"Twenty three ";
				break;
			case 24:
				cout<<"Twenty four ";
				break;
			case 25:
				cout<<"Twenty five ";
				break;
			case 26:
				cout<<"Twenty six ";
				break;
			case 27:
				cout<<"Twenty seven ";
				break;
			case 28:
				cout<<"Twenty eight ";
				break;
			case 29:
				cout<<"Twenty nine ";
				break;
			case 30:
				cout<<"Thirty ";
				break;
			case 31:
				cout<<"Thirty one  ";
				break;
			case 32:
				cout<<"Thirty two ";
				break;
			case 33:
				cout<<"Thirty three ";
				break;
			case 34:
				cout<<"Thirty four ";
				break;
			case 35:
				cout<<"Thirty five ";
				break;
			case 36:
				cout<<"Thirty six ";
				break;
			case 37:
				cout<<"Thirty seven ";
				break;
			case 38:
				cout<<"Thirty eight ";
				break;
			case 39:
				cout<<"Thirty nine ";
				break;
			case 40:
				cout<<"Fourty ";
				break;
			case 41:
				cout<<"Fourty one ";
				break;
			case 42:
				cout<<"Fourty two ";
				break;
			case 43:
				cout<<"Fourty three ";
				break;
			case 44:
				cout<<"Fourty four ";
				break;
			case 45:
				cout<<"Fourty five ";
				break;
			case 46:
				cout<<"Fourty six ";
				break;
			case 47:
				cout<<"Fourty seven ";
				break;
			case 48:
				cout<<"Fourty eight ";
				break;
			case 49:
				cout<<"Fourty nine ";
				break;
			case 50:
				cout<<"Fifty ";
				break;
			case 51:
				cout<<"fifty one ";
				break;
			case 52:
				cout<<"fifty two ";
				break;
			case 53:
				cout<<"fifty three ";
				break;
			case 54:
				cout<<"fifty four ";
				break;
			case 55:
				cout<<"fifty five ";
				break;
			case 56:
				cout<<"fifty six ";
				break;
			case 57:
				cout<<"fifty seven ";
				break;
			case 58:
				cout<<"fifty eight ";
				break;
			case 59:
				cout<<"fifty nine ";
				break;
			case 60:
				cout<<"Sixty ";
				break;
			case 61:
				cout<<"Sixty one ";
				break;
			case 62:
				cout<<"Sixty two ";
				break;
			case 63:
				cout<<"Sixty three ";
				break;
			case 64:
				cout<<"Sixty four ";
				break;
			case 65:
				cout<<"Sixty five ";
				break;
			case 66:
				cout<<"Sixty six ";
				break;
			case 67:
				cout<<"Sixty seven ";
				break;
			case 68:
				cout<<"Sixty eight ";
				break;
			case 69:
				cout<<"Sixty nine ";
				break;
			case 70:	
				cout<<"Seventy ";
				break;
			case 71:
				cout<<"Seventy one ";
				break;
			case 72:
				cout<<"Seventy two ";
				break;
			case 73:
				cout<<"Seventy three ";
				break;
			case 74:
				cout<<"Seventy four ";
				break;
			case 75:
				cout<<"Seventy five ";
				break;
			case 76:
				cout<<"Seventy six ";
				break;
			case 77:
				cout<<"Seventy seven ";
				break;
			case 78:
				cout<<"Seventy eight ";
				break;
			case 79:
				cout<<"Seventy nine ";
				break;
			case 80:
				cout<<"Eighty ";
				break;
			case 81:
				cout<<"Eighty one ";
				break;
			case 82:
				cout<<"Eighty two ";
				break;
			case 83:
				cout<<"Eighty three ";
				break;
			case 84:
				cout<<"Eighty four ";
				break;
			case 85:
				cout<<"Eighty five ";
				break;
			case 86:
				cout<<"Eighty six ";
				break;
			case 87:
				cout<<"Eighty seven ";
				break;
			case 88:
				cout<<"Eighty eight ";
				break;
			case 89:
				cout<<"Eighty nine ";
				break;
			case 90:
				cout<<"Ninty ";
				break;
			case 91:
				cout<<"Ninty one ";
				break;
			case 92:
				cout<<"Ninty two ";
				break;
			case 93:
				cout<<"Ninty three ";
				break;
			case 94:
				cout<<"Ninty four ";
				break;
			case 95:
				cout<<"Ninty five ";
				break;
			case 96:
				cout<<"Ninty six ";
				break;
			case 97:
				cout<<"Ninty seven ";
				break;
			case 98:
				cout<<"Ninty eight ";
				break;
			case 99:
				cout<<"Ninty nine ";
				break;
		}
		switch(div)
		{
			case 10000000:
				cout<<"Crore ";
				break;
			case 100000:
				cout<<"Lakh ";
				break;
			case 1000:
				cout<<"Thousand ";
				break;
			case 100:
				cout<<"Hundred ";
				break;
		}
	}
	if(t==num)
	{
		cout<<"Zero ";
	}
}

int main()
{
	long long int n;
	do
	{
		cout<<"\nEnter a number upto nine digit: ";
		cin>>n;
	}while(n>999999999);
	cout<<"\nAfter converted into Word"<<endl;
	cout<<"__________________________\n"<<endl;
	if(n<0)
	{
		cout<<"Minus ";
		n=-(n);
	}
	convertInWord con(n);
	con.conversion();
	cout<<"\n";
}
