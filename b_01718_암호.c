#include <stdio.h>
#include <string.h>

#define len 30001

int main() {
    char clear_text[len], cryptogram[len];
    scanf("%[^\n]\n%[^\n]", clear_text, cryptogram);
    size_t cl_len = strlen(clear_text), cr_len = strlen(cryptogram);
    for (int i = 0, j = 0; i < cl_len; i++, j++) {
        if (j >= cr_len) j = 0;
        if (clear_text[i] == ' ') continue;

        clear_text[i] -= cryptogram[j] - 'a' + 1;
        if (clear_text[i] < 'a') clear_text[i] += 'z' - 'a' + 1;
    }
    printf("%s", clear_text);
}