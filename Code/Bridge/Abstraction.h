#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "AbstractionImp.h"

// abstraction class
class CAbsctration
{
public:
	CAbsctration();
	~CAbsctration();

	// interface 
	virtual void Operation() = 0;

private:


};

// refined abstraction class
class CRefinedAbsctration :public CAbsctration
{
public:
	CRefinedAbsctration(CAstractionImp *pAbstractionImp);
	~CRefinedAbsctration();

	void Operation();
	
private:
	CAstractionImp *m_pAbstractionImp;

};
#endif
