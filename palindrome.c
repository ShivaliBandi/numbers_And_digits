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
        printf("%d is a palindrome.", ioriginal);
    else
        printf("%d is not a palindrome.", ioriginal);

}
int main() {
    int n ;
    printf("Enter an integer: ");
    scanf("%d", &n);
    

    return 0;
}