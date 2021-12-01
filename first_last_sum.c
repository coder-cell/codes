#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>

int main()
{

    int T, N, n = 0;
    // clrscr();
    printf("Enter no of testcases T where  1 <= T <= 1000 :\t");
    scanf("%d", &T);
    while (n != 1)
    {
        if (T >= 1 && T <= 1000)
        {
            n = 1;
        }
        else
        {
            printf("Enter a valid number i.e 1 <= T <= 1000 :\t");
            scanf("%d", &T);
        }
    }

    int arr[T];
    n = 0;
    for (int i = 0; i < T; i++)
    {
        printf("Enter your integer N%d where  1 <= N <= 1000000 :\t", i + 1);
        scanf("%d", &arr[i]);
        while (n != 1)
        {
            fflush(stdin);
            if (arr[i] >= 1 && arr[i] <= 1000000)
            {
                n = 1;
            }
            else
            {
                printf("Enter a valid integer N%d i.e 1 <= N <= 1000000 :\t", i + 1);
                scanf("%d", &arr[i]);
            }
            fflush(stdin);
        }
        n = 0;
    }

    for (int i = 0; i < T; i++)
    {
        int num_last = arr[i] % 10;
        int num_first = arr[i];

        while (num_first >= 10)
        {
            num_first = num_first / 10;
        }
        printf("SUM of first and last digit of N%d is %d\n", i + 1, num_first + num_last);
        // printf("last digit %d\n", num_last);
        // printf("first digit %d\n", num_first);
    }

    // getch();
    return 0;
}