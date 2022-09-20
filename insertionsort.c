#include<stdio.h>


int main(){
    int arr[1024],temp,n,i,j,swap;
    printf("Enter size :\t");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter data - %d :\t",i);
        scanf("%d", (arr + i));
    }
    for(i = 1 ; i<n ; i++){
        temp = arr[i];
        for(j = i; temp > arr[j-1] && j>0; j--){
            arr[j]  = arr[j-1];
        }
        arr[j] = temp;
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }

return 0;
}