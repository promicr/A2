
#include "../src/a2.h"
#include "../src/a2_libutil.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	if(argc!=2){
		printf("test_a2  file_name\n");
		exit(0);
	}

	struct a2_state* as = a2_open();
	a2_openutil(as);
	if(a2_loadfile(as, argv[1])){
		printf("%s\n", a2_tostring(as, a2_top(as)-1));
	}
/*
	a2_pushstring(as, "func");
	a2_getglobal(as);
	// a2_pushnumber(as, 1);
	a2_pushstring(as, "seek");
	if(a2_pcall(as, 1)){
		printf("%s\n", a2_tostring(as, a2_top(as)-1));
	}else{
		printf("ret = %lf\n", a2_tonumber(as, a2_top(as)-1));
	}
*/
	a2_close(as);
	mem_print();
	return 0;
}
