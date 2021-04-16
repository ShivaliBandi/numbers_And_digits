#include<stdio.h>
#define TRUE 1
#define FALSE 0

int chkOccuranceOfDigit(int inum,int idigit)
{
    int digitcnt=0;
while(inum!=0)
    {
      
        
        if(idigit==inum%10)
            digitcnt++;
          inum=inum/10;

    }
    if(digitcnt!=0)    
        return TRUE;
    else
            return FALSE;    

}
int main()
{

    int icnt=0,inum=0,idigit=0,digitcnt=0;
    printf("enter a number\n");
    scanf("%d",&inum);
    printf("enter a digit to b checked");
    scanf("%d",&idigit);
    icnt=chkOccuranceOfDigit(inum);
    if(icnt!=0)    
         printf("TRUE");
    else
    {
        printf("FALSE");
    }
    
    
    return 0;
}