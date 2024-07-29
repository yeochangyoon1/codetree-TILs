#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    scanf("%[^\n]", str);
    char c;
    scanf(" %c", &c);
    int count = 0;
    for(int i = 0; i < 101; i++)
    {
        if(str[i] == '\0')
        {
            break;
        }
        if(str[i] == c)
        {
            count++;
        }
       
    }
    printf("%d", count);
    return 0;
}