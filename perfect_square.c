#include<stdio.h>
#include<math.h>
#define TRUE 1
#define FALSE 0
int checkPerfectSquare(int inum)
{

   int isquare=0;
   float froot=sqrt((double)inum);
   isquare=froot;
    if(froot==isquare)
        return TRUE;
    else 
        return FALSE;
}
int main()
{
    
    int iret,ivalue=0;
    printf("enter a number to check its perftect square or not\n");
    scanf("%d",&ivalue);
    iret=checkPerfectSquare(ivalue);
    if(iret!=0)
        printf("\nits perfect square");
    else
        printf("\nits not perfect square\n");
    
    
    return 0;
}