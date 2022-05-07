#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
        
        char *longest = "";
        for (int i = 1; i < argc; i++) {
                if (strlen(argv[i]) > strlen(longest)) {
                    longest = argv[i];
                }
        }
        puts(longest);
    return EXIT_SUCCESS;
}