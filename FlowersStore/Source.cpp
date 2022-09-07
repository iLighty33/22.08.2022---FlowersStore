#include <iostream>
#include <string>
#include <vector>
//#include <wx/wxprec.h>
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

/*
namespace model {

	class Employee {
	public:

		// �������� ������������ ������� ������()

		void isActive(bool &isAct) {
			this->accountIsActive = isAct;
		}

		bool isActive() {
			return accountIsActive;
		}

		// ������ ������ �� �����()

		int getPassportId() {
			return passportId;
		}

		string getNameAndSurname() {
			return nameAndSurname;
		}

		string getWorkScedule() {
			return workScedule;
		}

		string getLogin() {
			return login;
		}

		// ��������� ������ �� �����()

		void setPassportId(int &passId) {
			this->passportId = passId;
		}

		void setNameAndSurname(string &nameAndSurname) {
			this->nameAndSurname = nameAndSurname;
		}

		void setWorkScedule(string &workScedule) {
			this->workScedule = workScedule;
		}

		void setLogin(string &login) {
			this->login = login;
		}

	private:
		bool accountIsActive;
		int passportId;
		string nameAndSurname;
		string workScedule;
		string login;
	};

	class Product {
	public:
		//������ ������ �� �����()
		
		string getName() {
			return this->name;
		}

		int getGabarits() {
			return this->gabarits;
		}

		int getColor() {
			return this->color;
		}

		//��������� ������ �� �����()

		void setName(string &name) {
			this->name = name;
		}

		void setGabarits(int &gabarits) {
			this->gabarits = gabarits;
		}

		void setColor(int &color) {
			this->color = color;
		}



	private:
		string name;
		int gabarits;
		int color;
	};

	class Warehouse {
	protected:
		std::vector <Flower*> Flowers_;
		std::vector <Bouquet*> Bouqets_;
		std::vector <TeddyBear*> TeddyBears_;
		std::vector <Package*> Packages_;
		std::vector <Ribbon*> Ribbons_;

	};

	// Classes Of Stuff

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

}


void model::Warehouse(Flower* Flowers) {
	this->Flowers_ = Flowers;
}
*/

int main() {

	int checksQuantity = 30;
	BussinessLogics::Check Check;
	DataAccessLayer::saveCheck(Check, checksQuantity);

	BussinessLogics::Florist Florist_1;
	BussinessLogics::Florist Florist_2;
	BussinessLogics::Florist Florist_3;

	std::string mySellingPosition = "Mayka";
	int mySellingPositionQuantity = 5;
	BussinessLogics::Storage myStorage;
	myStorage.fillMySellingPositions(mySellingPosition, mySellingPositionQuantity);

	//model::Warehouse myWarehouse1;

	return 0;
}
/*
-------------------- -
01. ���������
-------------------- -
� ��������
���
������ ������
�����

�������� ������������ ������� ������()
������ ������ �� �����()
��������� ������ �� �����()

-------------------------- -
02. ������
(����� ��������)
-------------------------- -
������������
��������
����

������ ������ �� �����()
��������� ������ �� �����()

-------------- -
03. �����
(������ �������� �������, ������� ���� � �������)
-------------- -
������ �������� �������

---------- -
04. ���
(������ �������� ������� � ������ �������)
---------- -
������ �������� �������
����� ��������
����� - ������

����� ������ ���� ���������()
�� �������()

������ ������ �� �����()
��������� ������ �� �����()
���������� ������� � ����()
�������� ������� �� ����()

-------------------------------- -
05. �������� �������
(���������� �������)
-------------------------------- -
�����
����������
���� ��������
����� ����������

������ ������ �� �����()
��������� ������ �� �����()

--------------------------------------
06. ������� ������������
--------------------------------------
������ �����������(������ �� ������ ���������) */