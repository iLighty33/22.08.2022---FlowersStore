#pragma once
#include "Storage.h"
#include "SellingPosition.h"

void BussinessLogics::Storage::fillMySellingPositions(std::string &mySellingPositions, int& storagePosQuantity) {

	mySellingPositions.reserve(storagePosQuantity);
	for (auto el : mySellingPositions) {
		mySellingPositions.push_back(el);
	}
}

BussinessLogics::Storage::Storage() {
}

int BussinessLogics::Storage::getMyStoragePosQiantity() {
	return this->storagePosQuantity;
}