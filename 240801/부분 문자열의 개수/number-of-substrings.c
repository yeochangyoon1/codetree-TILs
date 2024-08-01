#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[1001];
    char str2[1001];
    scanf("%s", str1);
    scanf(" %s", str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int count1 = 0;
    for(int i = 0; i < len1; i++)
    {
        if(str1[i] == str2[0])
        {
            count1++;
            for(int j = 0; j < len2; j++)
            {
                if(str1[i + j] != str2[j])
                {
                    count1--;
                    break;
                }
            }
        }
        
    }
    printf("%d", count1);
    return 0;
}