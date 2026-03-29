#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "12345";
    int len = strlen(str);
    int mid = len / 2;

    // Upper half including middle
    for(int i = 0; i <= mid; i++) {
        for(int j = 0; j < len; j++) {
            if(j == i || j == len - 1 - i)
                printf("%c", str[j]);
            else
                printf(" ");
        }
        printf("\n");
    }

    // Lower half
    for(int i = mid - 1; i >= 0; i--) {
        for(int j = 0; j < len; j++) {
            if(j == i || j == len - 1 - i)
                printf("%c", str[j]);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
