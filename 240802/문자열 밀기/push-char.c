#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21];
    scanf("%s", str);
    char temp = str[0];
    int len = strlen(str);
    for(int i = 0; i < len - 1; i++)
    {
        str[i] = str[i + 1];
    }
    str[len - 1] = temp;
    printf("%s", str);
    return 0;
}