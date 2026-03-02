#include <stdio.h>

#define MAX 50

int countVowel(char str[]);

int main(void)
{
    char text[MAX];
    int totalVowel;

    printf("Enter text : ");
    scanf("%49s", text);

    totalVowel = countVowel(text);

    printf("Text : [%s] has %d vowels\n",
           text, totalVowel);

    return 0;
}

int countVowel(char str[])
{
    int index = 0;
    int total = 0;

    int a = 0, e = 0, i = 0, o = 0, u = 0;

    while (str[index] != '\0' && index < MAX)
    {
        char ch = str[index];

        if (ch == 'A' || ch == 'a')
        {
            total++;
            a++;
        }
        else if (ch == 'E' || ch == 'e')
        {
            total++;
            e++;
        }
        else if (ch == 'I' || ch == 'i')
        {
            total++;
            i++;
        }
        else if (ch == 'O' || ch == 'o')
        {
            total++;
            o++;
        }
        else if (ch == 'U' || ch == 'u')
        {
            total++;
            u++;
        }

        index++;
    }

    printf("A = %d\n", a);
    printf("E = %d\n", e);
    printf("I = %d\n", i);
    printf("O = %d\n", o);
    printf("U = %d\n", u);

    return total;
}
