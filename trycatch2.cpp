#include <iostream>
using namespace std;

int main() {
    float age, elage;

    try {
        cout << "Enter your age: ";
        cin >> age;

      
        if (age <= 18) {
            throw age; // Throwing age if input is invalid
        }
        else{
             cout << "You can vote!! As you are " << age << endl;
        }

    } catch (float invalidAge) {
        cout << "\nNot applicable for voting: " << invalidAge << endl;
    }

    return 0;
}
