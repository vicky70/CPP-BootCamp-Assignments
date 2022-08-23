// Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
void sort(int arr[], int);
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    return 0;
}
void sort(int b[], int n){
    for (int j = 0; j <= 9; j++)
    {
        for (int i = j+1; i <= 9 ; i++)
        {
            if (b[j] > b[i])
            {
                int temp = b[j];
                b[j] = b[i];
                b[i] = temp;
            }
        }
    }
    printf("Sorted array is:");
    for (int j = 0; j < n; j++)
    {
        printf("%d ",b[j]);
    }
}