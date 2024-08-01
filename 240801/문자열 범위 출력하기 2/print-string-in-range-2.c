#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    int n;
    scanf("%s %d", str, &n);
    int len = strlen(str);
    for(int i = len - 1; i >= len - n; i--)
    {
        if(str[i] == '\0')
        {
            break;
        }
        printf("%c", str[i]);
    }
    return 0;
}