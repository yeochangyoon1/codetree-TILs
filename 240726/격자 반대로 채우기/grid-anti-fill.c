#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10][10];
    int a;
    scanf("%d", &a);
    int num = 1;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(i % 2 == 0)
            {
                n[a - 1 - j][a - 1 - i] = num;
                num++;
            }
            else
            {
                n[j][a - 1 - i] = num;
                num++;
            }
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}