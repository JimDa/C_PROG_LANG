#include <stdio.h>
#include <math.h>
#include <string.h>

void isEOF();

int count_symbol();

int htoi(char s[]);

void print_change_line_int_val();

int main() {
//    isEOF();
//    printf("%d", EOF);
//    count_symbol();
    char str[3] = {'1', 'a', 'B', '0', 'a', '3', 'f', '8', 'C', '5', '\0'};
//    print_change_line_int_val();
    int sum = htoi(str);
    printf("sum = %d", sum);
    return 0;
}

void isEOF() {
    if (getchar() == EOF) {
        printf("input equals EOF");
    } else {
        printf("input not equals EOF");
    }
}

void print_change_line_int_val() {
    int s = '\n';
    printf("\\n is %d", s);
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

int htoi(char s[]) {
//    int len = sizeof(s) / sizeof(char);
    int len = strlen(s);
    int sum = 0;
    for (int i = len - 1; i >= 0; --i) {
        if ('a' <= s[len - 1 - i] && s[len - 1 - i] <= 'z') {
            sum += (s[len - 1 - i] - 'a' + 10) * pow(16, i - 1);
        }

        if ('A' <= s[len - 1 - i] && s[len - 1 - i] <= 'Z') {
            sum += (s[len - 1 - i] - 'A' + 10) * pow(16, i - 1);
        }

        if ('0' <= s[len - 1 - i] && s[len - 1 - i] <= '9') {
            sum += (s[len - 1 - i] - '0') * pow(16, i - 1);
        }
    }
    return sum;
}
