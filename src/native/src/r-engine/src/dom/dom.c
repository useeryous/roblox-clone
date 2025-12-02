#include "dom.h"

#include <string.h>
#include <stdio.h>

char convert(const tag) {
    //the tags
    if(strcmp(tag, "<skybox>") == 0) return "skybox:";
    if(strcmp(tag, "<base>") == 0) return "BasePlate:";
    if(strcmp(tag, "<child>") == 0) return "child:";
    if(strcmp(tag, "<cude>") == 0) return "cude:";
    if(strcmp(tag, "<sphere>") == 0) return "sphere:";
    if(strcmp(tag, "<propetry>") == 0) return "prop:";

    //the propertrys
    if(strcmp(tag, "name:") == 0) return " name";
    if(strcmp(tag, "color:") == 0) return " color";
    if(strcmp(tag, "width:") == 0) return " width";
}