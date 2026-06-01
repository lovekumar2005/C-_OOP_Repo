#include<iostream>
using namespace std;

class Rectangle
{
	protected:
		int length;
		int width;
	
	public:
		
		Rectangle()
		{
			cout << "Rectangle()" << endl;
			length = width = 0;	
		}
		
		Rectangle(int data)
		{
			cout << "Rectangle(int) " << endl;
			length = width = data;
		}
		
		Rectangle(int len, int wid)
		{
			cout << "Rectangle (int, int)" << endl;
			length = len;
			width = wid;
		}
		
		int getArea()
		{
			return length*width;
		}
		
		~Rectangle()
		{
			cout << "~Rectangle()" << endl;
		}
	
};

class Room : public Rectangle
{
	private:
		int height;
		int volume;
	
	public:
		Room()
		{
			cout << "Room()" << endl;
			height = volume = 0;
		}	
		
		Room(int h) : Rectangle(h)
		{
			cout << "Room(int) " << endl;
			height = h;
			volume = length * width * height;
		}
		
		void print()
		{
			cout << "Length : " << length << endl;
			cout << "Width : " << width << endl;
			cout << "Height : " << height << endl;
			cout << "Volume : " << volume << endl;
		}
		
		~Room()
		{
			cout << "~Room()" << endl;
		}
};

int main()
{
	Room R(30);
	R.print();
	return 0;
}




















