#include <iostream>
#include <random>
#include <string>

using namespace std;

//This program generates a random 6 digit number and outputs it as a string.


const int MIN = 1;
const int MAX = 9;

random_device engine;

uniform_int_distribution<int> lotteryNumber(MIN, MAX);

int value1 = lotteryNumber(engine);
int value2 = lotteryNumber(engine);

int main() {

	cout << value1 << value2;

	return 0;
}