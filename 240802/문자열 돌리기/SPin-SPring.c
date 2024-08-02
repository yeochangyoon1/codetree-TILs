#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[11];
    scanf("%s", str);
    printf("%s\n", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        char temp = str[len - 1];
        for(int j = len - 1; j > 0; j--)
        {
            str[j] = str[j - 1];
        }
        str[0] = temp;
        printf("%s\n", str);
    }
    return 0;
}