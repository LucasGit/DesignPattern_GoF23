#include "Product.h"

#include <iostream>

// @todo: Maybe can set base class constructor & destructor as vitural ?
// @todo: Do not implement constructor & destructor is Ok?

// constructor & destructor for each class 
// product
CProduct::CProduct()
{
	std::cout << "Create Product (Base Class)" << std::endl;
}

CProduct::~CProduct()
{

}

// product A
CConcreteProductA::CConcreteProductA()
{
	std::cout << "Create Product A" << std::endl;
}

CConcreteProductA::~CConcreteProductA()
{

}

// product B
CConcreteProductB::CConcreteProductB()
{
	std::cout << "Create Product B" << std::endl;
}

CConcreteProductB::~CConcreteProductB()
{

}

// product C
CConcreteProductC::CConcreteProductC()
{
	std::cout << "Create Product C" << std::endl;

}

CConcreteProductC::~CConcreteProductC()
{

}