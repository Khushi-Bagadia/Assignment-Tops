// 2. Number Guessing Game
// o Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.
// o Objective: Understand while loops and conditional logic


#include<iostream>
using namespace std;
int main()
{
    int guess_no;
    int target_no = 50;

    while(true)
    {
        cout << endl << "Enter Your Guess Number: ";
        cin >> guess_no;

        if (guess_no == target_no)
        {
            cout << "Congratulations.! Your Gassing Correct Number...!";
        }
        else if (target_no <= guess_no)
        {
            cout << "Too High";
        }
        else
        {
            cout << "Too Low";
        }
    }

    return 0;
}