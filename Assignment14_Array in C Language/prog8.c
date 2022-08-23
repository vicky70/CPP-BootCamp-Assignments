// Write a program to find the second smallest number in an array.Take array values
// from the user.
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 number:");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j <= 9; j++)
    {
        for (int i = j+1; i <= 9 ; i++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("Second smallest number in array is: %d", arr[1]);
    return 0;
}