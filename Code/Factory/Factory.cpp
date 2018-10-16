#include "Factory.h"
#include <iostream>

// base class
CFactory::CFactory()
{

}
CFactory::~CFactory()
{

}

// concrete class
CConcreteFactory::CConcreteFactory()
{

}

CConcreteFactory::~CConcreteFactory()
{

}
CProduct* CConcreteFactory::CreateProduct(int ProductType)
{
	if (PRODUCT_A == ProductType)
	{
		return new CConcreteProductA();
	}
	if (PRODUCT_B == ProductType)
	{
		return new CConcreteProductB();
	}
	if (PRODUCT_C == ProductType)
	{
		return new CConcreteProductC();
	}
	
	std::cout << "Current Product Do No Exist!" << std::endl;
	return 0;
}

