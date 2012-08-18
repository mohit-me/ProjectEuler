#include<iostream>
#include<cmath>
using namespace std;
double phi=(1+sqrt(5))/2;
double c=log10(5)/2;
int main()
{
    int n=1;
    while(1)
    {
        if(n*log10(phi)-c>=999)
            {
                cout<<n;
                return  0;
            }
            n++;
    }
}
