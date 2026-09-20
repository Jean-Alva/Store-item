#include <iostream>
#include <string>
using namespace std;
class studentType{
    private:
    string firstName;
    string lastName;
    int testScore;
    char grade;
    
    public:
    studentType(){
        firstName = "";
        lastName = "";
        testScore = 0;
        grade = 'F';
    }
    void setName(string first, string last){
        firstName = first;
        lastName = last;
    }
    void setTestScore(int score){
        testScore = score;
    }
    void calculateGrade(){
        if(testScore >= 90){
            grade = 'A';
        }
        else if(testScore >= 80){
            grade = 'B';
        }
        else if(testScore >= 70){
            grade = 'C';
        }
        else if(testScore >= 60){
            grade = 'D';
        }
        else{
            grade = 'F';
        }
    }
    void print() const{
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Test Score: " << testScore << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main(){
    studentType student1;
    student1.setName("John", "Doe");
    student1.setTestScore(85);
    student1.calculateGrade();
    student1.print();
    
    cout << endl;
    studentType student2;
    student2.setName("Jane", "Smith");
    student2.setTestScore(92);
    student2.calculateGrade();
    student2.print();
    return 0;
}