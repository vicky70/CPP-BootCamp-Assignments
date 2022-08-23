// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user
#include<stdio.h>
int main(){
    int n, arr[n];
    printf("Enter size of number you want to enter:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    printf("\nArray before reverse:");

    printf("\nArray after resverse:");
    for (int i = n-1; i >= 0 ; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}