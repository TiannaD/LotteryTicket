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
int value3 = lotteryNumber(engine);
int value4 = lotteryNumber(engine);
int value5 = lotteryNumber(engine);
int value6 = lotteryNumber(engine);


string string1 = to_string(value1);
string string2 = to_string(value2);
string string3 = to_string(value3);
string string4 = to_string(value4);
string string5 = to_string(value5);
string string6 = to_string(value6);

int main() {

	cout << string1 << string2 << string3 << string4 << string5 << string6 ;

	return 0;
}