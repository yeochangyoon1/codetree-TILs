#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[200][201];
    int index = 0;
    while(1)
    {
        scanf(" %s", str[index]);
        if(!strcmp(str[index], "0"))
        {
            break;
        }
        index++;
    }
    printf("%d\n", index);
    for(int i = 0; i < index; i += 2)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}