#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[9];
    char str2[9];
    char str3[9];
    char str4[9];
    scanf("%s %s", str1, str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(int i = 0; i < len1; i++)
    {
        if(!(str1[i] >= '0' && str1[i] <= '9'))
        {
            str3[i] = '\0';
            break;
        }
        str3[i] = str1[i];
    }
    for(int i = 0; i < len2; i++)
    {
        if(!(str2[i] >= '0' && str2[i] <= '9'))
        {
            str4[i] = '\0';
            break;
        }
        str4[i] = str2[i];
    }
    int a = atoi(str3);
    int b = atoi(str4);
    printf("%d", a + b);
    return 0;
}