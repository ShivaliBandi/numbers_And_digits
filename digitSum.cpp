//Write a C Program to compute 1/n!.
#include<iostream>
using namespace std;
int SumDigitIterative(int inum)
{
    int isum=0;
    while(inum!=0)
    {   
        isum+=(inum%10);
        inum=inum/10;

    }
    return isum;
}
int SumDigitRecursive(int inum)
{
    static int isum=0;
    if(inum!=0)
    {   
        isum+=(inum%10);
        return SumDigitRecursive(inum/10);

    }
    else
    return isum;
}
int main()
{
    int inum=0;
    cout<<"Enter number";
    cin>>inum;
    //cout<<SumDigitIterative(inum);
    cout<<SumDigitRecursive(inum);
}