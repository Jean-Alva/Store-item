#include <iostream>
using namespace std;
class counterType{
    private:
        int counter;
    public:
        counterType(){
            counter = 0;
        }
        void setCounter(int c){
            if(c >= 0){
                counter = c;
            }
            else{
                cout << "Invalid value. Counter not set." << endl;
                counter = 0;
            }
        }
        void initializeCounter(){
            counter = 0;
        }
        int getCounter() const{
            return counter;
        }
        void incrementCounter(){
            counter++;
        }
        void decrementCounter(){
            if(counter > 0){
                counter--;
            }
            else{
                cout << "Counter cannot be decremented. Counter is already at zero." << endl;
            }
        }
    };
    int main (){
        counterType c;
        int value;

        cout << "Enter a non-negative integer to set the counter: ";
        cin >> value;
        c.setCounter(value);

        cout << "Current counter value: " << c.getCounter() << endl;

        c.incrementCounter();
        cout << "Counter after incrementing: " << c.getCounter() << endl;

        c.decrementCounter();
        cout << "Counter after decrementing: " << c.getCounter() << endl;

        c.initializeCounter();
        cout << "Counter after initialization: " << c.getCounter() << endl;

        return 0;
    }
