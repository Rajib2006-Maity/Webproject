#include <stdio.h>
int main()
{
    int a[100], i, sum;
    float avg;
    printf("enter 100 numbers");
    for (i = 0; i <= 99; i++)
        scanf("%d", &a[i]);
    for (i = 0, sum = 0; i <= 99; i++)
        sum = sum + a[i];
    avg = sum / 100.0;
    printf("avrage is %f", avg);
    return 0;
}