// Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user
#include<stdio.h>
int main(){
    int arr[10], evenSum=0, oddSum=0;
    printf("Enter 10 number:");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]%2 == 0)
        {
            evenSum += arr[i];
        }
        else{
            oddSum += arr[i];
        }
    }
    printf("The Even sum is: %d\nAnd the Odd sum is: %d",evenSum, oddSum);
    return 0;
}