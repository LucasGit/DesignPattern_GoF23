#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

class CDirector
{
public:
	CDirector(CBuilder *pBulider);
	~CDirector();

	void Contruct();

private:
	CBuilder *m_pBuilder;
};
#endif
