#include <stdio.h>
#include <string.h>

int main(void)
{
    char removeSet[100];
    char text[100];

    printf("Enter characters to remove:");
    fgets(removeSet, sizeof(removeSet), stdin);
    removeSet[strcspn(removeSet, "\n")] = '\0';

    printf("Text:");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    for (int r = 0; removeSet[r] != '\0'; ++r)
    {
        int removedCount = 0;
        int len = strlen(text);

        for (int p = 0; p < len; ++p)
        {
            if (text[p] == removeSet[r])
            {
                removedCount++;

                /* shift left */
                for (int s = p; s < len; ++s)
                    text[s] = text[s + 1];

                p--;
                len--;
            }
        }

        if (removedCount > 0)
            printf("Character '%c' removed %d time(s)\n",
                   removeSet[r], removedCount);
        else
            printf("Character '%c' not found\n",
                   removeSet[r]);
    }

    printf("Text after remove: %s\n", text);

    return 0;
}
