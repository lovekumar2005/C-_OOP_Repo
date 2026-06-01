#include<iostream>
using namespace std;

class Payment
{
	public:
		Payment(){
			cout << "Payment()" << endl;
		}
		
		// Pure virtual function
		// Makes this class an ABSTRACT class
		virtual void pay() = 0;
		
		// Normal member function
		void show()
		{
			cout << "show() in Payment class." << endl;	
		}	
};

class CreditCard : public Payment
{
	public:
		CreditCard(){
			cout << "CreditCard()" << endl;
		}
		
		// Overriding pure virtual function
		void pay() override
		{
			cout << "Payment through Credit Card...." << endl;	
		}	
};

class DebitCard : public Payment
{
	public:
		DebitCard(){
			cout << "DebitCard()" << endl;
		}
		
		// Overriding pure virtual function
		void pay() override
		{
			cout << "Payment through Debit Card...." << endl;	
		}
};

int main()
{
	// Payment t;  // ERROR: Cannot create object of Payment because Payment is an abstract class

	// CreditCard c;    // This will work ONLY if CreditCard implements the pure virtual function pay() Output will be: Payment() CreditCard()

	// Payment *p = new DebitCard;
	// p->pay();   // Calls pay() of DebitCard (runtime polymorphism)
	// p->show();  // Calls show() of Payment class
	
	DebitCard d;
	d.pay();   // Calls pay() of DebitCard class
	d.show();  // Calls show() of Payment class (inherited function)
	
	return 0;
}
