#include <stdio.h>

void merge_sort(int A[], int p, int r);

void merge(int a[], int p, int q, int r);

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

        printf("\n\n Given Array : \t");
    for (int i = 0; i <n; i++)
    {
        printf("%d\t", arr[i]);
    }

    merge_sort(arr, 0, n-1);
    printf("\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

void merge_sort(int A[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

void merge(int a[], int p, int q, int r)
{
    int n1, n2, i, j, k;
    n1 = q - p + 1;
    n2 = r - q;
    int L[n1],R[n2];
    for (i = 0; i < n1; i++)
        L[i] = a[p+i];
    for (j = 0; j < n2; j++)
        R[j] = a[q+j+1];
    i = 0;
    j = 0;

    for (k = p; k <= r; k++)
    {
        if (L[i] <= R[j] && i < n1)
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
    }

    
}
