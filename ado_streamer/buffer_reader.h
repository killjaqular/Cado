//buffer_reader.h

#define MAXIMUM_LENGTH 32

typedef struct{
    char *buffer_reader;
}buffer_reader_t;

typedef struct{
    char string_read[MAXIMUM_LENGTH];
}string_read_t;
