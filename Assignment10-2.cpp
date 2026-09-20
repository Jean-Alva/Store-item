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
            }else{
                counter = 0;
            }
        }void initializeCounter(){
            counter = 0;
        }int getCounter() const{
            return counter;
        }void incrementCounter(){
            counter++;
        }void decrementCounter(){
            if(counter > 0){
                counter--;
            }
            else{
                cout << "Counter cannot be negative." << endl;
            }
        }
};
int main(){
    counterType myCounter;
            
    myCounter.setCounter(5);
    cout << "Initial value: " << myCounter.getCounter() << endl;
            
    myCounter.incrementCounter();
    cout << "After increment: " << myCounter.getCounter() << endl;
            
    myCounter.decrementCounter();
    cout << "After decrement: " << myCounter.getCounter() << endl;
            
    myCounter.decrementCounter();
    myCounter.decrementCounter();
    myCounter.decrementCounter();
    myCounter.decrementCounter();
    myCounter.decrementCounter();

    cout << "Final value: " << myCounter.getCounter() << endl;

    return 0;
}