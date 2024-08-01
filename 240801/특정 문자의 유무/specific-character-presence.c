#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[] = "ee";
    char str2[] = "ab";
    char str3[21];
    scanf("%s", str3);
    char *result1 = strstr(str3, str1);
    char *result2 = strstr(str3, str2);
    if(result1 != NULL)
    {
        printf("Yes ");
    }
    else
    {
        printf("No ");
    }

    if(result2 != NULL)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}