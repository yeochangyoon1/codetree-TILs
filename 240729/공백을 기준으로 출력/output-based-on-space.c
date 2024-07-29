#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[101];
    char str2[101];
    scanf("%[^\n] %[^\n]", str1, str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for(int i = 0; i < len1; i++)
    {
        if(str1[i] == ' ' || str1[i] == '\n')
        {
            continue;
        }
        printf("%c", str1[i]);
    }
    for(int i = 0; i < len2; i++)
    {
        if(str2[i] == ' ' || str2[i] == '\n')
        {
            continue;
        }
        printf("%c", str2[i]);
    }
    return 0;
}