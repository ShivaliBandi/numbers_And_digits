/*
693. Binary Number with Alternating Bits
Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

 

Example 1:

Input: n = 5
Output: true
Explanation: The binary representation of 5 is: 101
Example 2:

Input: n = 7
Output: false
Explanation: The binary representation of 7 is: 111.
Example 3:

Input: n = 11
Output: false
Explanation: The binary representation of 11 is: 1011.
Example 4:

Input: n = 10
Output: true
Explanation: The binary representation of 10 is: 1010.
Example 5:

Input: n = 3
Output: false
 

Constraints:

1 <= n <= 231 - 1



AlterNating_SOlution:
#include <stack>

class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        int temp=-1;
        while(n>0)
        {
            if(temp==(n&1))
                return false;
            temp=n&1;
            n=n>>1;
        }
        return true;
    }
    
};


*/





#include <stack>

class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        stack<int> stack;
        do
        {
         stack.push(n%2);
             n=n/2;
        }while(n!=0);
        int temp=stack.top();
        stack.pop();
 while (!stack.empty()) 
 {
     int temp1=stack.top();
     stack.pop();
        if(temp==temp1)
            return false;
        temp=temp1;
    }
      return true; 
    }
    
};
