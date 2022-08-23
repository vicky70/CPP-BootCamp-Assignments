// Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
#include<stdio.h>
int main(){
    int arr[10],sum=0;
    float avg = 0.0;
    printf("Enter ten number");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 9; i++)
    {
        sum += arr[i];
    }
    avg = sum/10.0;
    printf("average of array elements is: %3f", avg);
    return 0;
}