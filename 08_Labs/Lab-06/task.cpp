#include <iostream>
using namespace std;
/***********************************
	Lab:	06
	Task:	01
	Developer:
		Roll #:	F24BB046
		Name:	Love Kumar		
***********************************/


class decimalList {
private:
    double *arr;  
    int size;      

public:
    decimalList(int s) {
        size = s;
        arr = new double[size];
        for(int i = 0; i < s; i++){
        	arr[i] = 0;
		}
    }

    ~decimalList() {
        delete[] arr;
    }

    void AddElement(int index, double val) {
        if (index >= 0 && index < size) {
            arr[index] = val;
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    double getHighest() const {
        double highest = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > highest) {
                highest = arr[i];
            }
        }
        return highest;
    }

    double getLowest() const {
        double lowest = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] < lowest) {
                lowest = arr[i];
            }
        }
        return lowest;
    }

    double getAverage() const {
        double sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum / size;
    }
};

int main() {
    int n;

    cout << "Enter the size of decimal list: ";
    cin >> n;
    
    double value[n];

    decimalList list(n);

    cout << "Enter " << n << " decimal numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> value[i];
        list.AddElement(i, value[i]);
    }

    cout << "\nHighest Value: " << list.getHighest() << endl;
    cout << "Lowest Value: " << list.getLowest() << endl;
    cout << "Average Value: " << list.getAverage() << endl;

    return 0;
}

