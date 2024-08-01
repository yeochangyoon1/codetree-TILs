#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[100];
    char str2[20] = "Hello";
    scanf("%s", str1);
    strcat(str1, str2);
    printf("%s", str1);
    return 0;
}