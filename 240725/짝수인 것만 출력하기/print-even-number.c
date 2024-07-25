#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n1[100];
    int n2[100];
    int a;
    scanf("%d", &a);
    int count = 0;
    for(int i = 0; i < a; i++)
    {
        scanf(" %d", &n1[i]);
        if(n1[i] % 2 == 0)
        {
            n2[count] = n1[i];
            count++;
        }
    }
    for(int i = 0; i < count; i++)
    {
        printf("%d ", n2[i]);
    }
    return 0;
}