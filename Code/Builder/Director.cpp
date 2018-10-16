#include "Director.h"

CDirector::CDirector(CBuilder *pBulder)
{
	m_pBuilder = pBulder;
}

CDirector::~CDirector()
{

}

void CDirector::Contruct()
{
	m_pBuilder->BuidPartA("user-defined");
	m_pBuilder->BuidPartB("user-defined");
	m_pBuilder->BuidPartC("user-defined");
}