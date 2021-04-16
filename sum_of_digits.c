#include<stdio.h>
int main()
{

    int isum=0,inum=0,idigit=0;
    printf("enter a number\n");
    scanf("%d",&inum);
    while(inum>0)
    {
      
        idigit=inum%10;
        isum=isum+idigit;
            inum=inum/10; 


    }
    printf("sum is:%d",isum);
    return 0;
}