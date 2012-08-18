#include <iostream>
using namespace std;
int main()
{
   unsigned long long j,i,res,len,max=0;
   for(j=1;j<1000000;j++)
   {
      unsigned long long i = j;
      len=0;
			while (i != 1)
			{
				if (i % 2 == 0)
				{
					i /= 2;
					len++;
				}
				else
				{
					i = (3 * i) + 1;
					len++;
				}
			}
            if(len > max)
			{
				max = len;
				res = j;
			}
   }
   cout<<res;
   return 0;
}
