#include<iostream>
#include<math.h> 
using namespace std;
int digitCount(int inumber)
{
    int isum=0;
    while(inumber>0)
    {
        isum++;
        inumber/=10;
    }
    return isum;
}
int kaprekarNumber(unsigned long int inumber)
{
  int sqr=inumber*inumber,icount=digitCount(sqr),p,flag=0;
  for(int i=1;i<icount;i++)
  {
      p=pow(10,i);
      
      if(((sqr/p)+(sqr%p))==inumber)
        return 1;
   
  }

  return 0;
}

int main()
{
    unsigned long int inumber =0;
    cout<<"Enter Number"<<endl;
    cin>>inumber;
    if(kaprekarNumber(inumber)==1)
        cout<<"It is kaprekar number"<<endl;
    else
        cout<<"Its not keprekar number"<<endl;
    return 0;
}