#ifndef SINGLETON
#define SINGLETON

class Singleton
{
   public:
     static Singleton * instance();
     int additionValue(int iVal);
     int getValue();
     void setValue(int iVal);
		
   private:
     Singleton();
     static Singleton * instance_singleton;	
     int value;    	

};


#endif
