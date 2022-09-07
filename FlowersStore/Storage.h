#pragma once
#include <string>
#include <vector>
#include <algorithm>
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
		std::vector <sellingPosition> storage_;

		// работает только с перегруженным оператором ==
		void deleteSellingPosition(const sellingPosition &obj) {
			std::find(storage_.begin(), storage_.end(), obj);
			auto place = std::find_if(storage_.begin(), storage_.end(), [obj](const sellingPosition &tmp) {
				return obj.getNameOfProduct() == tmp.getNameOfProduct();
				}
			);
			if (place != storage_.end()) {
				storage_.erase(place);
			}
		}

	};
}