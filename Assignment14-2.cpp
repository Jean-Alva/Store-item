#include <iostream>
#include <string>
using namespace std;

class invalidHr {};
class invalidMin {};
class invalidSec {};

int main(){
    int hr, min, sec;
    string period;

    while (true) {
        try {
            cout << "Enter time in 24hr format (hh:mm:ss): ";
            cin >> hr >> min >> sec;

            if (hr < 0 || hr > 23) {
                throw invalidHr();
            }
            if (min < 0 || min > 59) {
                throw invalidMin();
            }
            if (sec < 0 || sec > 59) {
                throw invalidSec();
            }
            if ((period == "PM" || period == "pm") && hr != 12) {
                hr += 12;
            } else if ((period == "AM" || period == "am") && hr == 12) {
                hr = 0;
            }
            cout << "Time entered: " << hr << ":" << min << ":" << sec << endl;

            if (hr < 10) cout << "0";
            cout << hr << ":";
            if (min < 10) cout << "0";
            cout << min << ":";
            if (sec < 10) cout << "0";
            cout << sec << endl;
            break;

        } catch (invalidHr) {
            cout << "Invalid hour! Hour must be between 0 and 23." << endl;
        } catch (invalidMin) {
            cout << "Invalid minute! Minute must be between 0 and 59." << endl;
        } catch (invalidSec) {
            cout << "Invalid second! Second must be between 0 and 59." << endl;
        }
    }
    return 0;
}