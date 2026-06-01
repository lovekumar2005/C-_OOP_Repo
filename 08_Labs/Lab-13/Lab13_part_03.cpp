#include<iostream>
using namespace std;
/***********************************
	Lab:	13
	Task:	Part - 03
	Developer:
		Roll #:	F24BB046
		Name:	Love Kumar			
***********************************/

class Device {
	protected:
		string deviceID;
	public:
		Device(){
			cout << "Device Constructor" << endl;
		}
		
		void showID(){
			deviceID = "F24BB046";
			cout << "ID: " << deviceID << endl;
		}
		
		virtual void status(){
			cout << "status in Device" << endl;
		}
	
};

class SmartLight : virtual protected Device {
	public:
	    SmartLight(){
			cout << "SmartLight Constructor" << endl;
		}
		
		void adjustBrightness(){
			cout << "adjustBrightness" << endl;
		}
		
		void status(){
			cout << "status in SmartLight" << endl;
		}
};

class SmartFan : virtual protected Device {
	public:
		SmartFan(){
			cout << "SmartFan Constructor" << endl;
		}
		
		void adjustSpeed(){
			cout << "adjustSpeed" << endl;
		}
		
		void status(){
			cout << "status in SmartFan" << endl;
		}
};

class SmartCombo : public SmartLight, public SmartFan{
	public:
		SmartCombo(){
			cout << "SmartCombo Constructor" << endl;
		}
		
		void status(){
			cout << "status in SmartCombo" << endl;
		}
	
};

int main(){
    //PART - 03:
    Device* d = new SmartCombo();
    d->status();

	return 0;
}

