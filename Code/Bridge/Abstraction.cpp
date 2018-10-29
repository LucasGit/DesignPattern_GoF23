#include "Abstraction.h"

CAbsctration::CAbsctration()
{

}

CAbsctration::~CAbsctration()
{

}

CRefinedAbsctration::CRefinedAbsctration(CAstractionImp *pAbstractionImp)
{
	m_pAbstractionImp = pAbstractionImp;
}
CRefinedAbsctration::~CRefinedAbsctration()
{

}
void CRefinedAbsctration::Operation()
{
	m_pAbstractionImp->Operation();
}