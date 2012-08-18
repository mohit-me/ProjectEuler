#include <iostream>
#include<iomanip>
using namespace std;
double fact(int i)
{
    int j;
    double f=1;
    for(j=1;j<i+1;j++)
    {
        f*=j;
    }
    return f;
}
double gridans(int i)
{
    return fact(i+i)/(fact(i)*fact(i+i-i));
}
int main()
{
    int i;
   for(i=0;i<21;i++)
   {
       cout<<setprecision(15)<<gridans(i)<<endl;
   }
   return 0;
}
