/*

file name:Chapter3exercise17.cpp
GitHub URLhttps://github.com/Yaqoob7803/Chapter3Exercise17/edit/main/Chapter3%20Exercise17.cpp#L4C10
programmer:Yaqoob Nagi
Date:February 2025
Requirements:

Math Tutor
Write a program that can be used as a math tutor for a young student.
The program should display two random numbers to be added, such as
247+129
The program should then pause while the student works on the problem.
When the student is ready to check the answer, he or she can press a key and the program will display the correst solution:
247+129=376
*/
#include <iostream>
using namespace std;


int main()
{
    srand(time(0));

    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;

    cout << num1 << endl;
    cout << "+" << num2 << endl; 
    cout << "_____" << endl;

    int correct_answer = num1 + num2;

    int user_answer; 
    cout << "Enter your answer: " << endl;
    cin >> user_answer;
    
    if (user_answer == correct_answer){
        cout << "you are correct!" << endl;
    } else {
        cout << "your answer is not correct." << endl;
    }    

    return 0;
}
