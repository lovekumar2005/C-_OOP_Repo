#include<iostream>
using namespace std;

class Camera
{
	public:
		Camera()
		{
			cout << "Camera()" << endl;	
		}	
		void takePhoto()
		{
			cout << "Taking Photo...." << endl;
		}
		~Camera()
		{
			cout << "~Camera()" << endl;
		}
		
		void print()
		{
			cout << "Print in Camera class " << endl;
		}
};

class Phone
{
	public:
		
		void print()
		{
			cout << "Print in Phone class " << endl;	
		}
		
		Phone()
		{
			cout << "Phone()" << endl;
		}	
		
		void makeCall()
		{
			cout << "Making a call..." << endl;
		}
		~Phone()
		{
			cout << "~Phone()" << endl;
		}
};

class smartPhone : public Camera, public Phone
{
	public:
		smartPhone()
		{
			cout << "samrtPhone()" << endl;
		}
		
		void smartActicity()
		{
			cout << "\n\n smart Activity started ... "<< endl;
			takePhoto();
			makeCall();
			cout << " smart Activity ended ... \n\n " << endl;
		}
		
		~smartPhone()
		{
			cout << "~smartPhone()" << endl;
		}
		
		void print()
		{
			cout << "print in smartphone class" << endl;
		}
};

int main()
{
	smartPhone s;
//	s.smartActicity();
//	s.makeCall();		// Phone class
//	s.takePhoto();		// Camera class
//	s.Camera::print();   // camera
//	s.Phone::print();	// phone	
	s.print();	// smartPhone
	
	return 0;
}

