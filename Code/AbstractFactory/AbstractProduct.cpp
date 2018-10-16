#include "AbstractProduct.h"
#include <iostream>

// construct implicit init is neccessary

// product A
// abstract product
CAbstractProductA::CAbstractProductA()
{

}
CAbstractProductA::~CAbstractProductA()
{

}

CConcreteProductA1::CConcreteProductA1()
{
	std::cout<< "Create CConcreteProductA1" << std::endl;
}

CConcreteProductA1::~CConcreteProductA1()
{
}

CConcreteProductA2::CConcreteProductA2()
{
	std::cout << "Create CConcreteProductA2" << std::endl;

}

// product B
// abstract product
CAbstractProductB::CAbstractProductB()
{

}
CAbstractProductB::~CAbstractProductB()
{

}

CConcreteProductA2::~CConcreteProductA2()
{

}

CConcreteProductB1::CConcreteProductB1()
{
	std::cout << "Create CConcreteProductB1" << std::endl;
}
CConcreteProductB1::~CConcreteProductB1()
{

}

CConcreteProductB2::CConcreteProductB2()
{
	std::cout << "Create CConcreteProductB2" << std::endl;
}
CConcreteProductB2::~CConcreteProductB2()
{

}