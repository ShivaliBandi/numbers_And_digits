//Write a C Program to compute 1/n!.
#include<iostream>
using namespace std;
int computeFactorialRecursiveApproach(int inumber)
{
    static int iproduct=1;
    if(inumber!=1)
    {
        iproduct*=inumber;
       return computeFactorialRecursiveApproach(inumber-1);
        
    }
    else

        return iproduct;
        
    
}
int computeFactorialIterationApproach(int inumber)
{
    int iproduct=1;
    do
    {
        iproduct*=inumber;
        
    }while((inumber--)!=1);
    return iproduct;
}
int main()
{
    int inum=0;
    cout<<"Enter number";
    cin>>inum;
    //cout<<computeFactorialIterationApproach(inum);
    cout<<(double)1/computeFactorialRecursiveApproach(inum);
    
}