#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    char str[10][100];
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        scanf(" %s", str[i]);
        sum += strlen(str[i]);
        if(str[i][0] == 'a')
        {
            count++;
        }
    }
    printf("%d %d", sum, count);

    return 0;
}