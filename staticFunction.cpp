#include<iostream>
using namespace std;
class account
{
	private:
	  static int count;
	  int balance;
public:
	   static void set_count(int c)
	   {
	   	count=c;
	   	cout<<"Count "<<count<<endl;
	   }
	   void set_balance(int b)
	   {
	   	balance=b;
	   	cout<<"Balance "<<balance<<endl;
	   }
};
int account::count;
int main()
{
	account::set_count(24);
	account a1;
	a1.set_balance(5);
	a1.set_count(15);
	return 0;
}