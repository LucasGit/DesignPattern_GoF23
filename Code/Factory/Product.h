#ifndef PRODUCT_H
#define PRODUCT_H

// base product class
class CProduct
{
public:
	CProduct();
	~CProduct();

	//virtual CProduct* Operation() = 0; // Pure Virtural
	
};

// product A
class CConcreteProductA :public CProduct
{
public:
	CConcreteProductA();
	~CConcreteProductA();

};

// product B
class CConcreteProductB :public CProduct
{
public:
	CConcreteProductB();
	~CConcreteProductB();

};

// product C
class CConcreteProductC :public CProduct
{
public:
	CConcreteProductC();
	~CConcreteProductC();

};
#endif // !PRODUCT_H
