#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21];
    char c;
    scanf("%s", str);
    scanf(" %c", &c);
    char *pos = strchr(str, c);
    if(pos != NULL)
    {
        printf("%ld", pos - str);
    }
    else
    {
        printf("No");
    }
    return 0;

}