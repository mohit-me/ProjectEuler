#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
long long limit=1000000;
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
    long i=0,cnt=0;
    for(i=0;cnt!=10001;i++)
        {
            if(!sieve[i])
                cnt++;
        }
    cout<<i;
}
