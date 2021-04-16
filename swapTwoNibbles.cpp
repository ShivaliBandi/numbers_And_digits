/*
GEEKSFORGEEKS:Swap two nibbles in a byte 
Given a number N, swap the two nibbles in it and find the resulting number. 
 

Example 1:

Input:
N = 100
Output:
70
Explanation:
100 in binary is 01100100, 
two nibbles are (0110) and (0100)
If we swap the two nibbles, we get
01000110 which is 70 in decimal

Example 2:

Input:
N = 129
Output:
24
Explanation:
129 in binary is 10000001, 
two nibbles are (1000) and (0001)
If we swap the two nibbles, we get
00011000 which is 24 in decimal

Your Task:
You don't need to read input or print anything. Your task is to complete the function swapNibbles() which takes an integer N as input parameters and returns an integer after swapping nibbles in the binary representation of N.
 

Expected Time Complexity: O(1)
Expected Space Complexity: O(1)
 

Constraints:
0 ≤ N ≤ 255


*/
class Solution{
public:
    int swapNibbles(unsigned char x){
        // code here
        unsigned mask1=15,mask2,mask3;
        mask2=mask1&x;
        mask2=mask2<<4;
        
        mask1=mask1<<4;
        mask3=mask1&x;
        mask3=mask3>>4;
        mask2=mask2|mask3;
       
        return mask2;
    }
};
