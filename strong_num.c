#include<stdio.h>
int factorial(int inum)
{
    int ians=inum;
    while(inum>0 && --inum)
        ians*=inum;
    return ians;
}
void strongNum(int inum)
{
    int isum=0,itemp=inum,idigit,iret=0;
     while(itemp>0)
    {
      
        idigit=itemp%10;
        iret=factorial(idigit);
        isum=iret+isum;
            itemp=itemp/10; 
      

    }
    if(isum==inum)
        printf("%d is strong number",inum);
    else
                printf("%d is not a strong number",inum);

    


}


int main()
{
    int inum=0;
    printf("enter a number");
    scanf("%d",&inum);
    strongNum(inum);
    return 0;
}