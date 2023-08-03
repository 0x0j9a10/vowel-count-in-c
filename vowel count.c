#include <stdio.h>

int main()
{

    char s[100];
    fgets(s, sizeof(s), stdin);
    int i = 0, count = 0;

    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
        i++;
    }
    printf("number of vowel %d", count);

    return 0;
}