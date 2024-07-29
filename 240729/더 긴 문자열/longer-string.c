#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[20];
    char str2[20];
    scanf("%s %s", str1, str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 > len2)
    {
        printf("%s %d", str1, len1);
    }
    else if(len1 < len2)
    {
        printf("%s %d", str2, len2);
    }
    else
    {
        printf("same");
    }
    return 0;
}