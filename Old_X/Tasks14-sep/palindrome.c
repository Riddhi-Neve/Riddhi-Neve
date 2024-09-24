#include <stdio.h>

#include <string.h>

int main() {

    char str[] = "Race car";

    char *start = str; // Pointer to the start of the string

    char *end = str + strlen(str) - 1; // Pointer to the end of the string

 

    // Temporary array to hold alphanumeric characters in lowercase

    char temp[100];

    int j = 0;

 

 

    for (char *p = start; *p != '\0'; p++) {

        if (*p != ' ') { // Ignore spaces

            temp[j++] = (*p >= 'A' && *p <= 'Z') ? *p + 32 : *p;         }

    }

    temp[j] = '\0';

 

      start = temp; 

    end = temp + strlen(temp) - 1;

 

    int isPalindrome = 1; // Assume it's a palindrome

 

    while (start < end) {

        if (*start != *end) {

            isPalindrome = 0; // Not a palindrome

            break;

        }

        start++;

        end--;

    }

 

    if (isPalindrome) {

        printf("\"%s\" is a palindrome.\n", str);

    } else {

        printf("\"%s\" is not a palindrome.\n", str);

    }

 

    return 0;

}

