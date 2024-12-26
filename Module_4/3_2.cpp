//  Number Guessing Game
//  o Write a C++ program that asks the user to guess a number between 1 and 100.
//    The program should provide hints if the guess is too high or too low.
//    Use loops to allow the user multiple attempts.
//  o Objective : Understand while loops and conditional logic.

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        } 
        else if (userGuess > secretNumber) {
            cout << "Your guess is too high. Try again!" << endl;
        } 
        else {
            cout << "Your guess is too low. Try again!" << endl;
        }
    }

    cout << "Thank you for playing the Number Guessing Game!" << endl;
}