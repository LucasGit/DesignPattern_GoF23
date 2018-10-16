#include <iostream>

#define FACTORY				1 ///< factory
#define ACSTRACT_FACTORY	2 ///< abstract factory
#define SINGLETON			3 ///< singleton
#define BUILDER				4 ///< builder
#define PROTOTYPE			5 ///< prototype

/// active design pattern
#define  ACTIVE_PATTERN_ID	PROTOTYPE

/// header file
#if		(ACTIVE_PATTERN_ID == FACTORY)
#include "Factory/Factory.h"
#elif	(ACTIVE_PATTERN_ID == ACSTRACT_FACTORY)
#include "AbstractFactory/AbstractFactory.h"
#elif	(ACTIVE_PATTERN_ID == SINGLETON)
#include "Singalton/Singalton.h"
#elif	(ACTIVE_PATTERN_ID == BUILDER)
#include "Builder/Director.h"
#elif	(ACTIVE_PATTERN_ID == PROTOTYPE)
#include "Prototype/Prototype.h"
#endif

/// main function
int main()
{
#if   (ACTIVE_PATTERN_ID == FACTORY)
	CFactory *pFactory = new CConcreteFactory();
	pFactory->CreateProduct(CConcreteFactory::PRODUCT_A);
	pFactory->CreateProduct(CConcreteFactory::PRODUCT_B);
	pFactory->CreateProduct(CConcreteFactory::PRODUCT_C);

#elif (ACTIVE_PATTERN_ID == ACSTRACT_FACTORY)
	// factory 1 -> product A and B
	CAbstractFactory *pFactory1 = new CConcreteFactory1();
	pFactory1->CreateProductA();
	pFactory1->CreateProductB();

	// factory 2-> product A and B
	CAbstractFactory *pFactory2 = new CConcreteFactory2();
	pFactory2->CreateProductA();
	pFactory2->CreateProductB();
#elif (ACTIVE_PATTERN_ID == SINGLETON)
	CSingleton *pSingleton = CSingleton::Instance();

#elif	(ACTIVE_PATTERN_ID == BUILDER)
	CBuilder *pBulder = new CConcreteBuilder();
	CDirector *pDirector = new CDirector(pBulder);

	// divide set property & generate product into 2 steps
	pDirector->Contruct(); // set product property
	pBulder->GetProduct(); // get product
#elif	(ACTIVE_PATTERN_ID == PROTOTYPE)
	CPrototype *p1 = new CConctetePrototype();
	CPrototype *p2 = p1->Clone();

#endif

	return 0;
}