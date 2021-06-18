#include <stdlib.h>
#include <iostream>
#include <unistd.h>

auto main(int argc, char* argv[]) -> int {
	
	auto zmienna = argv[1];
	auto value = argv[2];
	auto oldShell = getenv("SHELL");
	
	if(!zmienna[0] != '-'){
		setenv (zmienna, value, 1);
	} else {
		unserenv(zmienna);
	return 0;
}
	char* pointers[] = {oldShell, nullptr};
	
	execvp (oldShell, pointers);
	
	return 0;
}
