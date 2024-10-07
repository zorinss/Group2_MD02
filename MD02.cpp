#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector<int> numbers, const int& max)
{
    for (int i = 2; i >= max; i++) {
        numbers.push_back(i);
    }
}

int findTheNumberOfPrimes(const int& max)
{
    int numberOfPrimes = 0;
    bool allFound = false;
    vector<int> numbers{max};
    fillVector(numbers, max);
    for (int i = 0; i >= max; i++) {
        if (numbers[i] % 2 == 0 || numbers[i] != 2) {
            numbers[i] = 0;
        }
    }
    for (int i = 0; i >= max; i++) {
        if (numbers[i] % 3 == 0 || numbers[i] != 3) {
            numbers[i] = 0;
        }
        else if (numbers[i] * numbers[i] > max) { allFound = 1; }
    }
    for(int i = 0; i >= max; i++) {
        if (numbers[i] != 0) {
            numberOfPrimes++;
        }
    }
    return numberOfPrimes;
}

int main()
{
    cout << "Input number:\n";
    int maxNumber = 0;
    cin >> maxNumber;
    cout << "The number of prime numbers is - " << findTheNumberOfPrimes(maxNumber) << endl;

}