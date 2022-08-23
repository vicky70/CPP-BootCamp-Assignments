//Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void frequency(int*, int);
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    frequency(a,n);
    return 0;
}
void frequency(int b[], int x){
    int count=0;
    for (int i = 0; i < x; i++)
    {
        count=0;
        for (int j = 0; j < x; j++)
        {
            if (b[i] == b[j])
            {
                count++;
            }
        }
        printf("frequency of %d is %d:\n",b[i], count);
    }
}