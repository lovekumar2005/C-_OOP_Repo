#include<iostream>
using namespace std;
/***********************************
	Lab:	13
	Task:	Part - 02
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

class SmartLight : virtual public Device {
	public:
	    SmartLight(){
			cout << "SmartLight Constructor" << endl;
		}
		
		void adjustBrightness(){
			cout << "adjustBrightness" << endl;
		}

};

class SmartFan : virtual public Device {
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
    //PART - 02: using virtual inheritance
    SmartCombo sc;
    sc.showID();   
    
	return 0;
}

