#include<stdio.h>
void reverseDigit(int inum)
{
    int digit=0;
   while(inum!=0)
    {
       digit=inum%10;

         inum=inum/10;
   
    }
   printf("digit is %d",digit);

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