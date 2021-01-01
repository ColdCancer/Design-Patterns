#ifndef CONCRETE_PRODUCT_H
#define CONCRETE_PRODUCT_H

#include "product.h"

class BenzCar : public ICar {
public:
	std::string Name() {
		return "Benz Car";
	}
};

class BmwCar : public ICar {
public:
	std::string Name() {
		return "Bmw Car";
	}
};


class AudiCar : public ICar {
public:
	std::string Name() {
		return "Audi Car";
	}
};

 
class BenzBike : public IBike {
public:
	std::string Name() {
		return "Benz Bike";
	}
};

class BmwBike : public IBike {
public:
	std::string Name() {
		return "Bmw Bike";
	}
};


class AudiBike : public IBike {
public:
	std::string Name() {
		return "Audi Bike";
	}
};

#endif
