#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "buffer_reader.h"

int tokenize(FILE *);

int main(int argc, char ** argv){
    if(argc < 2){
        printf("Wrong usage.\n");
        printf("Example:_> %s sourceFile1.ado sourceFile2.ado etc...\n", argv[0]);
        return -1;
    }

    int fileCounter;
    for(fileCounter = 1; fileCounter < argc; fileCounter++){
        FILE *current_input_file = NULL;
        current_input_file = fopen(argv[fileCounter], "r");
        if(current_input_file == NULL){
            printf("Could not open %s. Ensure it exists and that Cado has permission to read it.\n", argv[fileCounter]);
            continue;
        }
        if(tokenize(current_input_file)){
            printf("\n%s compiled.\n", argv[fileCounter]);
            fclose(current_input_file);
        }
    }

    return 1;
}

int tokenize(FILE *given_input_file){
    buffer_reader_t *buffer_reader = (buffer_reader_t *) malloc(sizeof(buffer_reader_t));
    string_read_t *string_read = (string_read_t *) malloc(sizeof(string_read_t));

    while((buffer_reader->buffer_reader = fgetc(given_input_file)) != EOF){
        putchar(buffer_reader->buffer_reader);
    }

    return 1;
}
