#include <stdio.h>

void isEOF();

int count_symbol();

int main() {
//    isEOF();
//    printf("%d", EOF);
    count_symbol();
    return 0;
}

void isEOF() {
    if (getchar() == EOF) {
        printf("input equals EOF");
    } else {
        printf("input not equals EOF");
    }
}

int count_symbol() {
    int tab_count = 0;
    int blank_count = 0;
    int chang_line = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            tab_count++;
        } else if (c == ' ') {
            blank_count++;
        } else if (c == '\n') {
            chang_line++;
        }
    }
    printf("tab_count = %d,blank_count = %d,change_line_count = %d\n", tab_count, blank_count, chang_line);
    return 0;
}
