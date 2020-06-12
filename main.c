#include <stdio.h>

void isEOF();

int main() {
    isEOF();
    return 0;
}

void isEOF() {
    if (getchar() == EOF) {
        printf("input equals EOF");
    } else {
        printf("input not equals EOF");
    }
}
