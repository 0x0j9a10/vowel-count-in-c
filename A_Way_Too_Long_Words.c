#include <stdio.h>
#include <string.h>

int main()
{
    int n, i = 0;
    char name[1000];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%s", &name);
        int l = strlen(name);
        if (l > 10)
        {
            printf("%c%d%c\n", name[0], l - 2, name[l - 1]);
        }
        else
        {
            puts(name);
        }
    }

    return 0;
}
