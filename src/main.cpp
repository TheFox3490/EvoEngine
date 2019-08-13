#include <stdio.h> 
#include "Rstring.h" 
#define obj_size 16 

using namespace rt;

void draw_scene(Rstring *str) {
	for (uint64 i = 0; i < obj_size; i++)
		printf("%s\n", (const char*)str[i]);
}

int main(void) {
	Rstring str[obj_size];
	for (uint8 i = 0; i < obj_size; i++)
		for (uint8 j = 0; j < obj_size; j++)
			str[i] += "#";
	draw_scene(str);
	return 0;
}