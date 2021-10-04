#include <stdio.h>

//Utility function for swapping
void swap(int* a, int* b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

//Function to carry out the sorting of the partitioned arrays
int partition(int A[], int p, int r){
    int x = A[r], i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j] <= x){
            i = i + 1;
            swap(&A[i], &A[j]);
        }     
    }
    swap(&A[i + 1], &A[r]);
    return i + 1;
}

//Recursive function to partition the array at the pivot element
void quick_sort(int A[], int p, int r){
    if (p < r){
        int q = partition(A, p, r);
        quick_sort(A, p, q - 1);
        quick_sort(A, q + 1, r);
    }     
}        

//Driver code
int main(){
    int arr[20], n, c, s, x, index;
    printf("Enter the number of elements in the unsorted array ");
    scanf("%d", &n);
    printf("Enter the elements of the unsorted array ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quick_sort(arr, 0, n - 1);
            
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
