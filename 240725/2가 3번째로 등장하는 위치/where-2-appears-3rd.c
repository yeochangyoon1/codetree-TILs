#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int number[100];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        scanf(" %d", &number[i]);
        if(number[i] == 2)
        {
            count++;
        }
        if(count == 3)
        {
            printf("%d", i + 1);
            return 0;
        }
    }
    return 0;
}