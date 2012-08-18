#include <iostream>
#include <vector>
#include <math.h>
#include<cstdio>
using namespace std;
long long sum=0;
void make()
{

        long long limit=2000000;
        long long sqrtlimit = sqrt(limit);
        vector<bool> sieve(limit+1, false);
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
        for(int i=2;i<=limit;i++)
        {
                        if(!sieve[i]) sum+=i;

        }
}

int main()
{
        make();
        cout<<sum;
        return 0;
}
