#include <cstddef>
#include "singleton.h" 

Singleton* Singleton::instance_singleton = NULL;

Singleton::Singleton() : value(0)
{	
}

Singleton* Singleton::instance()
{
   if(!instance_singleton)
   {
      instance_singleton = new Singleton();
   }
		
   return instance_singleton;	
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
