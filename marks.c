// #include<stdio.h>
// int mani()
// {
//     int m1,m2,m3,m4,m5;
//     printf("enter 5 subject marks");
//     scanf("%d\n %d\n %d\n %d\n %d",&m1,&m2,&m3,&m4,&m5);
//     if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33 )
//         printf("passing marks");
//     else
//        printf("failing marks");
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//    int m1,m2,m3,m4,m5;
//     printf("Enter marks of five subjects: ");
//     scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

//     if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
//         printf("Result: PASS");
        
//     else
//         printf("Result: FAIL");
//     printf("\n");;
// }
//     return 0

#include<stdio.h>
int main()
{
    char x;
    printf("enter a alphabate");
    scanf("%c",&x);
    if(x<='A' || x<='Z')
    {
        printf("Uppercase");
    }
    if(x>='a' && x<='z')
    {
        printf("Lowercase");
    }
    return 0;
}