#include <iostream>
using namespace std;
class beta
{ 
public:
	int age;
	beta (int n)
	{
		age = n;
		age++;
	}
	~beta()
	{
	cout << "destructor" << endl;
	}

};
int main()
{
	 
	beta bt = beta(22);
	cout << bt.age << endl;
	
	return 0;
}
