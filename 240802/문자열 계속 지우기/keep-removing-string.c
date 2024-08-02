#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char str1[101];
    char str2[101];
    scanf("%s", str1);
    scanf(" %s", str2);
    while(1)
    {
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int same = 0;
        for(int i = 0; i < len1; i++)
        {
            if(str1[i] == str2[0])
            {
                int count = 0;
                for(int j = 0; j < len2; j++)
                {
                    if(str1[i + j] == str2[j])
                    {
                        count++;
                    }
                }
                if(count == len2)
                {
                    for(int j = i; j < len1 - len2; j++)
                    {
                        str1[j] = str1[j + len2];
                    }
                    str1[len1 - len2] = '\0';
                    same = 1;
                    break;    
                }
            }
        }
        if(same == 0)
        {
            printf("%s", str1);
            break;
        }
    }
    return 0;
}