#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int A[100];
    int B[100];
    for(int i = 0; i < n1; i++)
    {
        scanf(" %d", &A[i]);
    }
    for(int i = 0; i < n2; i++)
    {
        scanf(" %d", &B[i]);
    }
    int check = 1;
    for(int i = 0; i < n1; i++)
    {
        if(A[i] == B[0])
        {
            for(int j = 0; j < n2; j++)
            {
                check = 0;
                if(A[i + j] != B[j])
                {
                    check = 1;
                    break;
                }
            }
            if(check == 0)
            {
                printf("Yes");
                return 0;
            }
        }
    }
    if(check)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}