 #include <iostream>
using namespace std;
class beta
{ 
public:
	int age;
	int same_age;
	int *yk;
	int *yk_2;
	beta (int n)
	{
		age = n;
		age++;
		yk = &age;
		
	}
	beta(const beta& bt)
	{
		same_age = bt.age;
	}

	
	~beta()
	{
	cout << "destructor" << endl;
	}
	int get_age(){ return age; }
	beta operator = (beta bt)
	{
		age = bt.age;
		return *this;
	}
	beta * operator&();

	

};
int main()
{
	 
	beta bt = beta(22);
	cout << *bt.yk << " indicator " << endl;
	cout <<"Copy constructor number: "<< bt.get_age() << endl;
	
	return 0;
}
