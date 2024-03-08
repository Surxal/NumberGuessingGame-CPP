#include <iostream>
#include <random>

using namespace std;

int main() {
    
    string cmnd;
    int balance = 0;

    bool play = true;

    cout << "Enter the range of numbers you want to guess from: " << endl;
    cout << "1-10(A)" << endl;
    cout << "1-100(B)" << endl;
    cout << "1-1000(C)" << endl;
    cout << "1-10000(D)" << endl;

    cout << "The higher the range the more you earn" << endl;
    cout << "If the guess is near to the real number you will still earn" << endl;

    cout << "type 'cashout' to cash out" << endl;

    while (play == true){
        cout << "Enter: ";
        cin >> cmnd;

        if (cmnd == "A" || "a") {
            cout << "Range 1-10 selected" << endl;

            random_device rd;
            mt19937 gen(rd()); 

            uniform_int_distribution<> distr(1, 10); 

            int randomA = distr(gen);

            int guess;
            cout << "Say your guess: ";
            cin >> guess;

            if (guess == randomA){
                cout << "Bingo!" << endl;
                cout << "10$ added" << endl;

                balance += 10;
            }
            else if ((guess - randomA) == 2 || -2) {
                cout << "Close enough" << endl;
                cout << "5$ added" << endl;

                balance += 5;
            }
            else {
                cout << "Wrong! No money added";
            }

        }
        else if (cmnd == "B" || "b") {
            cout << "Range 1-100 selected" << endl;

            random_device rd;
            mt19937 gen(rd()); 

            uniform_int_distribution<> distr(1, 100); 

            int randomB = distr(gen);

            int guess;
            cout << "Say your guess: ";
            cin >> guess;

            if (guess == randomB){
                cout << "Bingo!" << endl;
                cout << "100$ added" << endl;

                balance += 100;
            }
            else if ((guess - randomB) == 20 || -20) {
                cout << "Close enough" << endl;
                cout << "30$ added" << endl;

                balance += 30;
            }
            else {
                cout << "Wrong! No money added";
            }


        }
        else if (cmnd == "C" || "c") {
            cout << "Range 1-1000 selected" << endl;

            random_device rd;
            mt19937 gen(rd()); 

            uniform_int_distribution<> distr(1, 1000); 

            int randomC = distr(gen);

            int guess;
            cout << "Say your guess: ";
            cin >> guess;

            if (guess == randomC){
                cout << "Bingo!" << endl;
                cout << "1000$ added" << endl;

                balance += 10;
            }
            else if ((guess - randomC) == 200 || -200) {
                cout << "Close enough" << endl;
                cout << "500$ added" << endl;

                balance += 500;
            }
            else {
                cout << "Wrong! No money added";
            }

        }
        else if (cmnd == "D" || "d") {
            cout << "Range 1-10000 selected" << endl;

            random_device rd;
            mt19937 gen(rd()); 

            uniform_int_distribution<> distr(1, 10000); 

            int randomD = distr(gen);

            int guess;
            cout << "Say your guess: ";
            cin >> guess;

            if (guess == randomD){
                cout << "Bingo!" << endl;
                cout << "10000$ added" << endl;

                balance += 10000;
            }
            else if ((guess - randomD) == 2000 || -2000) {
                cout << "Close enough" << endl;
                cout << "5000$ added" << endl;

                balance += 5000;
            }
            else {
                cout << "Wrong! No money added";
            }

        }
        else if (cmnd == "cashout") {
            cout << "Your total balance is" << balance << endl;
            cout << "Cashing out";
        }
    }
    return 0;
}