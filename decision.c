#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%7==0 && x%3==0)
    {
       printf("divisible by 3and 2 ");
    }  
    else
    {
        printf("not divisible by 3and 2");
    } 
    return 0;

}


#include<stdio.h>
int q4()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%3==0 && x%2==0)
    {
       printf("divisible by 3and 2 ");
    }  
    else
    {
        printf("not divisible by 3and 2");
    } 
    return 0;

}


#include<stdio.h>
int q3()
{
    char x;
    printf("enter a alphabate");
    scanf("%c",x);
    if(x>='A' && x<='Z')
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
    return 0;
}

#include<stdio.h>
int q2()
{
    int m1,m2,m3,m4,m5;
    printf("enter 5 subject marks");
    scanf("%d\n %d\n %d\n %d\n %d",&m1,&m2,&m3,&m4,&m5);
    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33 )
        printf("Results Pass");
    else
       printf("results Fail");
    return 0;
}



#include<stdio.h>
int q1()
{
   int cp,sp,p,l;
   
   printf("enter cp and sp");
   scanf("%d %d",&cp,&sp);
   if(cp<sp) //100>120
       printf("profit p=%f",p%sp*100);
   else
       printf("loss l=%f",l%cp*100);

    return 0;

}