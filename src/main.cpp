#include <stdio.h>
#include "Rstring.h"

using namespace rt;

int main(void) {
	Rstring str = "test";
	printf_s("%s\n", (char*)str);
	return 0;
}