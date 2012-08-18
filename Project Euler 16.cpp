#include<stdio.h>
void pownew(int);
int main(void)
{
   int n,pow2=1000;
   long int ans;
   pownew(pow2);

return 0;
}

void pownew(int pow2)
{
     int num,ans[1000],i,temp,x,index,zero;
     index=1;
     ans[0]=1;
     temp=0;
     x=0;
     num=1;
     zero=0;
     while(num<=pow2)
     {
        for(i=0;i<index;i++)
        {
              x=ans[i]*2+temp;
              ans[i]=x%10;
              temp=x/10;
        }

        while(temp>0)
        {i=index;
                    ans[i]=temp%10;
                     temp=temp/10;
                     index++;
                     }
     num++;
     }
     long sum=0;
     for(i=index;i>0;i--)
     {
         sum+=ans[i-1];
     }
     printf("%ld\n",sum);
}
