/*
	test: non-virtual, virtual not overriden and static
*/

#ifndef H_CLASSES
#define H_CLASSES

#include <string>

#define swift __attribute__((annotate("swift")))

class swift Simple
{
	public:
		void method1();
		virtual void method2();
		void method3();
		
		static void method4();
	
	private:
		std::string _test;
};


#endif
