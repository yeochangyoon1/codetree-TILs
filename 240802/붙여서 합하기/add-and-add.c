#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[100];
    char str2[100];
    char str3[100];
    char str4[100];
    scanf("%s %s", str1, str2);
    strcpy(str3, str1);
    strcat(str3, str2);
    strcpy(str4, str2);
    strcat(str4, str1);
    int a = atoi(str3);
    int b = atoi(str4);
    printf("%d", a + b);
    return 0;
}