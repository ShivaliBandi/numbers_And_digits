/*
an abundant number or excessive number is a number for which the sum of its 
proper divisors is greater than the number.
example
input:12
factors:1,2,3,4,6-->sum=16
so now sum>input
it is abundant number
input:76
factors:1,2,4,19,38-->sum is 64
so here sum<input
its not an abundant number
*/
bool abundantNumber(int inumber)
{
    int isum=0;
    for(int i=1;i<=inumber/2;i++)
    {
        if(inumber%i==0)
            isum+=i;
            
    }
    if(isum>inumber)
    return true;
    else
    return false;
}
#include<iostream>
using namespace std;
int main()
{
    int inumber=0;
    cout<<"Enter a number"<<endl;
    cin>>inumber;
    if(abundantNumber(inumber)==true)
        cout<<" Is an abundant number"<<endl;
    else
        cout<<" Is not an abundant number"<<endl;

    return 0;
}
