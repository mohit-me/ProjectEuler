#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
long long limit=ceil(sqrt(600851475143LL));
long long sqrtlimit = sqrt(limit);
vector<bool> sieve(limit+1, false);
 
void make()
{
 
        for (int n=4;n<=limit;n=n+2)
        {
                sieve[n]=true;
        }
        for(int n=3;n<sqrtlimit;n=n+2)
        {
                if(!sieve[n])
                {
                        for(int m=n*n;m<=limit;m=m+(2*n))
                        {
                                sieve[m]=true;
                        }
                }
        }
}
 
int main()
{
make();
unsigned long long a,b,max=0,i;
a=600851475143LL;
b=ceil(sqrt(a));
for(i=2;i<b;i++)
{
        if(a%i==0)
        {
                if(!sieve[i])
                        max=i;
        }
}
cout<<max;
}