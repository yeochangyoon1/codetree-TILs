#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    a += b;
    char str[1000];
    sprintf(str, "%d", a);
    int len = strlen(str);
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(str[i] == '1')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}