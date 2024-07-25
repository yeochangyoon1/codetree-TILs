#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int a[100];
    int count[9] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
        if(a[i] == 1)
        {
            count[0]++;
        }
        else if(a[i] == 2)
        {
            count[1]++;
        }
        else if(a[i] == 3)
        {
            count[2]++;
        }
        else if(a[i] == 4)
        {
            count[3]++;
        }
        else if(a[i] == 5)
        {
            count[4]++;
        }
        else if(a[i] == 6)
        {
            count[5]++;
        }
        else if(a[i] == 7)
        {
            count[6]++;
        }
        else if(a[i] == 8)
        {
            count[7]++;
        }
        else if(a[i] == 9)
        {
            count[8]++;
        }
    }
    for(int i = 0; i < 9; i++)
    {
        printf("%d\n", count[i]);
    }
    return 0;
}