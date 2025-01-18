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

    printf("reverse array is: \n");
    for (i =n-1; i >=0; i--) {
        printf("%d\t", a[i]);
    }

    return 0;
}

