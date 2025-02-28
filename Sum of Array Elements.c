 /*Problem: Sum of Array Elements
 Write a program that takes an array of integers and finds the sum of its elements
using a loop.*/

#include <stdio.h>
int main() {
    int size, i;
        scanf("%d", &size);
        int arr[size];
        for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
        int sum=0;
        for (int i=0; i<size; i++){
        sum+=arr[i];
   }
   printf("Sum of the array = %d\n", sum);
    return 0;
}
