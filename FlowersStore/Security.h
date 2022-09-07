#pragma once
#include <vector>
#include "Worker.h"

namespace BussinessLogics {

	class Security {
	public:
		void fillMyVector(BussinessLogics::Worker& Workers, int& workersQuantity);
		int workersQuantity = 0;
	private:
		std::vector <Worker*> Workers;

	};

}