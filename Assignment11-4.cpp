#include <iostream>
#include <string>

using namespace std;

class addressType{
    private:
        string street;
        string city;
        string state;
        int zipCode;
    public:
        addressType(string st = " ", string c = " ", string s = " ", int z = 0){
            street = st;
            city = c;
            state = s;
            zipCode = z;
        }
        void setAddress(string st, string c, string s, int z){
            street = st;
            city = c;
            state = s;
            zipCode = z;
        }
        void printAddress(){
            cout << street << ", " << city << ", " << state << " " << zipCode << endl;
        }
};
class dataType{
    private:
        int month, day, year;
    public:
        dataType(int m = 1, int d = 1, int y = 2000){
            month = m;
            day = d;
            year = y;
        }
        int getMonth(){
            return month;
        }
        void print(){
            cout << month << "/" << day << "/" << year << endl;
        }
};
class personType{
    private:
        string firstName;
        string lastName;
    public:
        personType(string f = "", string l = ""){
            firstName = f;
            lastName = l;
        }
        string getLastName(){
            return lastName;
        }
        void print(){
            cout << firstName << " " << lastName;
        }
};
class extPersonType : public personType{
    private:
        addressType homeAddress;
        dataType birthDate;
        string phoneNumber;
        string type;
    public:
        extPersonType(string f = "", string l = "", string p = "", string t = "") : personType(f, l){
            phoneNumber = p;
            type = t;
        }
        void setInfo(addressType a, dataType d, string p, string t){
            homeAddress = a;
            birthDate = d;
            phoneNumber = p;
            type = t;
        }
        string getType(){
            return type;
        }
        int getBirthMonth(){
            return birthDate.getMonth();
        }
        void print(){
            personType::print();
            cout << endl << "Phone Number: " << phoneNumber << endl;
            cout << "home Address: ";
            homeAddress.printAddress();
            cout << "Birth Date: ";
            birthDate.print();
            cout << endl << "Type: " << type << endl;
        }
};
class addressBookType{
    private:
        extPersonType list[500];
        int count;
    public:
        addressBookType(){
            count = 0;
        }
        void addEntry(extPersonType p){
            if(count < 500){
                list[count++] = p;
            }
        }
        void sort(){
            for(int i = 0; i < count - 1; i++){
                for(int j = i + 1; j < count; j++){
                    if(list[j].getLastName() > list[j].getLastName()){
                        swap(list[i], list[j]);
                    }
                }
            }
        }
        void search(string last){
            for(int i = 0; i < count; i++){
                if(list[i].getLastName() == last){
                    list[i].print();
                    return;
                }
            }
            cout << "Entry not found." << endl;
        }
        void printBirthdays(int month){
            for(int i = 0; i < count; i++){
                if(list[i].getBirthMonth() == month){
                    list[i].print();
                    cout << endl;
                }
            }
        }
        void printByType(string t){
            for(int i = 0; i < count; i++){
                if(list[i].getType() == t){
                    list[i].print();
                    cout << endl;
                }
            }
        }
};
int main(){
    addressBookType book;

    addressType a1("123 Main St", "Anytown", "CA", 12345);
    dataType d1(1, 1, 1990);
   
    extPersonType p1("John", "Doe", "555-1234", "Friend");
    p1.setInfo(a1, d1, "555-1234", "Friend");
    
    book.addEntry(p1);
    
    book.sort();
    
    cout << "\nBirthdays in January:\n";
    book.printBirthdays(1);
    
    cout << "\nSearch Doe:\n" << endl;
    book.search("Friend");

    cout << "\nPrint by Type Friend:\n" << endl;
    book.printByType("Friend");
    
    return 0;
}