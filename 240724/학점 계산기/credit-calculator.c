#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    double score[100];
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf(" %lf", &score[i]);
        sum += score[i];
    }
    double avg = sum / n;
    printf("%.1f\n", avg);
    if(avg >= 4.0)
    {
        printf("Perfect");
    }
    else if(avg >= 3.0)
    {
        printf("Good");
    }
    else
    {
        printf("Poor");
    }
    return 0;
}