/*#include <stdio.h>

int reverseNumber(int num, int rev)
{
    if (num == 0)
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main()
{
    int number, reversed;

    printf("Enter a number: ");
    scanf("%d", &number);

    reversed = reverseNumber(number, 0);

    printf("Reversed number: %d\n", reversed);

    return 0;
}*/
#include <stdio.h>

int main() {
    int number, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}

