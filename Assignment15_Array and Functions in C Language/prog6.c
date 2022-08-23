// Write a function in C to read n number of values in an array and display it in reverse order
#include<stdio.h>
void arrayReverse(int arr[], int);
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    arrayReverse(arr, n);
    return 0;
}
void arrayReverse(int b[], int x){
    printf("Reversed array is:");
    for (int i = x-1; i >= 0; i--)
    {
        printf("%d ",b[i]);
    }
    
}