#include <iostream>
#include <string>
using namespace std;

struct Question {
    string Question;
    string OptionA;
    string OptionB;
    string OptionC;
    string OptionD;
    char CorrectAnswer;
};

class QuizApp {
private:

    Question Quiz[4] = {

        {"Who is the largest animal on Earth?",
         "Elephant", "Whale", "Shark", "Ostrich", 'B'},

        {"Which one is the largest planet in our solar system?",
         "Earth", "Sun", "Jupiter", "Saturn", 'C'},

        {"Which is the largest ocean in the world?",
         "Atlantic Ocean", "Pacific Ocean", "Indian Ocean", "Arctic Ocean", 'B'},

        {"How many continents are there in the world?",
         "2", "5", "12", "7", 'D'}
    };

    int correct = 0;

public:

    void displayQuestions() {

        for (int i = 0; i < 4; i++) {

            cout << "\n-----------------------------\n";
            cout << "Question " << i + 1 << endl;
            cout << "-----------------------------\n";

            cout << Quiz[i].Question << endl;

            cout << "A. " << Quiz[i].OptionA << endl;
            cout << "B. " << Quiz[i].OptionB << endl;
            cout << "C. " << Quiz[i].OptionC << endl;
            cout << "D. " << Quiz[i].OptionD << endl;

            char answer;

            cout << "\nEnter your answer (A/B/C/D): ";
            cin >> answer;

            if (answer == Quiz[i].CorrectAnswer) {
                cout << "Correct answer!" << endl;
                correct++;
            }
            else {
                cout << "Wrong answer!" << endl;
            }
        }
    }

    void displayCorrectAnswer() {

        cout << "\n=============================\n";
        cout << "Quiz Result\n";
        cout << "=============================\n";

        cout << "Correct answers: " << correct << endl;
        cout << "Wrong answers: " << 4 - correct << endl;
    }

    void Percentage() {

        int percentage = (correct * 100) / 4;

        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 90) {
            cout << "Excellent!" << endl;
        }
        else if (percentage >= 80) {
            cout << "Good!" << endl;
        }
        else if (percentage >= 70) {
            cout << "Work hard!" << endl;
        }
        else {
            cout << "Try again!" << endl;
        }
    }
};

int main() {

    QuizApp Q1;

    Q1.displayQuestions();

    Q1.displayCorrectAnswer();

    Q1.Percentage();

    return 0;
}
