#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n;

    printf("Enter size: ");
    scanf("%d",&n);

    arr = (int*) malloc(n * sizeof(int));

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Array elements:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    free(arr);
}
