#include<stdio.h>
void prime(int inum)
{
    int i=2;
    while(i<inum/2 && inum%i!=0)
        i++;
    if(inum==1)
        printf("1 is nor prime nor composite");
    else if(i>=inum/2 && inum!=4)
        printf("%d ",inum);
    
    
    
}
void primefactors(int inum)
{
    int i=2;
    while (i<inum)
    {
        if(inum%i==0)
           prime(i);
        i++;
    }
    //printf("GCD IS %d",igcd);
    

}

int main()
{
    int inum;
    printf("enter any number\n");
    scanf("%d",&inum);
    primefactors(inum);
    printf("\n");

    return 0;
}