#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    char str[20][21];
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    char c;
    scanf(" %c", &c);
    int count = 0;
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(str[i][0] == c)
        {
            count++;
            sum += strlen(str[i]);
        }
    }
    printf("%d %.2f", count, sum / count);
    return 0;
}