#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[101];
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        if(str[i] == 'e')
        {
            for(int j = i; j < len - 1; j++)
            {
                str[j] = str[j + 1];
            }
            str[len - 1] = '\0';
            break; 
        }
    }
    printf("%s", str);
    return 0;
}