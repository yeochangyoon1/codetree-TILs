#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[201];
    scanf("%[^\n]", str);
    int count = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ' || str[i] == '\n')
        {
            continue;
        }
        count++;
    }
    printf("%d", count);
    return 0;
}