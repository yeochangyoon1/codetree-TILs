#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[1001];
    char str2[1001];
    scanf("%s", str1);
    scanf(" %s", str2);
    char *pos = strstr(str1, str2);
    if(pos != NULL)
    {
        printf("%ld", pos - str1);
    }
    else
    {
        printf("-1");
    }
    return 0;
}