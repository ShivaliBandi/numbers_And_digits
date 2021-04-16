#include <stdio.h>

void palindrome(int n)
{
    int ireverse = 0, remainder, ioriginal;
ioriginal = n;
    while (n != 0) {
        remainder = n % 10;
        ireverse = ireverse * 10 + remainder;
        n /= 10;
    }
    if (ioriginal == ireverse)
        printf("%d is a palindrome.\n", ioriginal);
    
}
int main() {
    int n ;
    printf("Enter an integer for range: ");
    scanf("%d", &n);
    
    int icnt=1;
    while(icnt!=n)
    {
        palindrome(icnt);
        icnt++;

    }
    return 0;
}