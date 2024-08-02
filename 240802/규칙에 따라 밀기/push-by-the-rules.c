#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[101];
    char str2[101];
    scanf("%s", str1);
    scanf(" %s", str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(int i = 0; i < len2; i++)
    {
        if(str2[i] == 'L')
        {
            char temp = str1[0];
            for(int j = 0; j < len1 - 1; j++)
            {
                str1[j] = str1[j + 1];
            }
            str1[len1 - 1] = temp;
        }
        else if(str2[i] == 'R')
        {
            char temp = str1[len1 - 1];
            for(int j = len1 - 1; j > 0; j--)
            {
                str1[j] = str1[j - 1];
            }
            str1[0] = temp;
        }
    }
    printf("%s", str1);
    return 0;
}