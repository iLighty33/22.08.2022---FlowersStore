#pragma once
#include <string>
#include <vector>
#include "SellingPosition.h"

namespace BussinessLogics {
	class Storage {
	private:

		std::vector <sellingPosition> mySellingPositions_;
		int storagePosQuantity = 0;
	public:
		Storage();
		Storage(std::vector <sellingPosition> mySellingPositions): mySellingPositions_(mySellingPositions) {};
		int getMyStoragePosQiantity();

		void fillMySellingPositions(std::string &mySellingPositions, int &storagePosQuantity);
	};
}