#include <stdio.h>
#include <string.h>

int checkLogin(char *user, char *pw, char *dbUser, char *dbPw);

int main(void)
{
    char loginDB[5][64] = {
        "user1","user2","user3","user4","user5"
    };

    char passDB[5][64] = {
        "pass1","pass2","pass3","pass4","pass5"
    };

    char inputUser[64];
    char inputPass[64];
    int found = 0;

    printf("Login : ");
    scanf("%63s", inputUser);

    printf("Password : ");
    scanf("%63s", inputPass);

    for (int i = 0; i < 5 && !found; ++i)
    {
        if (checkLogin(inputUser, inputPass,
                       loginDB[i], passDB[i]))
        {
            found = 1;
        }
    }

    if (found)
        printf("Welcome\n");
    else
        printf("Incorrect login or password\n");

    return 0;
}

int checkLogin(char *user, char *pw,
               char *dbUser, char *dbPw)
{
    return (strcmp(user, dbUser) == 0 &&
            strcmp(pw, dbPw) == 0);
}
