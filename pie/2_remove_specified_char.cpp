/*
Write an efficient function that deletes characters from an ASCII
string. Use the prototype

    string removeChars( string str, string remove );

where any character existing in remove must be deleted from str. Fro example,
given a str of "Battle of the Vowels: Hawaii vs. Grozny" and a remove of
"aeiou", the function should transform str to "Bttl f th Vwls: Hw vs. Grzny".
Justify any design decisions you make, and dicuss the efficiency of your solution.

Possible answers:

Learning conversions:
http://stackoverflow.com/questions/13294067/how-to-convert-string-to-char-array-in-c
http://stackoverflow.com/questions/8960087/how-to-convert-a-char-array-to-a-string

To do:
how to free up memory? smart pointers?
maybe should try using string builder?
freenode tells me to use std::array instead of []
and use std::vector instead of new[]

 */
#include <iostream>
#include <cstring>

using namespace std;

/*
 2 sub-tasks:

 a) For each character in str, you must determine whether it should be deleted.
 b) Then, if appropriate, you must delete the character.

 - need to track a source position for the read location in the original string
 - and a destination position for the write position in the temporary buffer

 1. Set all the elements in your lookup array to false.
 2. Iterate through each character in remove, setting the corresponding value in the lookup
    array to true.
 3. Iterate through str with a source and destination index, copying each character only if its
    corresponding value in the lookup array is false.

 */
string removeChars(string str, string remove)
{
	int slen, rlen;
	slen = str.length();
	char *s = new char[slen+1];
	strcpy(s, str.c_str());
	rlen = remove.length();
	char *r = new char[rlen+1];
	strcpy(r, remove.c_str());
	int src, dst = 0;

	// flags automatically initialized to false, size of 128 assumes ASCII
	bool flags[128]; //C++ doesn't initialise to false....
	//bool *flags = new bool[128];
	std:fill(flags, flags + 128, false);

	/*for (src = 0; src < 128; ++src)
	{
		flags[src] = false;
		cout << src << "(" << flags[src] << ") ";
	}
	cout << endl;*/

	// Set flags for characters to be removed
	for (src = 0; src < rlen; ++src)
	{
		flags[r[src]] = true;
	}


	// Now loop through all the characters,
	// copying only if they aren't flagged
	for (src = 0; src < slen; ++src)
	{
		if (!flags[s[src]])
		{
			s[dst++] = s[src];
		}
	}
	s[dst] = '\0';
	string result(s);
	delete[] s;
	delete[] r;
	return result;
}

int main()
{
	string result = removeChars("Battle of the Vowels: Hawaii vs. Grozny", "aeiou");
	cout << result.c_str();
	cin.ignore();
	return 0;
}
