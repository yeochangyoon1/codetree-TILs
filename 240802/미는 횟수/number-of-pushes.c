#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[101];
    char str2[101];
    scanf("%s %s", str1, str2);
    int n = 0;
    int len = strlen(str1);
    while(1)
    {
        if(!strcmp(str1, str2))
        {
            printf("%d", n);
            break;
        }
        char temp = str1[len - 1];
        for(int i = len - 1; i > 0; i--)
        {
            str1[i] = str1[i - 1];
        }
        str1[0] = temp;
        n++; 
        if(n > len)
        {
            printf("-1");
            break;
        }
    }
    return 0;
}