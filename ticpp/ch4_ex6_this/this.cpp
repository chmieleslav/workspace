/*
Create a class that (redundantly) performs data member
selection and a member function call using the this
keyword (which refers to the address of the current
object).
*/

#include <iostream>

using namespace std;

class BankAccount {

private:
	int amount;
	
public:
	BankAccount(int amount)
	{
		cout << "Creating account with the initial balance: " << amount << endl;
		this->change_balance(amount);
	}
	
	void change_balance(int amount)
	{
		this->amount = amount;		
		cout << "Balance changed. New balance: " << this->amount << endl;
	}
	
	void show_balance()
	{
		cout << "Current balance: " << this->amount << endl;
	}
};

int main(void)
{
	BankAccount myAccount(50);
	myAccount.show_balance();
	myAccount.change_balance(100);
	myAccount.show_balance();
}
