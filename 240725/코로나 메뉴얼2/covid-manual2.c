#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int count[4] = {0};
    for(int i = 0; i < 3; i++)
    {
        char c;
        int a;
        scanf(" %c %d", &c, &a);
        if(c == 'Y')
        {
            if(a >= 37)
            {
                count[0]++;
            }
            else
            {
                count[2]++;
            }
        }
        else
        {
            if(a >= 37)
            {
                count[1]++;
            }
            else
            {
                count[3]++;
            }
        }
    }
    for(int i = 0; i < 4; i++)
    {
        printf("%d ", count[i]);
        
    }
    if(count[0] >= 2)
        {
            printf("E");
        }
    return 0;
}