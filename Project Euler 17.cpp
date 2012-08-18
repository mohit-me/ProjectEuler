#include <stdio.h>

int main(void)
{
  int i,j,a,b;
  long long int n=0;
  int nb1[20] = {0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
  int nb2[10] = {0,0,6,6,5,5,5,7,6,6};
  for(i=1;i<=1000;i++){
    a=0;
    j=i%100;
    if(j<20)
      a+=nb1[j];
    else{
      a+=nb1[j%10];
      a+=nb2[j/10];
    }
    b=0;
    j=i/100;
    if(j!=0){
      if(a!=0)
    b+=3;
      if(j%10)
    b+=7;
      if(j/10)
    b+=8;
      b+=nb1[j%10];
      b+=nb1[j/10];
    }
    n+=(a+b);
  }
  printf("%lld\n",n);
  return 0;
}
