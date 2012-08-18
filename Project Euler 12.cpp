#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
long NumberOfDivisors(long number) {
    long nod = 0;
    long srt = (long) sqrt(number);

    for(long i = 1; i<= srt; i++){
        if(number % i == 0){
            nod += 2;
        }
    }
    if (srt * srt == number) {
        nod--;
    }
    return nod;
}
int main()
{
    long number = 0;
    long i = 1;

    while(NumberOfDivisors(number) < 500){
        number += i;
        i++;
    }
    cout<<number;
}
