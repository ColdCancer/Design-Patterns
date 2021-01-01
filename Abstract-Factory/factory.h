#ifndef FACTORY_H
#define	FACTORY_H

#include "product.h"

class AbsFactory {
public:
	enum FACTROY_TYPE {
		BENZ_FACTORY,
		BMW_FACTORY,
		AUDI_FACTORY
	};

	virtual ICar *CreateCar() = 0;
	virtual IBike *CreateBike() = 0;
	static AbsFactory *CreateFactory(FACTROY_TYPE factory);
};

#endif
