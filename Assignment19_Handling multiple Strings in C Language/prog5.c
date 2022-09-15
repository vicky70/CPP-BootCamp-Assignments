// Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    int n, count=0;
    printf("Enter number of E-mail you wannt to enter:");
    scanf("%d", &n);
    char str[n][40];
    int emailIndex[n];
    printf("Enet your %d E-mail address:", n);
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        fgets(str[i], 20, stdin);
        fflush(stdin);
    }
    for (int i = 0; i < n; i++)
    {
        if (strchr(str[i], '@' ) != 0)
        {
            printf("Vaild E-mails are: %s", str[i]);
        }
    }
    
    return 0;
}