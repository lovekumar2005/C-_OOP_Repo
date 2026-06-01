#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;
    string monthNames[12] = {"January", "February", "March", "April", "May", "June",
                              "July", "August", "September", "October", "November", "December" };

public:
    void setDate(int d, int m, int y) {
        // Input validation
        if (m < 1 || m > 12) {
            cout << "Invalid month! Setting month to 1." << endl;
            month = 1;
        } else {
            month = m;
        }

        if (d < 1 || d > 31) {
            cout << "Invalid day! Setting day to 1." << endl;
            day = 1;
        } else {
            day = d;
        }

        year = y;
    }

    void displayDate() const {
        cout << monthNames[month] << " ";
        if (day < 10)
            cout << "0" << day << ", " << year << endl;
        else
            cout << day << ", " << year << endl;
    }
};

int main() {
    Date date;
    int d, m, y;

    cout << "Enter day (1-31): ";
    cin >> d;
    cout << "Enter month (1-12): ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;

    date.setDate(d, m, y);

    cout << "Formatted Date: ";
    date.displayDate();

    return 0;
}

