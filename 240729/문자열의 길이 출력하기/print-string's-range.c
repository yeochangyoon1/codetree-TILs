#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[100];
    char str2[100];

    scanf("%s %s", str1, str2);
    int len = 0;
    len += strlen(str1);
    len += strlen(str2);
    printf("%d", len);
    return 0;
}