#include<stdio.h>
#include<conio.h>
//Author : Dina IKIREZI
//Purpose : to check if a number entered is prime or not

int main ()
{
    //variable declaration
    int input,i,count=0;

    //read data from user
    printf("Enter any number :");
    scanf("%d",&input);

    //logic
    for(i=2; i< input; i++)
        if (input%i==0)
            break ;

    //print output
    if (i==input)
        printf("%d s a Prime number",input);
    else
        printf("%d is not a Prime number",input);

    return 0;
}
