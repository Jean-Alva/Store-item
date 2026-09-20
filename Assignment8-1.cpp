#include <iostream>

using namespace std;
int main(){
    double alpha[50];
    
    for (int i = 0; i < 50; i++){
        if(i < 25){
            alpha[i] = i * i;
        }else{
            alpha[i] = 3 * i;
        }
    }
    for (int i = 0; i < 50; i++){
        cout << alpha[i] << " ";
        if((i + 1) % 10 == 0){
            cout << endl;
        }
    }
    return 0;
}