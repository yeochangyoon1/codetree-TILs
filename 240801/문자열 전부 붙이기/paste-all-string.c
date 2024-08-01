#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    char str[10][101];
    for(int i = 0; i < n; i++)
    {
        scanf(" %s", str[i]);
    }
    for(int i = 1; i < n; i++)
    {
        strcat(str[0], str[i]);
    }
    printf("%s", str[0]);
    return 0;
}