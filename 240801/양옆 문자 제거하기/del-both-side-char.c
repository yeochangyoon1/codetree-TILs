#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 1; i < len - 3; i++)
    {
        str[i] = str[i + 1];
    }
    str[len - 3] = str[len - 1];
    str[len - 2] = '\0';
    printf("%s", str);
    return 0;
}