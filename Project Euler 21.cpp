#include<iostream>
using namespace std;
int main()
    {
    long result[100000]={0};
    long i, j, p, t, n;
    for (i=0;i<100000;i++)
        {
        p=i+1;
        for (j=2*p; j<=100000; j+=p)
            {
            result[j-1]+=p;
            }
        }
        n=0;
    for(i=0;i<10000;i++)
    {
        if(result[result[i-1]-1]==i&&result[i-1]!=i)
            {
                n+=i;
                cout<<i<<" "<<result[i-1]<<endl;
            }
    }
    cout<<n;
    return 0;
    }

