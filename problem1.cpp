#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
double func(double x)
{
        double a=exp(x)-5*x*x;
        return a;
}

int main()
{
cout.precision(5);
cout.setf(ios::fixed);
 double x=-1,fx;
 cout<<"x"<<setw(12)<<"fx"<<endl;
 cout<<"-------------------------"<<endl;
 for(double i=-1;i<=1;i+=0.1)
 {
 fx=func(i);
 cout<<i<<setw(12)<<fx<<endl;
 }
 return 0;
}
