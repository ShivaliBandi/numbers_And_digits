#include<iostream>
using namespace std;
int countDigitIterative(int inum)
{
    int icount=0;
    while(inum!=0)
    {   
        icount++;
        inum=inum/10;

    }
    return icount;
}
int countDigitRecursive(int inum)
{
    static int icount=0;
    if(inum!=0)
    {   
        icount++;
        return countDigitRecursive(inum/10);

    }
    else
    return icount;
}
int main()
{
    int inum=0;
    cout<<"Enter number";
    cin>>inum;
    //cout<<countDigitIterative(inum);
    cout<<countDigitRecursive(inum);
    
}