#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[1001];
    scanf("%s", str1);
    int len = strlen(str1);
    int count[1000];
    for(int i = 0; i < 1000; i++)
    {
        count[i] = 1;
    }
    int n1 = 0;
    for(int i = 1; i < len; i++)
    {
        if(str1[i] == str1[i - 1])
        {
            count[n1]++;
        }
        else
        {
            n1++;
        }
    }
    char str2[2001];
    int n2 = 0;
    n1 = 0;
    str2[n2] = str1[0];
    for(int i = 0; i < len; i++)
    {
        if(str1[i] == str1[i + 1])
        {
            str2[n2] = str1[i];
        }
        else
        {
            n2++;
            if(count[n1] >= 10 && count[n1] <= 99)
            {
                str2[n2] = count[n1] / 10 + '0';
                n2++;
            }
            if(count[n1] >= 100 && count[n1] <= 999)
            {
                str2[n2] = count[n1] / 100 + '0';
                n2++;
                str2[n2] = count[n1] / 10; + '0';
                n2++;
            }
            str2[n2] = count[n1] % 10 + '0';
            n1++;
            n2++;
            str2[n2] = str1[i + 1];
        }
    }
    int len2 = strlen(str2);
    printf("%d\n%s", len2, str2);
    return 0;
}