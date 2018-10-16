#ifndef SINGLETON_H
#define SINGLETON_H

//@todo singleton is not simple !!!
class CSingleton
{
public:
	CSingleton();
	~CSingleton();

	static CSingleton* Instance();

private:
	static CSingleton* m_spInstance;
};
#endif
