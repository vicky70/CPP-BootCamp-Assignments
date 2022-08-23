// Write a function in C to print all unique elements in an array.
#include<stdio.h>
void uniqueArray(int arr[], int);
int main(){
    int count;
    printf("Enter size of array:");
    scanf("%d",&count);
    int arr[count];
    printf("Enter array elements:");
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&arr[i]);
    }
    uniqueArray(arr, count);
}
void uniqueArray(int b[], int x){
    int flag = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 1; j < x-1; j++)
        {
            if (b[i] == b[j] && i != j)
            {
                flag = 1;
                break;
            }
            else{
                continue;
            }
        }
        if (flag == 0)
        {
            printf("%d ", b[i]);
        }
        else{
            continue;
        }
    }
}