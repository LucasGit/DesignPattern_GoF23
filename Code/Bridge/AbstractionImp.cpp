#include "AbstractionImp.h"
#include <iostream>

CAstractionImp::CAstractionImp()
{
}

CAstractionImp::~CAstractionImp()
{
}

CConcreteAbstrationImpA::CConcreteAbstrationImpA()
{
}
CConcreteAbstrationImpA::~CConcreteAbstrationImpA()
{
}
void CConcreteAbstrationImpA::Operation()
{
	std::cout<< "CConcreteAbstrationImpA" <<std::endl;
}

CConcreteAbstrationImpB::CConcreteAbstrationImpB()
{
}
CConcreteAbstrationImpB::~CConcreteAbstrationImpB()
{
}
void CConcreteAbstrationImpB::Operation()
{
	std::cout << "CConcreteAbstrationImpB" << std::endl;
}