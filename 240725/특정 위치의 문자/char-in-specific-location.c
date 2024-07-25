#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char a;
    scanf("%c", &a);
    for(int i = 0; i < 6; i++)
    {
        if(a == c[i])
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("None");
    return 0;
}