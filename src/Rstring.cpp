#include "Rstring.h"

namespace rt {
	uint64 rstrlen(const char* ptr) {
        if(ptr == nullptr) return 0;
		uint64 i = 0;
		while (ptr[i] != '\0') i++;
		return i;
	}
	Rstring::Rstring() {
		this->ptr = nullptr;
		this->lengh = 0;
	}
	Rstring::Rstring(const char* ptr) {
		this->lengh = rstrlen(ptr);
		this->ptr = new char[this->lengh + 1];
		for (uint64 i = 0; i < this->lengh; i++)
			this->ptr[i] = ptr[i];

		this->ptr[this->lengh] = '\0';
	}
	Rstring::Rstring(char ch) {
		this->lengh = 1;
		this->ptr = new char[2];
		this->ptr[0] = ch;
		this->ptr[1] = '\0';
	}
	Rstring::Rstring(const Rstring& str) {
		this->lengh = str.lengh;
		this->ptr = new char[this->lengh + 1];
		for (uint64 i = 0; i < this->lengh; i++)
			this->ptr[i] = str.ptr[i];
		
		this->ptr[this->lengh] = '\0';
	}
	void Rstring::operator=(const char* ptr) {
		if (this->ptr != nullptr) delete[] this->ptr;
		this->lengh = rstrlen(ptr);
		this->ptr = new char[this->lengh + 1];
		for (uint64 i = 0; i < this->lengh; i++)
			this->ptr[i] = ptr[i];

		this->ptr[this->lengh] = '\0';
	}
	void Rstring::operator=(char* ptr) {
		this->operator=((const char*)ptr);
		delete[] ptr;
	}
	void Rstring::operator=(char ch) {
		if (this->ptr != nullptr) delete[] this->ptr;
		this->lengh = 1;
		this->ptr = new char[2];
		this->ptr[0] = ch;
		this->ptr[1] = '\0';
	}
	void Rstring::operator=(const Rstring& str) {
		if (this->ptr != nullptr) delete[] this->ptr;
		this->lengh = rstrlen(ptr);
		this->ptr = new char[this->lengh + 1];
		for (uint64 i = 0; i < this->lengh; i++)
			this->ptr[i] = ptr[i];

		this->ptr[this->lengh] = '\0';
	}
	Rstring Rstring::operator+(const char* ptr) {
		Rstring ptr2;
		ptr2.lengh = this->lengh + rstrlen(ptr);
		ptr2.ptr = new char[ptr2.lengh + 1];
		uint64 i = 0;
		for (; i < this->lengh; i++) 
			ptr2.ptr[i] = this->ptr[i];

		for (uint64 j = 0; i < ptr2.lengh; j++, i++) 
			ptr2.ptr[i] = ptr[j];

		ptr2.ptr[ptr2.lengh] = '\0';
		return ptr2;
	}
	Rstring Rstring::operator+(char* ptr) {
		char* ptr2 = this->operator+((const char*)ptr);
		delete[] ptr;
		return ptr2;
	}
	Rstring Rstring::operator+(const Rstring& str) {
		uint64 size = this->lengh + str.lengh;
		char* ptr2 = new char[size + 1];
		uint64 i = 0;
		for (; i < this->lengh; i++) 
			ptr2[i] = this->ptr[i];

		for (uint64 j = 0; i < size; j++, i++) 
			ptr2[i] = str.ptr[j];
		ptr2[size] = '\0';
		return ptr2;
	}
	void Rstring::operator+=(const char* ptr) {
		this->operator=((char*)this->operator+((const char*)ptr));
	}
	void Rstring::operator+=(char* ptr) {
		this->operator=((char*)this->operator+(ptr));
	}
	void Rstring::operator+=(const Rstring& str) {
		this->operator=((char*)this->operator+(ptr));
	}
	bool Rstring::operator==(const char* ptr) {
		if (rstrlen(ptr) != this->lengh)
			return false;
		for (uint64 i = 0; i < this->lengh; i++)
			if (this->ptr[i] != ptr[i])
				return false;
		return true;
	}
	bool Rstring::operator!=(const char* ptr) {
		return !this->operator==(ptr);
	}
	uint64 Rstring::size() {
		return lengh;
	}
	char& Rstring::operator[](uint64 id) {
		return this->ptr[id];
	}
	Rstring::operator char* () {
		char* str = new char[this->lengh + 1];
		for (uint64 i = 0; i < this->lengh; i++)
			str[i] = this->ptr[i];
		str[this->lengh] = '\0';
		return str;
	}
	void Rstring::operator+=(char ptr) {
		char* s = new char[2];
		s[0] = ptr;
		s[1] = '\0';
		this->operator+=(s);
	}
	Rstring Rstring::operator+(char ptr) {
		char* s = new char[2];
		s[0] = ptr;
		s[1] = '\0';
		return this->operator+(s);
	}
	Rstring::operator const char* () {
		return this->ptr;
	}
	Rstring::~Rstring() {
		if (this->ptr != nullptr) delete[] this->ptr;
		this->ptr = nullptr;
		this->lengh = 0;
	}
}
