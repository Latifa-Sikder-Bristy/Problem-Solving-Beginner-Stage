#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    //%d displays the integer value of a character
    //%c displays the actual character
    //one c is for %c [userInput] and one c is for %d [take value from c but print decimal means %d]
    printf("ASCII value of %c = %d", c, c);

    return 0;
}
