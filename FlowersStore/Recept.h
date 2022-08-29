#pragma once
#include <string>
#include <vector>
#include "SellingPosition.h"

namespace BussinessLogics {
	class Check {

		std::vector <sellingPosition> mySelingPositions;

	};
}

namespace DataAccessLayer {

	void saveCheck(BussinessLogics::Check Check, int& checksQuantity);

}