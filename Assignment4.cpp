#include <iostream>
#include <string>
int main(){
    int spiderman = 0;
    int ironman = 0;
    int hulk = 0;
    int thor = 0;
    
    std::string Avengers;
    int max = 0;
    int answer1, answer2, answer3, answer4, answer5, answer6;
    
    std::cout << "Welcome to the Avengers Quiz!\n";
    std::cout << "Q1) What is Spiderman real name?\n\n";
    std::cout << "1) Tony Stark\n";
    std::cout << "2) Peter Parker\n";
    std::cout << "3) Bruce Banner\n";
    std::cout << "4) God of Thunder\n\n";
    std::cin >> answer1;
    
    if(answer1 == 1){
        ironman++;
    }else if(answer1 == 2){
        spiderman++;
    }else if(answer1 == 3){
        hulk++;
    }else if(answer1 == 4){
        thor++;
    }else{
        std::cout << "Invalid answer\n";
    }
    std::cout << "Q2) What is Thor's superpower?\n\n";
    std::cout << "1) Flying\n";
    std::cout << "2) Webs\n";
    std::cout << "3) Super Strength\n";
    std::cout << "4) Asgardian Speed\n\n";
    std::cin >> answer2;
    
    if(answer2 == 1){
        ironman++;
    }else if(answer2 == 2){
        spiderman++;
    }else if(answer2 == 3){
        hulk++;
    }else if(answer2 == 4){
        thor++;
    }else{
        std::cout << "Invalid answer\n";
    }
    std::cout << "Q3) What is the name of Thor's hammer?\n\n";
    std::cout << "1) Mjolnir\n";
    std::cout << "2) Stormbreaker\n";
    std::cout << "3) Gungnir\n";
    std::cout << "4) Jarnbjorn\n\n";
    std::cin >> answer3;
    
    if(answer3 == 1){
        thor++;
    }else if(answer3 == 2){
        thor++;
    }else if(answer3 == 3){
        thor++;
    }else if(answer3 == 4){
        thor++;
    }else{
        std::cout << "Invalid answer\n";
    }
    std::cout << "Q4) What is the name of the Hulk's alter ego?\n\n";
    std::cout << "1) Tony Stark\n";
    std::cout << "2) Peter Parker\n";
    std::cout << "3) Bruce Wayne\n";
    std::cout << "4) Bruce Banner\n\n";
    std::cin >> answer4;
    
    if(answer4 == 1){
        spiderman++;
    }else if(answer4 == 2){
        ironman++;
    }else if(answer4 == 3){
        hulk++;
    }else if(answer4 == 4){
        thor++;
    }else{
        std::cout << "Invalid answer\n";
    }
    std::cout << "Q5) Who says I love you 3000?\n\n";
    std::cout << "1) Steven Grant Rogers\n";
    std::cout << "2) Peter Parker\n";
    std::cout << "3) Tony Stark\n";
    std::cout << "4) Bruce Banner\n\n";
    std::cin >> answer5;
    
    if(answer5 == 1){
        ironman++;
    }else if(answer5 == 2){
        ironman++;
    }else if(answer5 == 3){
        ironman++;
    }else if(answer5 == 4){
        ironman++;
    }else{
        std::cout << "Invalid answer\n";
    }
    std::cout << "Q6) Who's Uncle is named Ben?\n\n";
    std::cout << "1) Thor\n";
    std::cout << "2) Tony Stark\n";
    std::cout << "3) Bruce Banner\n";
    std::cout << "4) Peter Parker\n\n";
    std::cin >> answer6;
    
    if(answer6 == 1){
        thor++;
    }else if(answer6 == 2){
        ironman++;
    }else if(answer6 == 3){
        hulk++;
    }else if(answer6 == 4){
        spiderman++;
    }else{
        std::cout << "Invalid answer\n";
    }
    if(spiderman > max){
        max = spiderman;
        Avengers = "Spiderman";
    }
    if(ironman > max){
        max = ironman;
        Avengers = "Ironman";
    }
    if(hulk > max){
        max = hulk;
        Avengers = "Hulk";
    }
    if(thor > max){
        max = thor;
        Avengers = "Thor";
    }
    std::cout << Avengers << "\n";
}