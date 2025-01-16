#include <stdio.h>
#include <stdlib.h>

bool isPalindrome(char* s) {
    int stringLength = strlen(s);
    int i = 0;
    int j = stringLength - 1;
    bool is = true;

    while (i < j) {
        while (i < stringLength && !isalnum(s[i])) {
            i++;
        } 

        while (j >= 0 && !isalnum(s[j])) {
            j--;
        }

        if (i < j) { 
            if (tolower(s[i]) != tolower(s[j])) {
                is = false; 
                break;
            }
            i++; 
            j--;
        }
    }

    return is; 
}