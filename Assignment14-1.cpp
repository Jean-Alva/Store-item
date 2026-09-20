#include <iostream>
#include <iomanip>
#include <climits>
#include <stdexcept>
using namespace std;
int main(){
    const double CM_PER_INCH = 2.54;
    const double INCHES_PER_FOOT = 12.0;

    double feet, inches;
    bool validInput = false;
    while (!validInput) {
        try{
            cout << "Enter length in feet: ";
            cin >> feet;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw invalid_argument("Invalid input for feet. Please enter a number."); 
            }
            if(feet < 0 || inches < 0){
                throw invalid_argument("Length cannot be negative. Please enter a non-negative number.");
            }
            double totalInches = (feet * INCHES_PER_FOOT) + inches;
            double centimeters = totalInches * CM_PER_INCH;
            cout << fixed << setprecision(2);
            cout << "Equivalent length in centimeters: " << centimeters << centimeters << " cm" <<endl;
            validInput = true;
        }
        catch (invalid_argument& e) {
            cout << e.what() << endl;
        }
        catch(out_of_range& e){
            cout << e.what() << endl;
        }
    }
        return 0;
}