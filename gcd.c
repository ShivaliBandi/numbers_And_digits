#include<stdio.h>
void commonfactors(int inum1,int inum2)
{
    int i=2,igcd=0;
    while (i<inum1 || i<inum2)
    {
        if(inum1%i==0 && inum2%i==0)
           igcd=i;
        i++;
    }
    printf("GCD IS %d",igcd);
    

}

int main()
{
    int inum1,inum2;
    printf("enter any 2 numbers\n");
    scanf("%d%d",&inum1,&inum2);
    commonfactors(inum1,inum2);


    return 0;
}