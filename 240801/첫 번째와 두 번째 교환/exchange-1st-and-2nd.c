#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21];
    char c1;
    char c2;
    scanf("%s", str);
    c1 = str[0];
    c2 = str[1];
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] == c1)
        {
            str[i] = c2;
            continue;
        }
        if(str[i] == c2)
        {
            str[i] = c1;
            continue;
        }
    }
    printf("%s", str);
    return 0;
}