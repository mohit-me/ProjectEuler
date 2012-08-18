#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
long rev(long m)
{
long n=0,i;
for(i=0;m!=0;i++)
{
n=n*10+m%10;
m=m/10;
}
return n;
}
bool isPallindrome(long n)
{
if(n%1000==rev(n/1000))
return true;
else
return false;
}
int main()
{
long i,j,max=0;
for(i=999;i>100;i--)
{
for(j=999;j>100;j--)
{
if(i*j>max&&isPallindrome(i*j))
{
max=i*j;
cout<<i<<" "<<j<<endl;
j=0;
}
else if(i*j<max)
{
j=0;
}
}
}
cout<<max;
return 0;
}
