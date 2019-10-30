#include <iostream>
#include <Rstring.h>

using namespace rt;

int main(){
    Rstring str = "string";
    str += "\n";
    str = (char*)(Rstring("create new ") + str);
    std::cout << (const char*)str;
}
