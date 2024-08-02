#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21];
    scanf("%s", str);
    while(1)
    {
        int len = strlen(str);
        if(len == 1)
        {
            break;
        }
        int n;
        scanf(" %d", &n);
        for(int i = n; i < len - 1; i++)
        {
            str[i] = str[i + 1];
        }
        str[len - 1] = '\0';
        printf("%s\n", str);
    }
    return 0;
}