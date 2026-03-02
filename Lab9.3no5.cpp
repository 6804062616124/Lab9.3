#include <stdio.h>

#define MAX 200

int main(void)
{
    char text[MAX];
    int total = 0;

    printf("Enter input: ");
    scanf("%199[^\n]", text);

    for (int pos = 0; text[pos] != '\0'; ++pos)
    {
        char ch = text[pos];

        if (ch >= '0' && ch <= '9')
            total += (ch - '0');
    }

    printf("Sum of digit char: %d\n", total);

    return 0;
}
