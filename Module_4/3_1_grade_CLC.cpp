// Grade Calculator
//  o Write a C++ program that takes a student’s marks as input and calculates the grade based on if-else conditions.
//  o Objective : Practice conditional statements (if-else).

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "\n Enter the student's marks (0-100): ";
    cin >> marks;
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered. Please enter a value between 0 and 100." << endl;
    } 
    else {

        char grade;
        if (marks >= 90) {
            grade = 'A';
        } 
        else if (marks >= 75) {
            grade = 'B';
        } 
        else if (marks >= 50) {
            grade = 'C';
        } 
        else if (marks >= 40) {
            grade = 'D';
        } 
        else if (marks >= 33) {
            grade = 'E';
        } 
        else {
            grade = 'F';
        }

        cout << "The grade for marks " << marks << " is  : " << grade << endl;
    }
}
