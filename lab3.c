#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Sortarray(char **string, int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (strcmp(string[j], string[j + 1]) > 0)
            {
                char *num;
                num = (char *)malloc(sizeof(char));
                strcpy(num, string[j]);
                strcpy(string[j], string[j + 1]);
                strcpy(string[j + 1], num);
            }
}

int main(int argc, char **argv)
{
    char **string;
    int n, i;
    printf("How many words you want to enter: ");
    scanf("%d\n", &n);

    string = (char **)malloc(sizeof(char *));

    for (i = 0; i < n; i++)
    {
        string[i] = (char *)malloc(sizeof(char));
        scanf("%s", string[i]);
    }
    Sortarray(string, n);
    printf("answer: \n");
    for (i = 0; i < n; i++)
        printf("%s\n", string[i]);

    return 0;
}
