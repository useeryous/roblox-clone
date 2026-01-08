#include "engine.h"
#include "rerror/rerror.h"
#include <iostream>
#include <vector>
#include <string>

//const std::vector<std::string> script_type[] = {"lua", "luau", "nim", "python"};

void check_script_type(int number_id, std::string *script_type) {
	switch (number_id) {
		case 1:
			script_type = "lua";
			break;
		case 2:
			script_type = "luau";
			break;
		case 3:
			script_type = "nim";
			break;
		case 4:
			script_type = "python";
		default:
			err::error("nonScript error");
			break;
	}
}

//usage
//
//check_script_type("obj".script_id, script_type);
//
//will return the script type of a object
//

