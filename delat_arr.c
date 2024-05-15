#include <stdio.h>

int deelet(int index, int arr[], int size) 
{
    printf("Enter the size: ");
    scanf("%d", &size);
    
    for (int k = 0; k < size; k++) {
        scanf("%d", &arr[k]);
    }

    for (int i = index; i < size; i++) {
        arr[i] = arr[i + 1];
    }


    for (int i = 0; i < size - 1; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int main() {
    int index = 2;
    int arr[100];
    int size;
    deelet(index, arr, size);

    return 0;
}




