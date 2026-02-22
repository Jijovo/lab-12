// Ezzat Mohamadein | ComSC 210 | Lab12
using namespace std;
#include <iostream>

int main() {
    //Create an array that stores the model year of the available cars at a dealership
    const int size = 30;
    int carYears[size];
    ifstream fin ("input.txt");
    //Read the model year of each car from the file and store it in the array
    for (int i = 0; i < 30; i++) {
        fin >> carYears[i];
    }
    fin.close();
    //return the number of cars in the dealership
    cout << "Total number of cars in the dealership: " << carYears.size() << endl;
    //asks user for a specific entry using an index
    cout >> "Enter the index of the car you want to know the model year of (0-29):  (Enter -1 to exit)" << endl;
    int index;
    cin >> index;
    //returns the model year of the car at that index
    if (index >= 0 && index < size) {
        cout << "The model year of the car at index " << index << " is: " << carYears[index] << endl;
    }
    else {
        cout << 
    }
    return 0;
}