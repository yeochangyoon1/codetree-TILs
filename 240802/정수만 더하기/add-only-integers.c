#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[21];
    scanf("%s", str);
    int len = strlen(str);
    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            sum += (str[i] - 48);
        }
    }
    printf("%d", sum);
    return 0;
}