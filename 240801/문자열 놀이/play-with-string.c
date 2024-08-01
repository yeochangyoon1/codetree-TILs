#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    scanf("%s", str);
    int q;
    scanf(" %d", &q);
    int n;
    int a1;
    int b1;
    char a2;
    char b2;

    for(int i = 0; i < q; i++)
    {
        scanf(" %d", &n);
        if(n == 1)
        {
            scanf(" %d %d", &a1, &b1);
            char t = str[a1-1];
            str[a1 - 1] = str[b1 - 1];
            str[b1 - 1] = t;
            printf("%s\n", str);
        }
        if(n == 2)
        {
            scanf(" %c %c", &a2, &b2);
            int len = strlen(str);
            for(int j = 0; j < len; j++)
            {
                if(str[j] == a2)
                {
                    str[j] = b2;
                }
            }
            printf("%s\n", str);
        }
    }
    return 0;
}