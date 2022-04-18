#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]) {
    if (argc == 1)
        printf("");
     else if(argc==2)
         printf(argv[1]);

    else if (argc > 2) {
        char *max = argv[1];
        for (int i = 1; i < argc; i++) {
                if (strlen(argv[i]) > strlen(max)) {
                    max = argv[i];
                }
        }
        printf(max);
    }

    return EXIT_SUCCESS;
}