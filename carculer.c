#include <stdio.h>

int r = -1;
int f = -1;

void add(int arr[], int n, int element) {
    if (f == -1 && r == -1) {
        f = r = 0;
        arr[r] = element;
    } else if (((r + 1) % n) == f) {
        printf("Queue is full.\n");
    } else {
        r = (r + 1) % n;
        arr[r] = element;
    }
}

void delete(int arr[], int n) {
    if (f == -1 && r == -1) {
        printf("Queue is empty!\n");
    } else if (f == r)
     {
        f = r = -1;
    } else {
        printf("%d\n", arr[f]);
        f = (f + 1) % n;
    }
}

void print(int arr[], int n) {
    int i = f;
    if (f == -1 && r == -1) {
        printf("Queue is empty.\n");
    } else {
        while (i != r) {
            printf("%d ", arr[i]);
            i = (i + 1) % n;
        }
        printf("%d\n", arr[r]);
    }
}

int main() {
    int arr[5];
    int n = 5;
    int element;

    add(arr, n, 25);
    add(arr, n, 30);
    add(arr, n, 15);
    add(arr, n, 10);
    add(arr, n, 20);


    print(arr, n);

    delete(arr,0);
    delete(arr,1);

    print(arr, n);

    return 0;
}
