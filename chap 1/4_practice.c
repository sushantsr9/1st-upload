#include<stdio.h>
int main()
{
    int principle=1000, rate=5, years=1,simpleInterest;
    simpleInterest =(principle*rate*years)/100;
    printf("Simple Interest is %d",simpleInterest);

    return 0;
}