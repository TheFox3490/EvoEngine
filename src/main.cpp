#include <stdio.h>
#include "Rstring.h"

using namespace rt;

int main(void) {
	Rstring str = "is work!";
	printf_s("%s\n", (char*)(Rstring("Test, ") + str));
	return 0;
}