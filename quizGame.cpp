#include <iostream>
#include <string>
#include <vector>

using namespace std;

// struct to group data
struct Question {
    string text;  // the actual question
    string options;  // multiple choice options
    char correctOption;  // correct option
};

int main() {
    vector<Question> quiz = {
        {"What is the capital of France?", "A) Paris, B) London, C) Rome", 'A'},
        {"Which planet is known as the Red Planet?", "A) Venus, B) Mars, C) Jupiter", 'B'},
        {"What is 5 + 7?", "A) 10, B) 11, C) 12", 'C'},
        {"Who wrote 'Romeo and Juliet'?", "A) Dickens, B) Shakespeare, C) Hemingway", 'B'},
        {"What is the chemical symbol for Water?", "A) H2O, B) CO2, C) NaCl", 'A'}
    };

    int score = 0;
    char userChoice;

    cout << "--- Welcome to the C++ Quiz ---" << endl;
    cout << "Answer by typing A, B, or C.\n" << endl;

    // Loop μέσα από όλες τις ερωτήσεις
    for (int i = 0; i < quiz.size(); i++) {
        cout << "Question " << i + 1 << ": " << quiz[i].text << endl;
        cout << quiz[i].options << endl;
        cout << "Your answer: ";
        
        cin >> userChoice;
        
        // convert to upper just in case 
        userChoice = toupper(userChoice);

        if (userChoice == quiz[i].correctOption) {
            cout << "Correct!\n" << endl;
            score++;
        } else {
            cout << "Wrong. The correct answer was " << quiz[i].correctOption << ".\n" << endl;
        }
    }

    
    cout << "Quiz Finished!" << endl;
    cout << "Your total score: " << score << " out of " << quiz.size() << endl;

    if (score == quiz.size()) {
        cout << "Excellent! You are a pro!" << endl;
    }

    return 0;
}