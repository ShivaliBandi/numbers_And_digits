#include<stdio.h>
int countDigit(int inum)
{
    int icnt=0;
    while(inum!=0)
    {
        inum=inum/10;
        icnt++;

    }
    return icnt;
}
int main()
{

    int icnt=0,inum=0;
    printf("enter a number\n");
    scanf("%d",&inum);
    icnt=countDigit(inum);
    printf("count:%d",icnt);
    return 0;
}