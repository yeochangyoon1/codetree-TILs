#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int b;
    scanf("%d %d", &a, &b);

    if(a % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
    printf("\n");

    if(b % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}