#include <stdio.h>

int main()
{
    char ch;
    int n;

    printf("Enter an English letter: ");
    scanf(" %c", &ch);

    printf("Enter shift value: ");
    scanf("%d", &n);

    n = n % 26;

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ((ch - 'a' + n + 26) % 26) + 'a';
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ((ch - 'A' + n + 26) % 26) + 'A';
    }
    else
    {
        printf("Invalid input! Please enter an English letter.\n");
        return 0;
    }

    printf("Shifted letter = %c\n", ch);

    return 0;
}
