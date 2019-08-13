#include <stdio.h> 
#include "Rstring.h" 
#define obj_size 15

using namespace rt;

void draw_scene(Rstring* str, char border_char) {
	for (uint64 i = 0; i <= obj_size + 1; i++)
		printf("%s", (const char*)(Rstring(border_char) + ' '));
	printf("%c", '\n');
	for (uint64 i = 0; i < obj_size; i++)
		printf("%s\n", (const char*)(Rstring(". ") + str[i] + "."));
	for (uint64 i = 0; i <= obj_size + 1; i++)
		printf("%s", ". ");
}

int main(void) {
	Rstring str[obj_size];
	for (uint8 i = 0; i < obj_size; i++)
		for (uint8 j = 0; j < obj_size; j++)
			str[i] += "# ";
	draw_scene(str, '.');
	return 0;
}