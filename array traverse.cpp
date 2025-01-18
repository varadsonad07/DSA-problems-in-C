#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the array size: \n");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("traverse array is: \n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}

