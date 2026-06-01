#include <iostream>
using namespace std;
/***********************************
	Lab:	08
	Task:	01
	Developer:
		Roll #:	F24BB046
		Name:	Love Kumar		
***********************************/
class PersonData{
	protected:
		string lastName;
        string firstName;
        string address;
        string city;
        string state;
        string zip;
        string phone;
    public:
    	void setLastName(string lastName) { this->lastName = lastName;}
		void setFirstName(string firstName) {this->firstName = firstName;}
		void setAddress(string address) {this->address = address;}
		void setCity(string city) {this->city = city;}
		void setState(string state) {this->state = state;}
		void setZip(string zip) {this->zip = zip;}
		void setPhone(string phone) {this->phone = phone;}
		
        string getLastName() { return lastName; }
        string getFirstName() { return firstName; }
        string getAddress() { return address; }
        string getCity() { return city; }
        string getState() { return state; }
        string getZip() { return zip; }
        string getPhone() { return phone; }
};

class CustomerData: public PersonData{
	private:
		int customerNumber; 
        bool mailingList; 
    public:
    	void setCustomerNumber(int num) { customerNumber = num; }
        void setMailingList(bool ml) { mailingList = ml; }

        int getCustomerNumber() { return customerNumber; }
        bool getMailingList() { return mailingList; }


        void displayCustomerInfo() {
            cout << "Customer Number: " << customerNumber << endl;
            cout << "Name: " << firstName << " " << lastName << endl;
            cout << "Address: " << address << ", " << city << ", " << state << " " << zip << endl;
            cout << "Phone: " << phone << endl;
            cout << "Mailing List: " << (mailingList ? "Yes" : "No") << endl;
        }
};

int main() {
    CustomerData customer;

    customer.setFirstName("Love");
    customer.setLastName("Kumar");
    customer.setAddress("Boys Hostel 2");
    customer.setCity("Lahore");
    customer.setState("Punjab");
    customer.setZip("1000001");
    customer.setPhone("03313859556");

    customer.setCustomerNumber(101);
    customer.setMailingList(true);  

    cout << "===== Customer Information =====" << endl;
    customer.displayCustomerInfo();

    return 0;
}
