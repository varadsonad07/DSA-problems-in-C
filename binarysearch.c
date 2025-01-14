#include <stdio.h>
int binarySearch(int list[], int low, int high, int target);

int main() {
    int i,n, target;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int list[n];
    printf("Enter the elements in sorted order:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    printf("Enter the target element to search: ");
    scanf("%d", &target);
    
    int low=0;
    int high=n-1;
   binarySearch(list, low, high, target);

    
}

int binarySearch(int list[], int low, int high, int target) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (list[mid] == target) {
    printf("index is %d ",mid);
        }

        if (list[mid] > target) {
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }

    } 

    
}
