#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    char str[100];
    sprintf(str, "%d", n);
    int len = strlen(str);
    int sum = 0; 
    for(int i = 0; i < len; i++)
    {
        sum += str[i] - 48;
    }
    printf("%d", sum);
    return 0;
}