/*
Title: Chapter 3 exercise 17
filename: Chapter3exercise17
Programmer: Dhrumi Mistry
Date:10/9/2024
Requiremnts:

*/

#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime> 

int main()
{
    //constant variables
    const int MIN_VALUE = 100,
        MAX_VALUE = 1000;

    // variables
    int num_1,
        num_2,
        correct_answer,
        student_answer;

    //get system times
    unsigned seed = time(0);

    //Sed the number generator.
    srand(seed);

    //program
    cout << endl;
    cout << "-------------------------\n\n";
    cout << "This program displays two random numbers\n";
    cout << "to be added.\n" << endl;

    //Generate random numbers 
    num_1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    num_2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    //calculate the correct answers
    correct_answer = num_1 + num_2;

    //Display the problem
    cout << num_1 << " + " << num_2 << " = ? \n" << endl;

    //ask the student
    cout << "Enter your answer: ";
    cin >> student_answer;

   // check if the student's answer is correct
    if (student_answer == correct_answer) {
        cout << "You are correct!\n";
    } else {
        cout << "Your answer is not correct. \n";
    }

    cout << "\n---------------------------\n";
    cout << endl;

    return 0;
   
}
