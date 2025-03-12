#include<stdio.h>
#include<conio.h>
//Author : Dina IKIREZI
//Purpose : to find Fibonacci series of a number entered
int main ()
{
    //variable declaration
     int n,i,a=0,b=1,c;

    //read values from user
    printf("Enter no. of terms to be printed (no.> 2 ) :");
    scanf("%d",&n);

    //logic
    printf("Fibonacci Series :0 1");
    for(i=1; i <= n - 2; i++)
    {
        c=a+b;
        a=b;
        b=c;
    //print the output
        printf(" %d", c);

    }


    return 0;
}
