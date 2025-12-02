#include "script.h"

void change_script_lang(char *lang, FILE *fp) {
    switch(lang) {
        case "lua":
            run_lua_script(&fp);
            break;
        //more langs to come just wait a while
        default:
            run_lua_script(&fp);
            break;
    }
}