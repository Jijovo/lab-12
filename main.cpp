// Ezzat Mohamadein | ComSC 210 | Lab12
using namespace std;
#include <iostream>
#include <fstream>
#include <algorithm>
#include <array>

int main() {
    //creates an array that stores the model year of the available cars at a dealership
    const int size = 30;
    array<int, size> carYears;
    ifstream fin ("input.txt");

    //reads the model year of each car from the file and store it in the array.
    for (int i = 0; i < size; i++) {
        fin >> carYears[i];
    }
    fin.close();

    //return the number of cars in the dealership
    cout << "Total number of cars in the dealership: " << carYears.size() << endl;

    //asks user for a specific entry using an index
    cout << "Index Finder:" << endl << "Enter the index of the car you want to know the model year of (0-29):  (Enter -1 to exit)" << endl;
    int index;
    cin >> index;
    //returns the model year of the car at that index, -1 to cancel, and an error message if the index is out of bounds.
    if (index >= 0 && index < size) {
        cout << "The model year of the car at index " << index << " is: " << carYears[index] << endl;
    }
    else if (index == -1) { //cancels.
        cout << "Exiting Index Finder." << endl;
    }
    else { //error message if index is out of bounds.
        cout << "Invalid index." << endl;
    }
    //returns the average model year of all the cars in the dealership
    int sum = 0;
    for (int y : carYears) {
        sum += y;
    }
    int average = sum / size;
    cout << "The average model year of all the cars in the dealership is: " << average << endl;

    //returns the oldest and newest model year of the cars in the dealership
    cout << "The oldest model year of the cars in the dealership is: " << *min_element(carYears.begin(), carYears.end()) << endl;
    cout << "The newest model year of the cars in the dealership is: " << *max_element(carYears.begin(), carYears.end()) << endl;

    //prints current array, sorts it in ascending order, and prints the sorted array.
    cout << "Current array: "; //prints current array.
    for (int y : carYears) {
        cout << y << " ";
    }
    cout << endl << "Sorting array..." << endl;
    sort(carYears.begin(), carYears.end()); //sorts array in ascending order.
    cout << "Sorted array: "; //prints sorted array.
    for (int y : carYears) {
        cout << y << " ";
    }
    cout << endl;

    return 0;
}