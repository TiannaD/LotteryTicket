#include <iostream>
#include <random>
#include <string>
#include <iomanip>

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

	string1.append(string2);
	string1.append(string3);
	string1.append(string4);
	string1.append(string5);
	string1.append(string6);

	cout << "Lottery Ticket Number: " << string1 << endl;

	return 0;
}