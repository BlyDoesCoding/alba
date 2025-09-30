#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {


    // Character that store the read
    // character
    char singleChar;
    char rawTokens[10000];
    char tokens[2000][32];


    // Opening file in reading mode
    FILE *fptr = fopen("sample.alba", "r");

    // Reading file character by character
    while ((singleChar = fgetc(fptr)) != EOF) {
        strncat(rawTokens, &singleChar, 1);
    }


    // Closing the file
    fclose(fptr);

    printf("%s", rawTokens);


    return 0;
}
