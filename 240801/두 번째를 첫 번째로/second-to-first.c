#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    scanf("%s", str);
    char c1 = str[0];
    char c2 = str[1];
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] == c2)
        {
            str[i] = c1;
        }
    }
    printf("%s", str);
    return 0;
}