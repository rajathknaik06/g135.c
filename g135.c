/*Raghu is a software engineer working on a project that requires finding the first repeated character in a string. He needs your help to write a program that efficiently finds the first repeated character in a given string.

Input format :
The input consists of a string.

Output format :
If a repeated character is found, print the first repeated character.

If no repeated character is found, print "Not Found".*/

#include<stdio.h>
#include<string.h>

int findRepeatFirstN2(char s[]) {
    int p = -1, i, j;

    for (i = 0; i < strlen(s); i++) {
        for (j = i + 1; j < strlen(s); j++) {
            if (s[i] == s[j]) {
                p = i;
                break;
            }
        }
        if (p != -1)
            break;
    }

    return p;
}

int main() {
    char str[50];
    scanf("%s", str);
    int pos = findRepeatFirstN2(str);

    if (pos != -1)
        printf("%c", str[pos]);
    else
        printf("Not Found");

    return 0;
}

//another method

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    scanf("%s", str);
    
    int p = -1, i, j;
    
    for (i = 0; i < strlen(str); i++) {
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                p = i;
                break;
            }
        }
        if (p != -1)
            break;
    }

    if (p != -1)
        printf("%c", str[p]);
    else
        printf("Not Found");

    return 0;
}
