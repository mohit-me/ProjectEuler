#include<iostream>
using namespace std;
int main()
{
long long sum=0;
long a=1,b=2,c,i;
for(i=0;c<4000000;i++)
{
        if(b%2==0)
        {
                sum+=b;
        }
        c=a+b;
        a=b;
        b=c;

}
cout<<sum;
}