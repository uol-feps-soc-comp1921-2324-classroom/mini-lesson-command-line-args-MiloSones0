#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int isnumber(char *number) {
    // returns 1 if string is a number 0 if not

    int i = 0;

    // 45 is acsii of -
    if (number[0] == 45) {
        if (number[1] == 0) {
            return 0;
        } else {
            i++;
        }
    }

    while (number[i] != 0){
        if(!isdigit(number[i])){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(int argc, char *argv[]) {

    if (argc != 3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }
    if (isnumber(argv[1]) && isnumber(argv[2])) {
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);

        // Calculate and print the sum
        int sum = num1 + num2;
        printf("Sum: %d\n", sum);
    } else {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }
    return 0; // Exit successfully
}
