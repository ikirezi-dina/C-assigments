#include <stdio.h>
//Author : Dina IKIREZI
//Purpose : finding the factorial of entered number using function

int main() {

    //variable declaration
    int input;

    // function declaration
int fact (int n);

    //read data from user
    printf("Enter any integer number :");
    scanf("%d",&input);





    //print results and function calling
    printf("%d! is %d", input, fact(input));

    return 0;

}
       //Function definition
int fact(int n)
{
    int a=1,i;
    for (i=1;i<=n;i++)
        a=a*i;
    return a;
}

