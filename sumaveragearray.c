#include <stdio.h>
#include<conio.h>
int main()
{
    int a[100], n, i, sum = 0;

    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("\nThe sum of the array is : %d", sum);
    printf("\nThe average of the array is : %0.2f", (float)sum / n);

    return 0;
}  
