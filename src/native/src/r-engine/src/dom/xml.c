#include "xml_h"

#include "dom.h"
#include <stdio.h>

int read_file(FILE* fp, char **filename) {
    fp = fopen(filename, "r");
    char buffer[256];

    if (fp == NULL) {
        perror("an error has happened and file cannot be openned");
    }

    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        
    }

    return 0;
}