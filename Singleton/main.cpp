#include <iostream>

#include "singleton.h" 

int main(int argc, char** argv)
{
  	
  Singleton* mySingleton = Singleton::instance();
  mySingleton->additionValue(4);
  std::cout << "New Value: " << mySingleton->getValue() << std::endl;
  
  Singleton* myNewSingleton = Singleton::instance();
  myNewSingleton->additionValue(6);
  std::cout << "New Value: " << myNewSingleton->getValue() << std::endl;
 	
  return 0;	
}
