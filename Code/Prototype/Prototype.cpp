#include "Prototype.h"
#include <iostream>

// abstract class
CPrototype::CPrototype()
{

}

CPrototype::~CPrototype()
{

}

// concrete class
CConctetePrototype::CConctetePrototype()
{

}

CConctetePrototype::CConctetePrototype(const CConctetePrototype &cp)
{
	std::cout << "CConctetePrototype Constructor" << std::endl;
}

CConctetePrototype::~CConctetePrototype()
{

}

CPrototype* CConctetePrototype::Clone() const
{
	return new CConctetePrototype(*this);
}