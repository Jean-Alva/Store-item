#include <iostream>
using namespace std;

int main(){
    string status;
    int children = 0;
    double income, pensionPercent;

    cout << "Enter marital status (single/married): ";
    cin >> status;

    if(status == "married") {
        cout << "Enter number of children under 14: ";
        cin >> children;
    }

    cout << "Enter gross income: ";
    cin >> income;

    cout << "Enter pension percentage (max 6): ";
    cin >> pensionPercent;

    if(pensionPercent > 6){
        pensionPercent = 6;
    }
    double standard = (status == "single") ? 4000: 7000;
    int people = (status == "single") ? 1 : (2+children);
    double personal = 1500 * people;

    double pension = (pension / 100) * income;

    double taxable = income - (standard + personal + pension);
    if(taxable < 0) taxable = 0;

    double tax;

    if(taxable <= 15000){
        tax = 0.15 * taxable;
    }else if (taxable <= 40000){
        tax = 2250 + 0.25 * (taxable - 15000);
    }else{
        tax = 8460 + 0.35 * (taxable - 40000);
    }
    cout << "Tax owed: $" << tax << endl;

    return 0;
}