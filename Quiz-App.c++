#include <iostream>
#include <array>
using namespace std;

struct QustestionStruct{
    string question;
    string options[4];
    int answer;
    string inputLabel = "chose the answer (1-4) : ";
};


void questionPrint (QustestionStruct quest){
    int optionChosed;
    cout << "Qus: " << quest.question << endl;
    for(int i = 0; i < 4; i++){
        cout <<"  " << i+1 << ". " << quest.options[i] << endl;
    };
    cout << quest.inputLabel ;
    cin >> optionChosed;
    cout << "" << endl;
    if(quest.answer == optionChosed){
        cout << "Correct!" << endl;
    }else{
        cout << "Incorrect!" << endl;
    }
    cout << "" << endl;
}

int main(){

    QustestionStruct question[5];

    question[0] = {
        "Which one is not OOP Concept?",
        {
            "Polymorphism", "Inheritance", "Differentiation", "Abstruction"
        },
        3
    };

    question[1] = {
        "What is the Mother of all programming language?",
        {
            "C++", "C#", "C--", "C"
        },
        4
    };

    question[2] = {
        "Which is not an Operating System?",
        {
            "Linux", "Windows", "ReactJS","MacOS"
        },
        3
    };

    question[3] = {
        "Who Created Linux?",
        {
            "Bill Gates", "Linus Torvalds", "Mark Zukerberg", "Steve Jobs"
        },
        2
    };

    question[4] = {
        "1 Byte = ?",
        {
            "8 Bit", "16 Bit", "32 Bit", "64 Bit"
        },
        1
    };
    
    for(int i = 0; i < 5; i++){
        questionPrint(question[i]);
    };
}
