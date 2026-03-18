#include <stdio.h>

int main() {
    int arr[]={10,5,20,8,15};
    int n=5;

    int largest=arr[0], second=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
            second = arr[i];
    }

    printf("Second largest = %d",second);
}
