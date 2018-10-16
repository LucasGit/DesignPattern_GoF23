#ifndef FACTORY_H
#define FACTORY_H

#include "Product.h"

/// define abstract base class factory
/// these is only define interface for subclass
class CFactory
{
public:
	CFactory();
	~CFactory();
	
	virtual CProduct* CreateProduct(int ProductType) = 0; // define interface in base class

};

/// implement base class interface 
class CConcreteFactory :public CFactory
{
public:
	CConcreteFactory();
	~CConcreteFactory();

	// only concrete factory know which product they have
	// so this enum cannot put in base class
	typedef enum _PRODUCT_TYPE_E
	{
		PRODUCT_A	= 0,
		PRODUCT_B	= 1,
		PRODUCT_C	= 2,
		PRODUCT_MAX = 0xFFFFFFFF, // set max product type number
	}PRODUCT_TYPE_E;

	CProduct* CreateProduct(int ProductType);

};

#endif
