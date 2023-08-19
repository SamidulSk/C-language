#include <stdio.h>
#include <string.h>
 void mystrcpy(char *str1, char *str2)
    {
        int n = strlen(str2);
        for (int i = 0; i <= n; i++)
        {
            str1[i] = str2[i];
    
            // str1[0] = str2[0]; // n = p
            // str1[1] = str2[1]; // o = r
            // str1[2] = str2[2]; // o = o
            //   .
            //   .
            //   .
            //  until the length of str2
        }
    }
    
    int main()
    {
        char str1[20]; // Destination
        char str2[20] = "Pro";  // source
    
       // printf("Before copying str1 = none);
     //   printf("Before copying str2 = \nstr2 = %s",str2);

        /* calling a function */
        mystrcpy(str1, str2); 
        /* This function will replace str1 with str2 */
    
        printf("After coping \nstr1 = %s", str1); 
        printf(" \nstr2 = %s",str2);
    
        return 0;
    }