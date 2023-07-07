#include<iostream>
#include<string.h>
using namespace std;
class manager{
	public :
		void info()
		{
			cout<<"how are you employee ?"<<endl;
		}
};
class employee : public manager
{
    public :
		void info()
		{
			cout<<"I am fine "<<endl;
		}	
};
int main()
{
	employee o1;
	
	o1.manager::info();
	o1.info();
}
