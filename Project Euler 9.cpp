#include <iostream>
#include <cmath>
using namespace std;
int main()
{
        long a,b,c;
        for(a=1;a<1000/3;a++)
        {
            for(b=a;b<1000/2;b++)
            {
                c=1000-a-b;
                {
                    if(c*c==b*b+a*a&&a+b+c==1000)
                        {
                            cout<<a*b*c;
                            return 0;
                        }
                }
            }
        }
}
