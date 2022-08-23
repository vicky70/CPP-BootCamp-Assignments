// Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int largestElement(int arr[], int);
int main(){
    int n, answer=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    answer = largestElement(arr,n);
    printf("Largest element is: %d",answer);
    return 0;
}
int largestElement(int arr1[], int n){
    int small=arr1[0];
   for (int i = 0; i < n; i++)
    {
        if (small > arr1[i])
        {
            small = arr1[i];
        }
        else
        {
            continue;
        } 
    }
    return small;
}