#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int num[100];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf(" %d", &num[i]);
        sum += num[i];
    }
    char str[100];
    sprintf(str, "%d", sum);
    int len = strlen(str);
    char temp = str[0];
    for(int i = 0; i < len - 1; i++)
    {
        str[i] = str[i + 1];
    }
    str[len - 1] = temp;
    printf("%s", str);
    return 0;
}