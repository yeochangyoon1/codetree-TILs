#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str[5][50] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    scanf("%c", &c);

    int count = 0;
    for(int i = 0; i < 5; i++)
    {
        if(str[i][2] == c || str[i][3] == c)
        {
            printf("%s\n", str[i]);
            count++;
        }
    }

    printf("%d", count);
    return 0;
}