#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[101];
    char str2[101];
    scanf(" %s", str1);
    scanf(" %s", str2);
    char cpstr1[201];
    char cpstr2[201];
    strcpy(cpstr1, str1);
    strcat(cpstr1, str2);
    strcpy(cpstr2, str2);
    strcat(cpstr2, str1);
    if(!strcmp(cpstr1, cpstr2))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}