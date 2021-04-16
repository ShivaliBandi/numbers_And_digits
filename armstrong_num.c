#include<stdio.h>
#include<math.h>
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
int power(int inum,int icnt)
{ int ians=1;
    while(icnt!=0)
    {
        ians=ians*inum;
        icnt--;

    }
    return ians;
    

}
void armstrong(int inum)
{
    int iret=0,isum=0; 
   int  icnt=countDigit(inum);
    int itemp=inum;
 while(itemp!=0)
    {
       
       
          //  printf("%d\t",inum%10);
         iret=power(itemp%10,icnt);
                  itemp=itemp/10;

     isum=isum+iret; 
 //printf("isum=%d  iret=%d  inum=%d\n",isum,iret,inum);
    
    }
    if(isum==inum)
        printf("%d is an armstrong number\n",inum);
    else
    {
        printf("%d is not an armstrong num",inum);
    }
}
int main()
{

    int inum=0;
    printf("enter a number\n");
    scanf("%d",&inum);
    armstrong(inum);
    //printf("count:%d",icnt);
    return 0;
}