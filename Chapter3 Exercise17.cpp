/*

file name:Chapter3exercise17.cpp
GitHub URL
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

    cout << "Press any key to see the answer" << endl;
    cin.get();

    int answer = num1 + num2;
    cout << num1 << endl;
    cout << "+" << num2 << endl;
    cout << "_____" << endl;
    cout << answer << endl;




    return 0;
}