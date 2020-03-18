#include<iostream>
using namespace std;
class ab
{
    int km,mm,cm;
    int m,n,p;
public:
    void init()
    {
        cout<<"enter the kilo meter: ";
        cin>>km;
        cout<<"enter the meter: ";
        cin>>mm;
        cout<<"enter the centi meter: ";
        cin>>cm;
    }
    void disp()
    {
        cout<<"\t\t\tyou entered:"<<endl;
        cout<<"\n\t\t\t"<<km<<" km "<<mm<<" meter "<<cm<<" cm "<<endl;
    }
    void displa()
    {
        cout<<"\t\t\t\t\t\tnow the result is:"<<endl;
        cout<<"\n\t\t\t\t\t\t"<<m<<" km "<<n<<" meter "<<p<<" cm "<<endl;
    }
    friend ab fun(ab,ab);
};
ab fun(ab x,ab y)
{
    ab h;
    h.m=x.km+y.km;
    h.n=x.mm+y.mm;
    if(h.n>1000)
    {
        h.m=h.m+(h.n/1000);
        h.n=(h.n%1000);
    }
    h.p=x.cm+y.cm;
    if(h.p>100)
    {
        h.n=h.n+(h.p/100);
        h.p=(h.p%100);
    }
    return h;
}
int main()
{
    ab ob,oob,oobb;
    ob.init();
    ob.disp();
    cout<<endl;
    oob.init();
    oob.disp();
    cout<<endl;
    oobb=fun(ob,oob);
    oobb.displa();
}
