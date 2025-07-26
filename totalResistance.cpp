#include <iostream>

using std::cout; using std::cin;

int main() {

    // Asks for and stores # of resistors. Rejects >20 resistors and non-numbers
    int resistorCount;
    cout << "How many resistors are in your parallel circuit? ";
    while(!(cin >> resistorCount) || resistorCount > 20) {
        cout << "You can only enter up to 20 resistors. Try again: ";
        cin.clear();                // Reset input errors
        cin.ignore(10000, '\n');    // Remove bad input
    }

    // puts resistors in an array
    int resistorArr[20];
    for(int i = 0; i < resistorCount; i++) {
        cout << "Resistor " << i + 1 << " resistance: ";
        cin >> resistorArr[i];
    } 

    // makes an array of the reciprocals of elements in resistorArr
    double recipArr[20];
    for(int i = 0; i < resistorCount; i++) {
        recipArr[i] = 1.0 / resistorArr[i];
    }

    // finds the sum of all elements in recipArr
    double sum = 0.0;
    for(int i = 0; i < resistorCount; i++) {
        sum += recipArr[i];
    }

    // Theatrics
    cout << "Total resistance: ";

    // one over sum
    cout << 1/sum << "\n";

    return 0;
}