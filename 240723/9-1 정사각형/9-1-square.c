#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int a = 9;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a == 0)
            {
                a = 9;
            }
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}