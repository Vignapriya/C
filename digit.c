#include <stdio.h>
#include <string.h>

int is_unique(char str[]) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (str[i] == str[j])
                return 0;
        }
    }
    return 1;
}

int main() {
    char num[20];

    printf("Enter a 10-digit number with no repeated digits: ");
    scanf("%s", num);

    
    if (strlen(num) != 10) {
        printf("number is not 10 digits long.\n");
        return 1;
    }

        if (!is_unique(num)) {
        printf("digits are not unique.\n");
        return 1;
    }

    int d1 = num[0] - '0';
    int d2 = num[1] - '0';
    int d3 = num[2] - '0';
    int last = num[9] - '0';

    int num2 = d1 * 10 + d2;
    int sum3 = d1 + d2 + d3;

    printf("\nVerifying conditions for: %s\n", num);
    printf("a) First digit = %d is divisible by 1 \n", d1); 
    if (num2 % 2 == 0)
        printf("b) First 2 digits = %d is divisible by 2 n", num2);
    else {
        printf("first 2 digits = %d is not divisible by 2\n", num2);
        return 1;
    }

    if (sum3 % 3 == 0)
        printf("c) Sum of first 3 digits (%d + %d + %d = %d) is divisible by 3 \n", d1, d2, d3, sum3);
    else {
        printf("sum of first 3 digits (%d + %d + %d = %d) is not divisible by 3\n", d1, d2, d3, sum3);
        return 1;
    }

    if (last == 0)
        printf("d) Last digit = %d Number is divisible by 10 ✔n", last);
    else {
        printf("last digit = %d Not divisible by 10\n", last);
        return 1;
    }

    printf("all conditions satisfied! Valid number.\n");
return 0;
}
