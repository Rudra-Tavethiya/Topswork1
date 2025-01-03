//  Number Guessing Game
//  o Write a C++ program that asks the user to guess a number between 1 and 100.
//    The program should provide hints if the guess is too high or too low.
//    Use loops to allow the user multiple attempts.
//  o Objective : Understand while loops and conditional logic.



#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(0));
    int target = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout<<"\n Welcome to the Number Guessing Game!";
    cout<<"\n I have chosen a number between 1 and 100. Can you guess it ?";

    while(guess != target){
        cout<<"\n Enter your guess : ";
        cin>>guess;
        attempts++;

        if(guess < target){
            cout<<"\n Too low! Try again.";
        } 
        else if(guess > target){
            cout<<"\n Too high! Try again.";
        } 
        else{
            cout<<"\n Congratulations! You guessed the number in "<<attempts<<" attempts!";
        }
    }
}
