#include "Builder.h"
#include <iostream>

using namespace std;

// base product class
CBuilder::CBuilder()
{
	// set default property
	m_PropertyA = "pre-defined";
	m_PropertyB = "pre-defined";
	m_PropertyC = "pre-defined";
}

CBuilder::~CBuilder()
{

}

// concrete product
CConcreteBuilder::CConcreteBuilder()
{

}

CConcreteBuilder::~CConcreteBuilder()
{

}

// interface to set product property step by step
void CConcreteBuilder::BuidPartA(const string &Property)
{
	m_PropertyA = Property;
}

void CConcreteBuilder::BuidPartB(const string &Property)
{
	m_PropertyB = Property;
}

void CConcreteBuilder::BuidPartC(const string &Property)
{
	m_PropertyC = Property;
}

// get product
CBProduct* CConcreteBuilder::GetProduct()
{
	cout << m_PropertyA << endl;
	cout << m_PropertyB << endl;
	cout << m_PropertyC << endl;
	return new CBProduct();
}