#include<stdio.h>
#include<math.h>
int main()
{
     int a=12;
     int b=12;
     printf("The value of a+b is %d\n", a+b);
     printf("The value of a-b is %d\n", a-b);
     printf("The value of a*b is %d\n", a*b);
     printf("The value of a/b is %d\n", a/b);

     int z;
     z=b * a; //legal
     //b * a = z; //illegal
     printf("the value of z is %d\n", z);

     printf("5 when divided by 2 leaver a remainder of %d\n", 5%2);
     printf("-5 when divided by 2 leaver a remainder of %d\n", -5%2);
     printf("5 when divided by 2 leaver a remainder of %d\n", 5%-2);

     //No operator is assumed to be present
     //printf("The value of 4 * 5 is %d\n", (4)(5)); -->will not return 20/wrong!! 
     printf("The value of 4 * 5 is %d\n", (4)*(5));

     // There is no operator tp perform exponentiation in C
     printf("The Value of 4 ^ 5 is %d\n", 4^5); //--> will not produce 4 to the power 5
     printf("The value of 4 to the power 5 is %f\n", pow(4, 5));//use math.h(library)

    //  int and int --> int
    //  int and float --> float
    //  float and float --> float
    
    // Eg:-
    printf("The Value of 5+2 is %d\n",5+2);
    printf("The value of 5+2.3 is %f\n",5+2.3);
    printf("The value of 5.2+7.2 is %f\n",5.2+7.2);
    printf("The Value of 3.0/9 is %d\n",3.0/9 );



    return 0;
}