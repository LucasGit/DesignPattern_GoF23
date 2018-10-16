#ifndef BUILDER_H
#define BUILDER_H

#include <string>
#include "BuilderProduct.h"
using  std::string;

// base class product
class CBuilder
{
public:
	CBuilder();
	~CBuilder();

	// interface to set product property step by step
	virtual void BuidPartA(const string &Property) = 0;
	virtual void BuidPartB(const string &Property) = 0;
	virtual void BuidPartC(const string &Property) = 0;

	// get product
	virtual CBProduct* GetProduct() = 0;

protected:
	// set default property
	string m_PropertyA;
	string m_PropertyB;
	string m_PropertyC;
};

class CConcreteBuilder :public CBuilder
{
public:
	CConcreteBuilder();
	~CConcreteBuilder();

	// interface to set product property step by step
	void BuidPartA(const string &Property);
	void BuidPartB(const string &Property);
	void BuidPartC(const string &Property);

	// get product
	CBProduct* GetProduct();

};

#endif
