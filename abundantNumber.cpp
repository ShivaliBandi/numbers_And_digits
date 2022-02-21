/*


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