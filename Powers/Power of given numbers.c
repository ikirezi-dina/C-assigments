#include<stdio.h>
#include<conio.h>

//Author  : Dina IKIREZI
// Purpose : to read a,b values and print a power b value
int main()
{
    //variable declaration
    int a,b,result=1,i;

    //read values from user
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",& b);


    //logic
    for(i=1;i<=b;i++)
        result=result*a;

    //print the result
    printf("%d power %d = %d",a,b,result);

    return 0;
}
