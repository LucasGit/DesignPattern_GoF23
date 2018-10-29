#ifndef ABSTRACTIONIMP_H
#define ABSTRACTIONIMP_H

class CAstractionImp
{
public:
	CAstractionImp();
	~CAstractionImp();

	virtual void Operation() = 0;

private:

};

class CConcreteAbstrationImpA :public CAstractionImp
{
public:
	CConcreteAbstrationImpA();
	~CConcreteAbstrationImpA();

	void Operation();
};

class CConcreteAbstrationImpB :public CAstractionImp
{
public:
	CConcreteAbstrationImpB();
	~CConcreteAbstrationImpB();

	void Operation();
};


#endif
