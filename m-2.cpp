#include<iostream>
#include<string.h>
using namespace std;

class school{
	public:
		int arg;
		void function0()
		{
			cout<<"called function with 0 arguments = "<<endl;
		}
		void function1(int arg1)
		{
			cout<<"called function with 1 arguments = "<<arg1<<endl;
		}
		void function2(int arg1, int arg2)
		{
			cout<<"called function with 2 arguments = "<<arg1<<" , "<<arg2<<endl;
		}
		void function3(int arg1,int arg2,int arg3)
		{
			cout<<"called function with 3 arguments = "<<arg1<<" , "<<arg2<<" , "<<arg3<<endl;
		}
		void allargumentsdefaulted(int arg1 = 1, int arg2 = 2, int arg3 = 3 )
		{
			cout<<"called allargumentsdefaulted with arguments = "<<arg1<<" ,"<<arg2<<" , "<<arg3<<endl;
		}
};

int main()
{
	school obj;
	
	obj.function0();
	obj.function1(10);
	obj.function2(20, 30);
	obj.function3(40, 50, 60);
	obj.allargumentsdefaulted();
	
	return 0;
}