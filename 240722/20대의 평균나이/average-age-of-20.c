#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    int sum = 0;
    while(1)
    {
        int age;
        scanf(" %d", &age);
        if(!(age >= 20 && age <= 29))
        {
            printf("%.2f", (double)sum / count);
            break;
        }
        sum += age;
        count++;
    }
    return 0;
}