#include<iostream>
using namespace std;
/***********************************
	Lab:	13
	Task:	Part - 01
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
	
};

class SmartLight : public Device {
	public:
	    SmartLight(){
			cout << "SmartLight Constructor" << endl;
		}
		
		void adjustBrightness(){
			cout << "adjustBrightness" << endl;
		}
		
};

class SmartFan : public Device {
	public:
		SmartFan(){
			cout << "SmartFan Constructor" << endl;
		}
		
		void adjustSpeed(){
			cout << "adjustSpeed" << endl;
		}
		
};

class SmartCombo : public SmartLight, public SmartFan{
	public:
		SmartCombo(){
			cout << "SmartCombo Constructor" << endl;
		}
		
};

int main(){
	//PART - 01: without virtual inheritance

	SmartCombo sc;
    sc.showID();   // should cause ambiguity

	return 0;
}

