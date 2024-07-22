#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int count = 0;
    for(int i = a; i <= b; i++)
    {
        if(i % c == 0)
        {
            count++;
        }
    }
    
    if(count > 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}