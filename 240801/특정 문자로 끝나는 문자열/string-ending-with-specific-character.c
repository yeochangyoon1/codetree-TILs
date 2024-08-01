#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[10][21];
    char c;
    for(int i = 0; i < 10; i++)
    {
        scanf("%s", str[i]);
    }
    scanf(" %c", &c);
    int count = 0;
    for(int i = 0; i < 10; i++)
    {
        int len = strlen(str[i]);
        if(str[i][len - 1] == c)
        {
            printf("%s\n", str[i]);
            count++;
        }
    }
    if(count == 0)
    {
        printf("None");
    }
    return 0;
}