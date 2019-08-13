#include <stdio.h>
#include "Rstring.h"

using namespace rt;

int main(void) {
	Rstring str = "fork!";
	printf_s("%s!\n", (const char*)(Rstring("Test, ") + str[0]));
	return 0;
}