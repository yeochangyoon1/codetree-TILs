#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[3][21];
    scanf("%s %s %s", str[0], str[1], str[2]);
    int len[3];
    len[0] = strlen(str[0]);
    len[1] = strlen(str[1]);
    len[2] = strlen(str[2]);

    int max = 0;
    for(int i = 0; i < 3; i++)
    {
        if(len[i] > len[max])
        {
            max = i;
        }
    }

    int min = 0;
    for(int i = 0; i < 3; i++)
    {
        if(len[i] < len[min])
        {
            min = i;
        }
    }

    printf("%d", len[max] - len[min]);
    return 0;
}