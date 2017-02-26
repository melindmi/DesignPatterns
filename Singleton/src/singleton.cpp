#include <cstddef>
#include "singleton.h" 

Singleton* Singleton::mySingleton = NULL;

Singleton::Singleton() : value(0)
{	
}

Singleton* Singleton::initialise()
{
   if(!mySingleton)
   {
      mySingleton = new Singleton();
   }
		
   return mySingleton;	
}

int Singleton::additionValue(int iVal)
{
   value += iVal;	
   return value;	
} 

int Singleton::getValue()
{
   return value;	
}

void Singleton::setValue(int iVal)
{
   value = iVal;
}
