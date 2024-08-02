#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[1001];
    scanf("%s", str);
    int n;
    scanf(" %d", &n);
    int len = strlen(str);
    for(int i = 0; i < n; i++)
    {
        int q;
        scanf(" %d", &q);
        if(q == 1)
        {
            char temp = str[0];
            for(int i = 0; i < len - 1; i++)
            {
                str[i] = str[i + 1];
            }
            str[len - 1] = temp;
            printf("%s\n", str);
        }
        else if(q == 2)
        {
            char temp = str[len - 1];
            for(int i = len - 1; i > 0; i--)
            {
                str[i] = str[i - 1];
            }
            str[0] = temp;
            printf("%s\n", str);
        }
        else if(q == 3)
        {
            char str2[len + 1];
            for(int i = len - 1; i >= 0; i--)
            {
                str2[len - 1 - i] = str[i];
            }
            str2[len] = '\0';
            for(int i = 0; i < len; i++)
            {
                str[i] = str2[i];
            }
            printf("%s\n", str);
        }
    }
    return 0;
}