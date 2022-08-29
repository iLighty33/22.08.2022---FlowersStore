#include <iostream>
#include <string>
#include <vector>
#include "Item.h"
#include "Recept.h"
#include "Storage.h"

#ifndef HELLO
#define HELLO

#endif // !HELLO


using namespace std;

namespace UI {

	class AppMainWindow {
	public:
		
		void setWindowSize(int x, int y) {
			this->sizeX = x;
			this->sizeY = y;
		}

		int getWindowSizeX() {
			return sizeX;
		}

		int getWindowSizeY() {
			return sizeY;
		}

		void setWindowColor(int color) {
			this->windowColor = color;
		}

		int getWindowColor() {
			return windowColor;
		}

	private:
		int sizeX, sizeY;
		int windowColor = 0;
	};

	class AppFormingCheck {
	public:

		void setWindowSize(int x, int y) {
			this->sizeX = x;
			this->sizeY = y;
		}

		int getWindowSizeX() {
			return sizeX;
		}

		int getWindowSizeY() {
			return sizeY;
		}

		void setWindowColor(int color) {
			this->windowColor = color;
		}

		int getWindowColor() {
			return windowColor;
		}

	private:
		int sizeX, sizeY;
		int windowColor = 0;
	};

	class AppSearchingOfStuff {
	public:

		void setWindowSize(int x, int y) {
			this->sizeX = x;
			this->sizeY = y;
		}

		int getWindowSizeX() {
			return sizeX;
		}

		int getWindowSizeY() {
			return sizeY;
		}

		void setWindowColor(int color) {
			this->windowColor = color;
		}

		int getWindowColor() {
			return windowColor;
		}

		string getStuff() {
			return stuff;
		}

		int getCost() {
			return costOfStuff;
		}

	private:
		int sizeX, sizeY;
		int windowColor = 0;

		string stuff = "";
		int costOfStuff = 0;
	};

}


namespace View {

	class View {
	};

}


int main() {

	int checksQuantity = 30;
	BussinessLogics::Check Check;
	DataAccessLayer::saveCheck(Check, checksQuantity);

	BussinessLogics::Florist Florist_1;
	BussinessLogics::Florist Florist_2;
	BussinessLogics::Florist Florist_3;

	return 0;
}