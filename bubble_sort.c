#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int arr[1024], temp, n, i, j, k, flag;
    printf("Enter size :\t");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter data - %d :\t", i);
        scanf("%d", (arr + i));
    }
    for (i = 0; i < n; i++)
    {
    flag = 0;
        for (j = 0; j < n - i-1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr + j, arr + j + 1);
                flag++;
            }
        }

        if (flag == 0)
            break;

        printf("\n");
        for (k = 0; k < n; k++)
        {
            printf("%d\t", arr[k]);
        }
    }


        printf("\n\n\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}