#include<stdio.h>


int main() {

    int n;
    long long result = 1;
    int x = 0;
    printf("\n\n\n                                                      Enter Factorial: ");
    scanf_s("%d", &n);
    x = n;

    while (x > 0) {
        result *= x;
        if (x != 0)
            printf("\n                  %d  -X-  %d\n", n, x - 1);
            printf("                      +     ");
        x--;
    }
    printf("                      %lld", result);
}
