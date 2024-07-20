#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    if(a == 0)
    {
        if(b >= 19)
        {
            printf("MAN");
        }
        else
        {
            printf("BOY");
        }
    }
    else
    {
        if(b >= 19)
        {
            printf("WOMAN");
        }
        else
        {
            printf("GIRL");
        }
    }

    return 0;
}