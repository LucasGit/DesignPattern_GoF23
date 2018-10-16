#ifndef ABSTRACT_PRODUCT_H
#define ABSTRACT_PRODUCT_H

// there is 2 type product A and B
// and them divide into 2 level 1,2

// Abstract product
// --------------------------------------------------------------------------------
// Discuss (under)
// Maybe there could be 2 abstract class "CAbstractProductA" and "CAbstractProductB"
// instead of single abstract CAbstractProduct in order to diff product A and B ??? 
// (it seems two diff A and B abstract class is reasonable !!! cause as 2 product 
// their property is diff in most situation,doc official example is like this)


// abstract product A
class CAbstractProductA
{
public:
	CAbstractProductA();
	~CAbstractProductA();

};

// product A1
class CConcreteProductA1:public CAbstractProductA
{
public:
	CConcreteProductA1();
	~CConcreteProductA1();

};

// product A2
class CConcreteProductA2 :public CAbstractProductA
{
public:
	CConcreteProductA2();
	~CConcreteProductA2();

};

// abstract product B
class CAbstractProductB
{
public:
	CAbstractProductB();
	~CAbstractProductB();

};


// product B1
class CConcreteProductB1 :public CAbstractProductB
{
public:
	CConcreteProductB1();
	~CConcreteProductB1();

};

// product B2
class CConcreteProductB2 :public CAbstractProductB
{
public:
	CConcreteProductB2();
	~CConcreteProductB2();

};
#endif
