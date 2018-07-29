#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
double f(double x,double qf)
{
        double a=-139.34411+(1.575701*pow(10,5)/x)-(6.642308*pow(10,7)/pow(x,2))+(1.243800*pow(10,10)/pow(x,3))-(8.621949*pow(10,11)/pow(x,4));
        return a-log(qf);
}



int main()
{
cout.precision(5);
cout.setf(ios::fixed);
double fx;
    cout<<"Ta"<<setw(12)<<"f(Ta)"<<endl;
 cout<<"---------------8---------------"<<endl;
for(double i=273.15;i<=313.15;i+=1)
{
 fx=f(i,8.00);
 cout<<i<<setw(12)<<fx<<endl;
}
    cout<<"Ta"<<setw(12)<<"f(Ta)"<<endl;
 cout<<"---------------10---------------"<<endl;
for(double i=273.15;i<=313.15;i+=1)
{
 fx=f(i,10.00);
 cout<<i<<setw(12)<<fx<<endl;
}
    cout<<"Ta"<<setw(12)<<"f(Ta)"<<endl;
 cout<<"---------------12---------------"<<endl;
for(double i=273.15;i<=313.15;i+=1)
{
 fx=f(i,12.00);
 cout<<i<<setw(12)<<fx<<endl;
}
double a,b,c=0,fa,fb,fc,es,Qf;
a:cout<<"Enter the initial value\na = ";
cin>>a;
cout<<"\nb = ";
cin>>b;
cout<<"Enter the degree of accuracy required"<<endl;
cin>>es;
cout<<"Enter the value of Qf:"<<endl;
cin>>Qf;

if(f(a,Qf)*f(b,Qf)>0)
{
    cout<<"Didn't find any root"<<endl;
    goto a;
}
else{
int iter=0;
double temp=0.0;
cout<<"Iter"<<setw(10)<<"lo"<<setw(10)<<"hi"<<setw(12)<<"mid"<<setw(20)<<"relativeError"<<setw(12)<<endl;
cout<<"------------------------------------------------------------------------"<<endl;
while(fabs(a-b)>=es)
{temp=c;
c=(a+b)/2.0;
fa=f(a,Qf);
fb=f(b,Qf);
fc=f(c,Qf);
iter++;
if(iter>1)
//cout<<iter<<setw(12)<<a<<setw(12)<<b<<setw(12)<<c<<setw(12)<<fabs((c-temp)/c)*100.00<<endl;
cout<<iter<<setw(12)<<fabs((c-temp)/c)*100.00<<endl;

if(iter==1)
//cout<<iter<<setw(12)<<a<<setw(12)<<b<<setw(12)<<c<<setw(12)<<" "<<endl;
cout<<iter<<endl;
if(fc==0){
cout<<"The root of the equation is "<<c<<endl;
return 0;
}
else if(fa*fc<0)
b=c;
else
a=c;
}
}

cout<<"The root of the equation is "<<c<<endl;
return 0;
}

