#include<stdio.h>
#include <stdlib.h>

int main()
{
//Author : Dina IKIREZI
//Purpose : finding the multiplication of a number entered by a user

    //variable declaration
    int input,i;

    //read data from a user
    printf("Enter any number:");
    scanf("%d",&input);

     printf("The multiplication table of %d is : \n",input);

    //logic
    for(i=1;i<=10;i++)
        printf("%dx%d=%d",input,i,input*i);


    return 0;
}
