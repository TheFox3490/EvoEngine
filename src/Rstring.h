#pragma once
#include "rtypes.h"
#define ���_��� ptr 

namespace rt {
	uint64 rstrlen(const char* ptr);
	class Rstring {
	public:
		Rstring();
		Rstring(const char* ptr);
		Rstring(const Rstring& str);
		void operator=(const char* ptr);
		void operator=(char* ptr);
		void operator=(const Rstring& str);
		Rstring operator+(const char* ptr);
		Rstring operator+(char ptr);
		Rstring operator+(char* ptr);
		Rstring operator+(const Rstring& str);
		void operator+=(const char* ptr);
		void operator+=(char ptr);
		void operator+=(char* ptr);
		void operator+=(const Rstring& str);
		bool operator==(const char* ptr);
		bool operator!=(const char* ptr);
		char& operator[](uint64 id);
		uint64 size();
		operator char* ();
		operator const char* ();
		~Rstring();
	private:
		char* ���_���;
		uint64 lengh;
	};


}