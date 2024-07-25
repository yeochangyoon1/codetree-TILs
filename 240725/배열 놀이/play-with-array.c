#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q;
    scanf("%d %d", &n, &q);

    int number[100];
    for(int i = 0; i < n; i++)
    {
        scanf(" %d", &number[i]);
    }

    int question[100];
    for(int i = 0; i < q; i++)
    {
        scanf(" %d", &question[i]);
        if(question[i] == 1)
        {
            int a;
            scanf(" %d", &a);
            printf("%d\n", number[a - 1]);
        }
        else if(question[i] == 2)
        {
            int b;
            int check = 1;
            scanf(" %d", &b);
            for(int j = 0; j < n; j++)
            {
                if(number[j] == b)
                {
                    printf("%d\n", j + 1);
                    check = 0;
                    break;
                }
            }
            if(check)
            {
                printf("0\n");
            }
        }
        else if(question[i] == 3)
        {
            int s, e;
            scanf(" %d %d", &s, &e);
            for(int j = s - 1; j < e; j++)
            {
                printf("%d ", number[j]);
            }
            printf("\n");
        }
    }
    return 0;
}