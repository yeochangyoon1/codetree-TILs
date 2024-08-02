#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char A[101];
    scanf("%d %s", &n, A);
    char str[100][101];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        scanf(" %s", str[i]);
        if(!(strcmp(A, str[i])))
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}