/**
* Muhammad Ibrahim
* 3.0 Conditionals Coding Worksheets
* 20 November 2020
* WS 1 (If) EXTRA: For number 2, tell the user how far off they are
* WS 2 (If-else) EXTRA: For number 3 and 6, use setprecision to print the money
* WS 3 (Logical Operators) EXTRA: Error check number 1
* WS 4 (More If-else) EXTRA: For number 1, let the user keep trying until they get it right
* WS 5 (Switch) EXTRA: For number 1, error check
**/

#include <iostream>
#include <iomanip>
#include <string>
#include<algorithm>
#include "Worksheets.h"

using namespace std;

int main()
{
    string ws1Name = "Working with If";
    string ws2Name = "If Else";
    string ws3Name = "Working with Logical operators ";
    string ws4Name = "More If Else";
    string ws5Name = "Switch";

    worksheet1(ws1Name); cout << endl;
    worksheet2(ws2Name); cout << endl;
    worksheet3(ws3Name); cout << endl;
    worksheet4(ws4Name); cout << endl;
    worksheet5(ws5Name); cout << endl;

    return 0;
}

void worksheet1(string wsName) {
    cout << "Worksheet: " << wsName << endl << endl;
    //Put all code for worksheet 1 here
    //#1
    int num;

    //ask for num
    cout << "Enter a number: ";
    cin >> num;

    //print statements for dif values of num
    if (num == 57)
        cout << "This is a Heinz number." << endl;
    else
        cout << "Just a plain, old number." << endl;

    //#2
    cout << "Enter a number between 5 and 10, inclusive: ";
    cin >> num;

    //print statement depending on the value of num, includes EXTRA
    if (num > 10)
        cout << "Too big!\nThat number is " << num - 10 << " too big." << endl;
    else if (num < 5)
        cout << "Too small!\nThat number is " << 5 - num << " too small." << endl;
    else if (num == 7)
        cout << "Lucky number." << endl;
    else
        cout << "Yep, a plain old number between 5 and 10." << endl;
}

void worksheet2(string wsName) {
    cout << "Worksheet: " << wsName << endl << endl;
    //Put all code for worksheet 2 here
    //#1
    int age;
    string name;

    //ask for user info
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    //print a statement based on the info
    if (age > 16)
        cout << "It's scary, " << name << "... you are old enough to drive!" << endl;
    else
        cout << "You need to wait " << 16 - age << " years to get a learner's permit to drive." << endl;

    //#2
    int num;
    cout << "Enter any positive integer: ";
    cin >> num;

    //Determine if the number is even or odd
    if (num % 2 == 0)
        cout << "The number is even." << endl;
    else
        cout << "The number is odd." << endl;

    //#3
    double words, cost;
    cout << "How many words will your telegram be? ";
    cin >> words;

    //calculate and print cost of telegram
    if (words <= 15)
        cost = 8.50;
    else
        cost = 8.50 + (0.25*(words - 15));
    cout << fixed;
    cout << "The cost of the telegram is $" << setprecision(2) << cost << setprecision(0) << endl;

    //#4
    //ask for age and print a statement based on it
    cout << "Enter your year of birth: ";
    cin >> age;

    if (age < 1970)
        cout << "You qualify for the Juke Box Rally" << endl;

    //ask for fav fruit and print a statement based on it
    cout << "Enter your favorite fruit: ";
    string fruit;
    cin >> fruit;

    if (fruit == "strawberry")
        cout << "Strawberry Fields Forever" << endl;
    else
        cout << "Bye, bye Miss American Pie" << endl;

    //#5
    int num1, num2;
    //ask for two numbers and then print in ascending order or print that they are equal
    cout << "Enter two numbers (Separate them by pressing space or ENTER): ";
    cin >> num1 >> num2;

    if (num1 == num2)
        cout << "Those numbers are the same." << endl;
    if (num1 < num2)
        cout << num1 << ", " << num2 << endl;
    else
        cout << num2 << ", " << num1 << endl;

    //#6
    cout << "Enter your age: ";
    cin >> age;

    //calculate and print the fee based on the age
    if (age < 5)
        cost = 0;
    else if (age >= 65)
        cost = 1.5;
    else
        cost = 2.5;

    cout << "The entry fee for the museum is $" << setprecision(2) << cost << setprecision(0) << "." << endl;
}

void worksheet3(string wsName) {
    cout << "Worksheet: " << wsName << endl << endl;
    //Put all code for worksheet 3 here

    //#1
    int dogs, cats;
    //Ask for dogs and cats
    cout << "How many dogs do you have? ";
    cin >> dogs;
    //error check for extra
    while (dogs < 0) {
        cout << "Please do not enter a negative integer." << endl;
        cout << "How many dogs do you have? ";
        cin >> dogs;
    }
    cout << "How many cats do you have? ";
    cin >> cats;
    //error check for extra
    while (cats < 0) {
        cout << "Please do not enter a negative integer." << endl;
        cout << "How many cats do you have? ";
        cin >> cats;
    }

    //print a statement based on the number of dogs and cats
    if (dogs > 0 && cats > 0)
        cout << "Do your cats and dogs get along?" << endl;
    else if (dogs > 0 && cats == 0)
        cout << "Guess you're a dog person!" << endl;
    else if (dogs == 0 && cats > 0)
        cout << "Guess you're a cat person!" << endl;

    //#2
    int num;
    cout << "Enter an integer between 50 and 100: ";
    cin >> num;

    if (num > 100 || num < 50)
        cout << "Sorry, not following directions will cost you dearly : -(" << endl;
    else
        cout << "You have won $" << num << " for inputting a number in the correct range!" << endl;
}

void worksheet4(string wsName) {
    cout << "Worksheet: " << wsName << endl << endl;
    //Put all code for worksheet 4 here

    //#1
    string pswd = "password", guess;
    cout << "Guess the password: ";
    cin >> guess;

    if (guess == pswd)
        cout << "You got it!" << endl;

    else {
        //it would be more efficient to remove the if and else and just have the while loop for the extra,
        //but since the worksheet is called "More if else", I added the if else to make it do the same thing
        while (guess != pswd) {
            cout << "That's incorrect." << endl;
            cout << "Guess the password: ";
            cin >> guess;
        }

        cout << "You got it!" << endl;
    }

    //#2
    string movie1, movie2;
    cout << "Enter the titles of two movies (Separate the titles using space or ENTER): ";
    cin >> movie1 >> movie2;
    //determine which has the longer movie title
    if (movie1.length() > movie2.length())
        cout << movie1 << " is a longer movie title than " << movie2 << endl;
    else
        cout << movie2 << " is a longer movie title than " << movie1 << endl;

    //#3
    string choice;
    cout << "This program may reformat your hard disk. Do you wish to continue? (y/n) ";
    cin >> choice;

    //print a message based on the choice
    if (choice == "y")
        cout << "Adios Data" << endl;
    else if (choice == "n")
        cout << "Wise Choice" << endl;
    else
        cout << "That was not a yes or no, so I guess I will erase all your data!" << endl;
}

void worksheet5(string wsName) {
    cout << "Worksheet: " << wsName << endl << endl;
    //Put all code for worksheet 5 here
    char grade;
    cout << "Enter your average grade (uppercase letter): ";
    cin >> grade;

    //error check for extra
    while (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F') {
        cout << "Input not valid." << endl;
        cout << "Enter your average grade (uppercase letter): ";
        cin >> grade;
    }

    //switch case responding to the grade
    switch (grade)
    {
    case 'A':
        cout << "Your work is outstanding!" << endl;
        break;
    case 'B':
        cout << "You are doing good work!" << endl;
        break;
    case 'C':
        cout << "Your work is satisfactory." << endl;
        break;
    case 'D':
        cout << "You need to work a little harder." << endl;
        break;
    case 'F':
        cout << "Please see me for extra help!" << endl;
        break;
    default:
        break;
    }

    //#2
    int num;

    cout << "Enter a number: ";
    cin >> num;

    //switch case responding to the number inputted
    switch (num) {
    case 1: case 3:
        cout << "Your number is a low odd number." << endl;
        break;
    case 2: case 4:
        cout << "Your number is a low even number." << endl;
        break;
    case 5:
        cout << "Your number is the middle odd number." << endl;
        break;
    case 6:
        cout << "Your number is the middle even number." << endl;
        break;
    case 7: case 9:
        cout << "Your number is a high odd number." << endl;
        break;
    case 8: case 10:
        cout << "Your number is a high even number." << endl;
        break;
    default:
        cout << "Invalid Number" << endl;
        break;
    }

}