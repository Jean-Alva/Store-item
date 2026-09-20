#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    using namespace std;
    // program 2
    const double PI = 3.14159;
    double height;
    double radius;
    
    cout << fixed << showpoint << setprecision (2);

    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << endl;
    
    cout << "Enter the radius of the base fo the cylinder: ";
    cin >> radius;
    cout << endl;

    cout << "Surface area: " << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;
    cout << "Volume of the cylinder = " << PI * pow(radius, 2.0) * height << endl;

    // program 3
    double weight_pounds;
    double weight_kilograms;

    cout << fixed << showpoint << setprecision (2);

    cout << "Enter the weight of the person in kilograms: ";
    cin >> weight_kilograms;
    weight_pounds = weight_kilograms * 2.2;

    cout << "Weight in kilograms: " << weight_kilograms << " kg" << endl;
    cout << "Weight in pounds: " << weight_pounds << " lbs" << endl;

    //program 6
    double volume;
    double mass;
    double density;

    cout << fixed << showpoint << setprecision (2);

    cout << "Enter the mass of the object in grams: ";
    cin >> mass;
    cout << endl;

    cout << "Enter the volume of the object in cubic centimeters: ";
    cin >> volume;
    cout << endl;

    if (volume == 0){
        cout << "Error: Volume cannot be zero." << endl;
    } else {
        density = mass / volume;
        cout << "The Density is:" << density << "g/cm^3" << endl;
    }

    // program 7
    double netBalance;
    double payment;
    int D1;
    int D2;
    double interestRate;
    double averageDailyBalance;
    double interest;

    cout << fixed << showpoint << setprecision (2);

    cout << "Enter the netbalance of the savings account: " << endl;
    cin >> netBalance;
    cout << endl;

    cout << "Enter the payment made: " << endl;
    cin >> payment;
    cout << endl;

    cout << "Enter the number of days in the billing cycle (D1):" << endl;
    cin >> D1;
    cout << endl;

    cout << "Enter the number of days in the billing cycle (D2):" << endl;
    cin >> D2;
    cout << endl;

    cout << "Enter the interest rate:" << endl;
    cin >> interestRate;
    cout << endl;

    averageDailyBalance = (netBalance * D1 - payment * D2) / D1;
    interest = averageDailyBalance * interestRate;

    cout << "The interest is: $" << interest << endl;
    cout << "The average daily balance is: $" << averageDailyBalance << endl;

    return 0;
}