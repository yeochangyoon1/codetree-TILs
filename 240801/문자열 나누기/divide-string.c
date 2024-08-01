#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    char str[1000];
    scanf(" %[^\n]", str);
    int len = strlen(str);
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            continue;
        }
        if(count == 5)
        {
            count = 0;
            printf("\n");
        }
        printf("%c", str[i]);
        count++;
    }
    return 0;
}