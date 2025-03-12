#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

//Author : Dina IKIREZI
//Purpose : find if a number entered is Armstrong or not
int main()
{
    //Variable declaration
    int n, rem,m,result=0;

    //read value from user
    printf("Enter an integer number :");
    scanf("%d",&n);

    //logic
    m=n;
    printf("m is %d\n",m);
    printf("n is %d\n",n);
    while(m > 0)
    {
       rem= m % 10;
       m= m / 10;
       result=result + rem*rem*rem;
    }

    //print output
    if (result == n)
    printf("%d is ARMSTRONG number",n);
    else
        printf("%d s not ARMSTRONG number",n);

    return 0;
}
