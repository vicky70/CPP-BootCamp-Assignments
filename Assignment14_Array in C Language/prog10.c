//  Write a program in C to copy the elements of one array into another array.Take array
// values from the use
#include<stdio.h>
int main(){
    int x;
    printf("Enter array size:");
    scanf("%d",&x);
    int arr[x],arr1[x];
    printf("Enter array elements:");
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&arr[i]);
        arr1[i] = arr[i];
    }
    printf("\nElements of first array:");
    for (int i = 0; i < x; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nElements of scond array;");
    for (int i = 0; i < x; i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}