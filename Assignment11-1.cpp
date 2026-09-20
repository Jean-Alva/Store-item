#include <iostream>
using namespace std;

class dataType {
    private:
        int month, day, year;
    public:
        dataType(int m = 1, int d = 1, int y = 1900) {
            setDate(m, d, y);
        }
        bool isLeapYear(int y){
            return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
        }
        void setDate(int m, int d, int y){
            if(m < 1 || m > 12){
                cout << "Invalid month. using default 1/1/2000\n";
                month = 1; day = 1; year = 1900;
                return;
            }
            int maxDay;

            if(m == 2){
                maxDay = isLeapYear(y) ? 29 : 28;
            } else if(m == 4 || m == 6 || m == 9 || m == 11){
                maxDay = 30;
            } else {
                maxDay = 31;
            }
            if(d < 1 || d > maxDay){
                cout << "Invalid day. using default 1/1/1900\n";
                month = 1; day = 1; year = 1900;
                return;
            }

            month = m; 
            day = d; 
            year = y;
        }
        void printDate() {
            cout << month << "/" << day << "/" << year << endl;
        }
    };
    int main() {
        dataType d1(2, 29, 2024);
        d1.printDate();

        dataType d2(2, 30, 2023);
        d2.printDate();

        d1.setDate(4, 31, 2023);
        d1.printDate();

        d1.setDate(12, 25, 2023);
        d1.printDate();

        return 0;
    }
