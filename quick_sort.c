#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int first, int last)
{
    int i, j;
    int x = a[last];
    i = first - 1 ;
    for (j = first; j <= last - 1; j++)
    {
        if (a[j] <= x)
        {
            i = i + 1;
            swap(a + i, a + j);
        }
    }
    swap(a + i + 1, a + last);
    return i + 1;
}

void quicksort(int A[], int first, int last)
{
    int pivot;
    if (first < last)
    {

        pivot = partition(A, first, last);
        quicksort(A, first, pivot - 1);
        quicksort(A, pivot + 1, last);

        printf("\n");
    for (int i = 0; i <= last; i++)
    {
        printf("%d\t", A[i]);
    }
    }
}

int main()
{
    int arr[1024], b[1024], n, i;
    printf("Enter size :\t");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter data - %d :\t", i);
        scanf("%d", (arr + i));
    }

quicksort(arr,0,n-1);

    printf("\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}