#include "Singalton.h"
#include <iostream>

CSingleton* CSingleton::m_spInstance = 0;

CSingleton::CSingleton()
{
}

CSingleton::~CSingleton()
{
}

CSingleton* CSingleton::Instance()
{
	if (!m_spInstance)
	{
		m_spInstance = new CSingleton();
		std::cout << "Create Singleton Instance" << std::endl;
	}
	return m_spInstance;
}