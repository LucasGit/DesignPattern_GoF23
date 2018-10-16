#ifndef ABSTRACT_FACTOTY_H
#define ABSTRACT_FACTOTY_H

#include "AbstractProduct.h"

// desctription
// we have 2 factory ,level : 1 and 2
// at the same time ,we have 2 product A and B
// so we need 2 factory product A and B,and divide into two level 1,2

/// abstract factory
class CAbstractFactory
{
public:
	CAbstractFactory();
	~CAbstractFactory();

public:
	// interface to product A & B
	virtual CAbstractProductA* CreateProductA() = 0;
	virtual CAbstractProductB* CreateProductB() = 0;

};

/// factory 1
class CConcreteFactory1: public CAbstractFactory
{
public:
	CConcreteFactory1();
	~CConcreteFactory1();

	CAbstractProductA* CreateProductA();
	CAbstractProductB* CreateProductB();

};

/// factory 2
class CConcreteFactory2: public CAbstractFactory
{
public:
	CConcreteFactory2();
	~CConcreteFactory2();

	CAbstractProductA* CreateProductA();
	CAbstractProductB* CreateProductB();

};
#endif
