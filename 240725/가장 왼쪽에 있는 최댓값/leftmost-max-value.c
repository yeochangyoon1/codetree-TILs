#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int number[1000];
    int count[1001] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf(" %d", &number[i]);
        count[number[i]]++;
    }
    int max[1000];
    int index = n;
    int index2;
    for(int i = 0; i < n; i++)
    {   
        max[i] = number[0];
        for(int j = index - 1; j >= 0; j--)
        {
            if(max[i] <= number[j])
            {
                max[i] = number[j];
                index = j;
                index2 = j + 1;
            }
        }
        printf("%d ", index2);
        if(number[max[i]] == 1 || index2 == 1)
        {
            break;
        }
    }
    return 0;
}