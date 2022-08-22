#include <iostream>
#include <string>
#include <vector>


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

namespace BussinessLogics {

	// Classes of Stuff

	class Flower {

		int color;
		int quantity;
		int cost;

		string type;

	};

	class Bouquet {

		bool size = 0; // 1 - Big or 0 - small
		bool withDecorations = 0; // 0 - without, 1 - with
		bool type = 0; // 1 - paper, 2 - cellophane

	};

	class TeddyBear {

		int color;
		int quantity;
		int cost;

		string type;

	};

	class Package {

		bool isReady = 0; // 0 - not ready, 1 - ready
		bool type = 0; // 0 - small, 1 - big

	};

	class Ribbon {

		bool withOrWithout = 0; // 0 - without, 1 - with

	};

	// Different Classes

	class Florist {

		void makePackage() {

		}

		void sayHello() {
			std::cout << "Hello, I'm florist\n";
		}

		int dateOfBirth = 0;
		int numberOfPassport = 0;

	};

	class Check {

		int productId;
		string productName;
		int timeOfPurchase;
		int priceId;

	};

	class activeProduct {

	};

}

namespace DataAccessLayer {

	void saveCheck(BussinessLogics::Check Check) {
		std::vector <BussinessLogics::Check> Checks;
		Checks.reserve(30);
		for (auto el : Checks) {
			Checks.push_back(el);
		}
	}

}

int main() {

	BussinessLogics::Check Check;
	DataAccessLayer::saveCheck(Check);

	BussinessLogics::Florist Florist_1;
	BussinessLogics::Florist Florist_2;
	BussinessLogics::Florist Florist_3;

	return 0;
}