#include<stdio.h>

int main() {
    int n1, n2, min;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in min
    min = (n1 > n2) ? n1 : n2;

    while (1) {
        if (min % n1 == 0 && min % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, min);
            break;
        }
        ++min;
    }
    return 0;
}
