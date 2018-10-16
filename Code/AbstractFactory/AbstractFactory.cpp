#include "AbstractFactory.h"

// abstract factory
CAbstractFactory::CAbstractFactory()
{
}
CAbstractFactory::~CAbstractFactory()
{

}

// factory 1
CConcreteFactory1::CConcreteFactory1()
{
}
CConcreteFactory1::~CConcreteFactory1()
{
}

CAbstractProductA* CConcreteFactory1::CreateProductA()
{
	return new CConcreteProductA1();
}
CAbstractProductB* CConcreteFactory1::CreateProductB()
{
	return new CConcreteProductB1();
}

// factory 2
CConcreteFactory2::CConcreteFactory2()
{
}
CConcreteFactory2::~CConcreteFactory2()
{
}

CAbstractProductA* CConcreteFactory2::CreateProductA()
{
	return new CConcreteProductA2();
}
CAbstractProductB* CConcreteFactory2::CreateProductB()
{
	return new CConcreteProductB2();
}