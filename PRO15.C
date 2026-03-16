#include <stdio.h>

int main() {
    int arr[] = {2,5,8,12,16,23,38};
    int n = 7, key = 16;
    int low = 0, high = n-1, mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found");
}
