#include <iostream>
#include<array>
using namespace std;

struct QustestionStruct{
    string question;
    string options[4];
    int answer;
    string inputLabel = "chose the answer (1-4) : ";
};


void questionPrint (QustestionStruct quest){
    int optionChosed;
    cout << quest.question << endl;
    for(int i = 0; i < 4; i++){
        cout << i+1 << ". " << quest.options[i] << endl;
    };
    cout << quest.inputLabel ;
    cin >> optionChosed;
    if(quest.answer == optionChosed-1){
        cout << "Correct!" << endl;
    }else{
        cout << "Incorrect!" << endl;
    }

}

int main(){

    // questino 1
    QustestionStruct ques1;
    ques1.question = "Which one is not OOP Concept?";
    ques1.options[0] = "Polymorphism";
    ques1.options[1] = "Inheritance";
    ques1.options[2] = "Differentiation";
    ques1.options[3] = "Abstruction" ;
    ques1.answer = 2;

    // questino 2
    QustestionStruct ques2;
    ques2.question = "What is the Mother of all programming language?";
    ques2.options[0] = "C++";
    ques2.options[1] = "C#";
    ques2.options[2] = "C--";
    ques2.options[3] = "C" ;
    ques2.answer = 3;

    // questino 3
    QustestionStruct ques3;
    ques3.question = "Which is not an Operating System?";
    ques3.options[0] = "Linux";
    ques3.options[1] = "Windows";
    ques3.options[2] = "ReactJS";
    ques3.options[3] = "MacOS" ;
    ques3.answer = 2;

    // questino 4
    QustestionStruct ques4;
    ques4.question = "Who Created Linux?";
    ques4.options[0] = "Bill Gates";
    ques4.options[1] = "Linus Torvalds";
    ques4.options[2] = "Mark Zukerberg";
    ques4.options[3] = "Steve Jobs" ;
    ques4.answer = 1;

    // questino 5
    QustestionStruct ques5;
    ques5.question = "1 Byte = ?";
    ques5.options[0] = "8 Bit";
    ques5.options[1] = "16 Bit";
    ques5.options[2] = "32 Bit";
    ques5.options[3] = "64 Bit" ;
    ques5.answer = 0;


    questionPrint(ques1);
    questionPrint(ques2);
    questionPrint(ques3);
    questionPrint(ques4);
    questionPrint(ques5);
}
