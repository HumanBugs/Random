#include <iostream>
#include <ctime>
#include <cstdlib>
#include <set>

using namespace std;

int main() {
    int max, t;
    cout << "Enter the max of random number: ";
    cin >> max;
    cout << "Enter the times: ";
    cin >> t;
    set<int> random_numbers;
    while (random_numbers.size() < t) {
        srand(static_cast<unsigned int>(time(0))); // generate seed
        int ran = (rand() % max) + 1;
        random_numbers.insert(ran);
    }
    cout << "Random Numbers: ";
    for (int num : random_numbers) {
        cout << num << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}