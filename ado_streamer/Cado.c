#include <stdio.h>
#include <stdlib.h>
#include "buffer_reader.h"

int compile(FILE *);

int main(int argc, char ** argv){
    if(argc < 2){
        printf("Wrong usage.\n");
        printf("Example:_> %s <sourceFile1.ado, sourceFile2.ado, etc...>\n", argv[0]);
        return -1;
    }

    int counter;
    for(counter = 0; counter < argc; counter++){

    }

    return 1;
}

int compile(FILE *given_input_file){
    buffer_reader_t *buffer_reader = (buffer_reader_t *) malloc(sizeof(buffer_reader_t));
    string_read_t   *string_read   = (string_read_t *) malloc(sizeof(string_read_t));

    

    return 1;
}
