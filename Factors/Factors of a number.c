#include<stdio.h>

//Author : Dina IKIREZI
//Purpose : to read number from a user and print its factors
int main()
{
    //variable declaration
    int input,i;

    //read data from user
    printf("Enter any number :");
    scanf("%d",&input);

    printf("Factors of %d are\n",input);
    //logic
    for(i=1;i<=input;i++)
        if (input%i==0)
            printf("%d\n",i);

    return 0;
}
