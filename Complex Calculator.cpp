//Final Project Complex Calculator

//Main menu and program control

#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

double getValidNumber();
int getValidInteger();

void advancedCalculator();

int main(){
    int choice;

    do{
        //calculator options
        cout << "\n=== Simple Calculator ===\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        
        choice = getValidInteger();

        //User chooses which operation to run
        switch(choice){

            case 1:{
                double a = getValidNumber();
                double b = getValidNumber();
                cout << "Result: " << add(a, b) << endl;
                break;
            }
            case 2: {
                double a = getValidNumber();
                double b = getValidNumber();
                cout << "Result: " << subtract(a, b) << endl;
                break;
            }
            case 3: {
                //get first number with validation
                double a = getValidNumber();
                //get second number with validation
                double b = getValidNumber(); 
                //call division function
                cout << "Result: " << multiply(a, b) << endl;
                break;
            }
            case 4: {
                //get first number with validation
                double a = getValidNumber();
                //get second number with validation
                double b = getValidNumber(); 
                //call division function
                cout << "Result: " << divide(a, b) << endl;
                break;
            }
            case 5:
                advancedCalculator();
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                //handles wrong input
                cout << "Invalid choice. Try again.\n";
        }
    //repeats until user exits
    } while(choice != 6); 

    return 0;
}

//Basic Arithmetic Operations

// Adds two numbers and returns the result
double add(double a, double b) {
    return a + b;
}
// Subtracts second number from first and returns the result
double subtract(double a, double b) {
    return a - b;
}
// Multiplies two numbers and returns the result
double multiply(double a, double b) {
    return a * b;
}
// Divides first number by second and returns the result
double divide(double a, double b) {
    // Checks for division by zero to prevent runtime error
    if (b == 0) {
        cout << "Error: Division by zero!\n";
        return 0; // Returns 0 if division is invalid
    }
    return a / b; // Performs division
}
//Advanced math operations/Input validation & error handling

// prompts user for a number and keeps asking until they enter a valid double
// returns a validated double
double getValidNumber(){
    double number;
    
    while (true){
        cout << "Enter a number: ";
        cin >> number;

        if (cin.fail()){
            // returns true if input is not a valid number
            cout << "Invalid input. Please enter a valid number.\n";
            // resets cin after a failed input
            cin.clear();
            // flushes bad input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else{
            return number;
        }
    }
}
// prompts user for an operator and keeps asking until they enter a valid one
// valid operators are: +, -, *, /, %, log, sqrt, ^, stop
// returns the validated operator as a string, including "stop" if user wants to quit
int getValidInteger(){
    int number;
    
    while (true){
        cin >> number;

        if (cin.fail()){
            // returns true if input is not a valid integer
            cout << "Invalid input. Please enter a valid integer.\n";
            // resets cin after a failed input
            cin.clear();
            // flushes bad input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else{
            return number;
        }
    }
}
void advancedCalculator (){
    int choice;

    do{
        //calculator options
        cout << "\n=== Advanced Calculator ===\n";
        cout << "1. Power (x^y)\n";
        cout << "2. Square Root\n";
        cout << "3. Log (ln)\n";
        cout << "4. Modulus\n";
        cout << "5. Back\n";
        
        choice = getValidInteger();

        //User chooses which operation to run
        switch(choice){

            case 1:{
                double a = getValidNumber();
                double b = getValidNumber();
                cout << "Result: " << pow(a, b) << endl;
                break;
            }
            case 2: {
                double a = getValidNumber();

                if (a < 0){
                    cout << "Error: Negative number!\n";
                }else{
                    cout << "Result: " << sqrt(a) << endl;
                }
                break;
            }
            case 3: {
                double a = getValidNumber();
                //get first number with validation
                if (a <= 0){
                    cout << "Error: invalid number!\n";
                }else{
                    cout << "Result: " << log(a) << endl;
                }
                break;
            }
            case 4: {
                int a, b;

                cout << "Enter first integer: ";
                cin >> a >> b;
                
                if (b == 0){
                    cout << "Error: Divison by zero\n";
                }else{
                    cout << "Result: " << (a % b) << endl;
                }
                break;
            }
            case 5:
                cout << "Returning to main menu...\n";
                break;
            
            default:
                //handles wrong input
                cout << "Invalid choice. Try again.\n";
        }
    //repeats until user exits
    }while(choice != 5);
}
