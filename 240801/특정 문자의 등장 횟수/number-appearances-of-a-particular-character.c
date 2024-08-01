#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[] = "ee";
    char str2[] = "eb";
    char str3[21];
    scanf("%s", str3);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len3 = strlen(str3);

    int count1 = 0;
    for(int i = 0; i < len3; i++)
    {
        if(str3[i] == str1[0])
        {
            count1++;
            for(int j = 0; j < len1; j++)
            {
                if(str3[i + j] != str1[j])
                {
                    count1--;
                    break;
                }
            }
        }
        
    }
    int count2 = 0;
    for(int i = 0; i < len3; i++)
    {
        if(str3[i] == str2[0])
        {
            count2++;
            for(int j = 0; j < len2; j++)
            {
                if(str3[i + j] != str2[j])
                {
                    count2--;
                    break;
                }
            }
        }
        
    }
    printf("%d %d", count1, count2);
    return 0;
}