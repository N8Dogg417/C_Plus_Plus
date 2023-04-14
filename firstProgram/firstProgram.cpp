
#include <iostream>
#include <ctime>;
#include <cstdlib>;
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "My name is Nadilina" << endl;
    std::cout << "Today is a good day....";
    std::cout << "testing, testing.\n";
    std::cout << "press any key to continue \n";
    system("pause>0");
    int number = 1;
    const double pi = 3.14;
    int x = 10 + 3;
    std::cout << "x = " << x;
    std::cout << "\n";
    std::cout << "pi = " << pi;
    std::cout << "\n";
    cout << "Type a number...\n";
    cin >> number;
    std::cout << "\nYour number = " << number;
    double commission = (number < 10'000) ? .05 : .1;
    std::cout << "\nCommission = " << commission;
    std::cout << "\n press any key to continue \n";
    system("pause>0");
    std::cout << "Enter a temperature in Fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    std::cout << "\nConveted to Celsius: ";
    std::cout << celsius;
    float interestRate = 3.67f;
    auto fileSize = 90000L; // use "L" to force compiler to treat this as a LONG type
    char letter = 'a';
    auto isValid = true;

    int newNumber = 0b1111111;
    std::cout << "\nbinary Number: ";
    cout << newNumber;

    //long elapsedSeconds = time(nullptr);

    srand(time(nullptr));
    int numberR = rand() % 1000; 
    std::cout << "\nRandom Number: ";
    cout << numberR;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
