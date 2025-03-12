#include<stdio.h>
//Author : Dina IKIREZI
//Purpose : To provide Grade to user according to the average of the marks entered

int main ()
{
    //variable declaration
    int n=0,m,i,ave;

    //logic
    for(i=1; i<=5; i++)
    {
        //read data from user
        printf("Enter the marks for five courses :");
        scanf("%d",&m);
        n=n+m;
    }

    //calculating the average
    ave=n/5;
    printf("value of n is %d\n",n);
    printf("value of average is %d\n",ave);
    if (ave>=80&&ave<=100)
    {
       printf("Excellent");
    }
     else if (ave>=70&&ave<80)
    {
       printf("Very Good");
    }
    else if (ave>=60&&ave<70)
    {
       printf("Good");
    }
    else if (ave>=50&&ave<60)
    {
       printf("Pass");
    }
    else if (ave>=40&&ave<50)
    {
       printf("Fail");
    }
    else
    {
         printf("Marks out system!");
    }

    return 0;

}
