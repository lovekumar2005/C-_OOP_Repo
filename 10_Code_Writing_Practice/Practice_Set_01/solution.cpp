#include <iostream>
#include <string>

using namespace std;

class Bus
{
private:
    string busNumber;
    string owner;
    int capacity;

public:
    Bus(string bNum, string own)
    {
        busNumber = bNum;
        owner = own;
        capacity = 0;
    }

    Bus(const Bus &b)
    {
        busNumber = b.busNumber;
        owner = b.owner;
        capacity = b.capacity;
    }

    ~Bus()
    {
        cout << "Destructor executed...\n";
    }

    string getBusNumber()
    {
        return busNumber;
    }

    string getOwner()
    {
        return owner;
    }

    int getCapacity()
    {
        return capacity;
    }

    void setBusNumber(string bNum)
    {
        busNumber = bNum;
    }

    void setOwner(string own)
    {
        owner = own;
    }

    void setCapacity(int cap)
    {
        capacity = cap;
    }

    void setBus(string bNum, string own, int cap)
    {
        busNumber = bNum;
        owner = own;
        capacity = cap;
    }

    void getBus()
    {
        cout << "Enter Bus Number: ";
        getline(cin, busNumber);

        cout << "Enter Owner Name: ";
        getline(cin, owner);

        cout << "Enter Capacity: ";
        cin >> capacity;
        cin.ignore();
    }

    void putBus()
    {
        cout << "Bus Number : " << busNumber << endl;
        cout << "Owner      : " << owner << endl;
        cout << "Capacity   : " << capacity << endl;
        cout << "-----------------------------\n";
    }

    void book()
    {
        capacity = capacity + 1;
    }

    void cancel()
    {
        capacity = capacity - 1;
    }
};

int main()
{
    Bus b1("LHR 3216", "Lahore Transport Company");
    Bus b2("LHR 3317", "Faisal Movers");
    Bus b3("KHI 9876", "Road Master");
    Bus b4("ISD 5467", "Daewoo");
    Bus b5("KPK 4532", "Sania Express");

    b1.setCapacity(40);
    b2.setCapacity(45);
    b3.setCapacity(80);
    b4.setCapacity(60);
    b5.setCapacity(55);

    cout << "\n----- Bus Information -----\n";
    b1.putBus();
    b2.putBus();
    b3.putBus();
    b4.putBus();
    b5.putBus();

    return 0;
}
