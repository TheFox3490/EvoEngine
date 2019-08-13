#pragma once
#include "rtypes.h"

namespace rt {
	template<typename t>
	class Rvector {
	public:
		Rvector() {
			this->ptr = nullptr;
			this->lengh = 0;
		}
	private:
		t* ptr;
		uint64 lengh;
	};
}