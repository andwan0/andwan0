/*
Write an efficient function to find the first nonrepeated character in a
string. For instance, the first nonrepeated character in "total" is 'o' and the first
nonrepeated character in "teeter" is 'r'. Discuss the efficiency of your algorithm.

Possible answers:

https://github.com/josephmate/coding_interview_practice/blob/master/first_non_repeat_char/first_non_repeat_char.cpp
https://github.com/filipegoncalves/interview-questions/blob/master/arrays_strings/first_nonrepeating/solution.cpp

Learning maps:
http://www.dreamincode.net/forums/topic/57446-stl-maps/

 */
#include <iostream>
#include <map>

using namespace std;

char firstNonRepeated(string str)
{
	map<char, int> charHash;
	int i, length;
	char c;

	length = str.length();
	// Scan str, building hash table
	for (i = 0; i < length; i++) {
		c = str[i];
		if (charHash.count(c)) {
			// Increment count corresponding to c
			charHash.find(c)->second = charHash.find(c)->second + 1;
		}
		else {
			charHash.insert(map<char, int>::value_type(c, 1));
		}
	}
	// Search hash table in order of str
	for (i = 0; i < length; i++) {
		c = str[i];
		if (charHash[c] == 1)
			return c;
	}
	return NULL;
}

int main()
{
	string test = "teeter";
	char result = firstNonRepeated(test);
	cout << result;
	cin.ignore();
	return 0;
}
