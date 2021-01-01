#include "factory.h"
#include "product.h"

#include <iostream>
#include <cstdio>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if (p) { delete(p); (p) = nullptr; } }
#endif

int main(int argc, char *argv[]) {
	AbsFactory *pFactory = AbsFactory::CreateFactory(AbsFactory::FACTROY_TYPE::BENZ_FACTORY);
	ICar *pCar = pFactory->CreateCar();
	IBike *pBike = pFactory->CreateBike();

	std::cout << "Benz factory - Car: " << pCar->Name() << std::endl;
	std::cout << "Benz factory - Bike: " << pBike->Name() << std::endl;

	SAFE_DELETE(pBike);
	SAFE_DELETE(pCar);
	SAFE_DELETE(pFactory);

	pFactory = AbsFactory::CreateFactory(AbsFactory::FACTROY_TYPE::AUDI_FACTORY);
	pCar = pFactory->CreateCar();
	pBike = pFactory->CreateBike();
	
	std::cout << "Audi factory - Car: " << pCar->Name() << std::endl;
	std::cout << "Audi factory - Bike: " << pCar->Name() << std::endl;
	
	SAFE_DELETE(pBike);
	SAFE_DELETE(pCar);
	SAFE_DELETE(pFactory);


	pFactory = AbsFactory::CreateFactory(AbsFactory::FACTROY_TYPE::BMW_FACTORY);
	pCar = pFactory->CreateCar();
	pBike = pFactory->CreateBike();
	
	std::cout << "Bmw factory - Car: " << pCar->Name() << std::endl;
	std::cout << "Bmw factory - Bike: " << pCar->Name() << std::endl;
	
	SAFE_DELETE(pBike);
	SAFE_DELETE(pCar);
	SAFE_DELETE(pFactory);

	return 0;
}
