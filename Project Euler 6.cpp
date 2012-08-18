#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long sumofsq=0,sqofsum=0;
    int n=100;
    sqofsum=pow(n*(n+1)/2,2);
    sumofsq=n*(n+1)*(2*n+1)/6;
    cout<<sqofsum-sumofsq;
        return 0;
}
