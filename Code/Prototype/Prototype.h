#ifndef PROTOTYPE_H
#define PROTOTYPE_H

// copy self
// @todo deep copy & implicit copy (How???)
// abstract base class
class CPrototype
{
public:
	CPrototype();
	~CPrototype();

	virtual CPrototype* Clone() const = 0;
};

class CConctetePrototype :public CPrototype
{
public:
	CConctetePrototype(); // constructor 1
	CConctetePrototype(const CConctetePrototype &cp); // constructor 2

	~CConctetePrototype();

	// clone current object
	CPrototype* Clone() const;
};
#endif
