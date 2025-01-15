#include <stdio.h>


  int linearSearch(int list[], int lastPos, int target) ;

int main() {
    int i,n, target;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int list[n]; 

    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    int lastPos = n - 1; 

    linearSearch(list, lastPos, target);

        
  }
  int location;
  int linearSearch(int list[], int lastPos, int target) {
    for ( location = 0; location <= lastPos; location++) { 
        if (list[location] == target) { 
            printf("Target found at index: %d\n", location);

        }
        
    }
    
}



