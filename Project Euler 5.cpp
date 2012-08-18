#include <iostream>
#include <math.h>
using namespace std;
long gcd(long m,long n)
{
    while(n!=m)
    {
      if(n>m)
        n = n-m;
      else
        m = m-n;
     }
     return n;

}
int main()
{
    long long ans=1;
    int i;
    for(i=1;i<=20;i++)
    {
        ans=ans*i/gcd(ans,i);
    }
    cout<<ans;
        return 0;
}
