#include <iostream>
#include <string>
using namespace std;

class dayType {
private:
    string weekDays[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int currentDay;

    int dayIndex(const string& day) const {
        for (int i = 0; i < 7; i++) {
            if (weekDays[i] == day)
                return i;
        }
        return -1;
    }

public:
    dayType() { currentDay = 0; }
    dayType(string day) { setDay(day); }

    void setDay(string day) {
        int idx = dayIndex(day);
        if (idx != -1)
            currentDay = idx;
        else {
            cout << "Invalid day entered. Defaulting to Sun." << endl;
            currentDay = 0;
        }
    }  
    void printDay() const {
        cout << weekDays[currentDay] << endl;
    }
    string getDay() const {
        return weekDays[currentDay];
    }  
    string nextDay() const {
        return weekDays[(currentDay + 1) % 7];
    }
    string prevDay() const {
        return weekDays[(currentDay + 6) % 7];
    }
    string addDays(int n) const {
        int newDay = (currentDay + n) % 7;
        return weekDays[newDay];
    }
};
int main(){
    dayType d1("Mon");

    cout << "Current day: ";
    d1.printDay();

    cout << "Next day: " << d1.nextDay() << endl;
    cout << "Previous day: " << d1.prevDay() << endl;
    
    cout << "Day after 4 days: " << d1.addDays(4) << endl;
    cout << "Day after 13 days: " << d1.addDays(13) << endl;

    dayType d2;
    cout << "\nDefault day (shoudl be sun): ";
    d2.printDay();

    dayType d3("Fri");
    cout << "Invalid input defaults to:";
    d3.printDay();

    return 0;

}