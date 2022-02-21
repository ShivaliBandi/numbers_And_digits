/*
Ugly numbers are those number whose prime factors are 2, 3 or 5. 
From 1 to 15, there are 11 ugly numbers 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15. 
The numbers 7, 11, 13 are not ugly because they are prime. 
The number 14 is not ugly because in its prime factor the 7 will come.

*/
#include<iostream>
using namespace std;
int main()
{
    int inumber=0,iflag=0;
    cout<<"Enter a number"<<endl;
    cin>>inumber;
    while(inumber!=1)
    {
        if(inumber%2==0)
            inumber/=2;
        else if(inumber%3==0)
            inumber/=3;
        else if(inumber%5==0)
            inumber/=5;
        else
        {
            iflag=1;
            break;
        }
        
    }
    if(iflag==0)
        cout<<" Is an ugly number"<<endl;
    else
        cout<<" Is not an ugly number"<<endl;

    return 0;
}