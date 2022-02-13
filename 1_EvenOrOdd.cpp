/*
Write a program to check whether a number is even or odd using different ways
input:2
output:EVEN
input:3
output:ODD


*/
#include<iostream>
#include<cstring>
//string sResult;
using namespace std;
//using modular operator
string UsingModularOperator(int iNumber)
{
    if(iNumber%2==0)
        return "EVEN";
    else
        return "ODD";
}
//Conditional Operator/Ternary operator
string TernaryOperator(int iNumber)
{

    return (iNumber%2)?"ODD":"EVEN";
}
//using division nd multiplication operator
string UsingDivisionAndMultiplication(int iNumber)
{
    if((iNumber/2)*2==iNumber)
        return "EVEN";
    else
        return "ODD";
}
//using shift operator
/*
4      0 0 0 1 0 0
4>>1   0 0 0 0 1 0
4<<1   0 0 0 1 0 0
so finally i get 4 back so its even 
now lets try for odd number


5       0 0 0 1 0 1
5>>1    0 0 0 0 1 0   ->2
5<<1    0 0 0 1 0 0   ->4
so aS WE KNOW THAT  ODD number's 1 bit  is always on so if we left shift by one we loss that one bit and when we again do right shift once we cangtg preserve that
value again so it odd number


*/
string UsingShiftOperator(int iNumber)
{
    if((iNumber>>1)<<1==iNumber)
        return "EVEN";
    else
        return "ODD";
}


/*

using AND operator
*/

string UsingAndOperator(int iNumber)
{

    if((iNumber&1)==1)
        return "Odd";
    else
        return "Even";
}
//using OR operator
string UsingOrOperator(int iNumber)
{

    if((iNumber|1)==iNumber)
        return "Odd";
    else
        return "Even";
}
//using xor operator
string UsingXorOperator(int iNumber)
{
    if((iNumber^1)==iNumber+1)
        return "Even";
    else
        return "Odd";
}
int main()

{
    int iNumber=0;
    cout<<"ENter number\n";
    cin>>iNumber;
 //   cout<<UsingModularOperator(iNumber)<<endl;
  // cout<<TernaryOperator(iNumber)<<endl;
 //   cout<<UsingDivisionAndMultiplication(iNumber);
   cout<<UsingXorOperator(iNumber)<<endl; 
    
    
    return 0;
}