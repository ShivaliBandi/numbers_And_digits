#include<stdio.h>
void reverseDigit(int inum)
{
   if(inum!=0)
    {
       
       
            printf("%d\t",inum%10);

         inum=inum/10;
    reverseDigit(inum);
    }
   

}
int main()
{

    int inum=0;
    printf("enter a number\n");
    scanf("%d",&inum);
   reverseDigit(inum);
  printf("\n");
    
    
    return 0;
}