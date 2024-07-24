#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    int count = 0;
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf(" %d", &n[i]);
        if(n[i] == 0)
        {
            for(int j = 0; j < i; j++)
            {
                if(n[j] % 2 == 0)
                {
                    count++;
                    sum += n[j];
                }
            }
            printf("%d %d", count, sum);
            return 0;
        }
    }
    for(int j = 0; j < 10; j++)
            {
                if(n[j] % 2 == 0)
                {
                    count++;
                    sum += n[j];
                }
            }
            printf("%d %d", count, sum);
    return 0;
}