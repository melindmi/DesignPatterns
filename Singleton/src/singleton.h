#ifndef SINGLETON
#define SINGLETON

class Singleton
{
   public:
     static Singleton * initialise();
     int additionValue(int iVal);
     int getValue();
     void setValue(int iVal);
		
   private:
     Singleton();
     static Singleton * mySingleton;	
     int value;    	

};


#endif
