#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[200];
    scanf("%[^\n]", str);
    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            printf("\n");
            continue;
        }
        printf("%c", str[i]);
    }
    return 0;
}