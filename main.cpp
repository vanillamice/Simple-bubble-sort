#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*pseduo code for the bubble sort function 
we need to move for the size of the array and compare every 2 items together
we start at arr[1] and compare it to arr[1-1] till we reach arr[n] and arr[n-1]

*/

void bubblesort(int arr[], int n)
{
    for (int breakcount = 0; breakcount < n*n; breakcount++) {
        for (int i = 1; i < n; i++) {
            if (arr[i - 1] > arr[i]) {
                swap(&arr[i], &arr[i - 1]);
            }
            else {
                breakcount++;
            }
        }
    }
}
void printArray(int arr[], int size)
{
    int m;
    for (m = 0; m < size; m++)
        printf("%d ", arr[m]);
}

int main()
{
    int arr[] = { 23,78,45,8,32,56 };
    int n = 6;
    bubblesort(arr, n);
    printArray(arr, n);


}

