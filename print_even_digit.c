#include<stdio.h>
int main()
{

    int inum=0;
    printf("enter a number\n");
    scanf("%d",&inum);
   
    while(inum!=0)
    {
       
        if(inum%2==0)
            printf("%d\t",inum%10);

         inum=inum/10;

    }
    printf("\n");
    
    
    return 0;
}