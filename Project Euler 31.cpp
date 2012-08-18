#include <iostream>

using namespace std;

int main(){
    long count=0,i,j,k,l,m,n,o,p;
int a[8]={200,100,50,20,10,5,2,1};
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<5;k++)
        {
            for(l=0;l<11;l++)
            {
                for(m=0;m<21;m++)
                {
                    for(n=0;n<41;n++)
                    {
                        for(o=0;o<101;o++)
                        {
                            for(p=0;p<201;p++)
                            {
                                if(i*a[0]+j*a[1]+k*a[2]+l*a[3]+m*a[4]+n*a[5]+o*a[6]+p*a[7]==200)
                                    count++
                            }
                        }
                    }
                }
            }
        }
    }
}
cout<<count;
return 0;
}
