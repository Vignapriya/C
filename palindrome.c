#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while(num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int isPalindrome(int num) {
    return num == reverse(num);
}

int main() {
    int num, rev, sum, i;
    printf("Enter a 2 or 3 digit number: ");
    scanf("%d", &num);

    for(i = 1; i <= 5; i++) {
        rev = reverse(num);
        sum = num + rev;
        printf("Iteration %d: %d + %d = %d\n", i, num, rev, sum);
        
        if(isPalindrome(sum)) {
            printf("Palindrome found: %d\n", sum);
            break;
        }
        num = sum;
    }

    if(i > 5) {
        printf("Palindrome not found in 5 iterations.\n");
    }

 return 0;
}
