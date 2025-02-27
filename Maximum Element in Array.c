#include <stdio.h>
int main() {
    int size, i;
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max = %d\n", max);
    return 0;
}
