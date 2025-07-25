#include <stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d", &x);
    printf("one");
    if (x > 0)
        goto l1;
    printf("two");
    printf("three");
l1:
    printf("four");
l2:
    printf("five");
l3:
    printf("\n");
    goto l2;
    return 0;
}

/*int main()
{
 int x;
    printf("\n. addition");
    printf("\n. subtraction");
    printf("\n. multiplication");
    printf("\n. division");
    printf("enter your choice:");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four\n");
    default:
        printf("default\n");
    }
    printf("\noutside switch");
    return 0;
}*/