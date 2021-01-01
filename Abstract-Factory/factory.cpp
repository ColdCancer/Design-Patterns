#include "factory.h"
#include "concrete_factory.h"

AbsFactory *AbsFactory::CreateFactory(FACTROY_TYPE factory) {
	AbsFactory *pFactory = nullptr;

	switch (factory) {
		case FACTROY_TYPE::BENZ_FACTORY:
			pFactory = new BenzFactory();
			break;
		case FACTROY_TYPE::BMW_FACTORY:
			pFactory = new BmwFactory();
			break;
		case FACTROY_TYPE::AUDI_FACTORY:
			pFactory = new AudiFactory();
			break;
		default:
			break;
	}

	return pFactory;
}
