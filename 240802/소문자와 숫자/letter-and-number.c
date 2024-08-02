#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c", str[i]);
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i]);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i] + 32);
        }
    }
    return 0;
}