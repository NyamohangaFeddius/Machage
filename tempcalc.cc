#include<iostream>
#include"tempcalc.h"
using namespace std;
int main()
{
int sum, a=2,b=3;
double floatsum=0.0,floata=2.3,floatb=4.2;
calculator<int>calc;
calculator<double>fcalc;
sum=calc.add(a,b);
cout<<"The sumof"<<a<<"and"<<b<<"is"<<sum<<endl;
floatsum=fcalc.add(floata,floatb);
cout<<"The sum of"<<floata<<"and"<<floatb<<"is"<<floatsum<<endl;
return 0;
}
