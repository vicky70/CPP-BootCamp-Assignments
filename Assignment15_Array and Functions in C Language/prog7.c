// Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
void duplicateElement(int arr[], int, int);
int main(){
    int count,duplicate;
    printf("Enter size of array:");
    scanf("%d",&count);
    int arr[count];
    printf("Enter array elements:");
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to find the Duplicate:");
    scanf("%d",&duplicate);
    duplicateElement(arr, count, duplicate);
}
void duplicateElement(int b[], int n, int d){
    // [2, 3, 6, 1, 2, 9]
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == d)
        {
            count++;
        }
        else{
            continue;
        }
    }
    if (count == 0)
    {
        printf("There is no duplicate element in array:");
    }
    else{
        printf("Duplicate elements found %d times",count);
    }
}