#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n[10];
    int sum = 0;
    double avg;
    for(int i = 0; i < 10; i++)
    {
        scanf(" %d", &n[i]);
        if(n[i] == 0)
        {
            avg = (double)sum / i;
            printf("%d %.1f", sum, avg);
            return 0;
        }
        sum += n[i];
    }
    avg = (double)sum / 10;
    printf("%d %.1f", sum, avg);
    return 0;
}