#include <iostream>

#include "singleton.h" 

int main(int argc, char** argv)
{
  	
  Singleton* mySingleton = Singleton::initialise();
  
  mySingleton->additionValue(4);
  std::cout << "New Value: " << mySingleton->getValue() << std::endl;
  
  Singleton* myNewSingleton = Singleton::initialise();
  myNewSingleton->additionValue(6);
  std::cout << "New Value: " << myNewSingleton->getValue() << std::endl;
 	
  return 0;	
}
