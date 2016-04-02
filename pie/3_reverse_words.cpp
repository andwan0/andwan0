/*
Write a function that reverses the order of the words in a string. For
example, your function should transform the string "Do or do not, there is no
try." to "try. no is there n, do or Do". Assume that all words are space delim-
ited and treat punctuation the same as letters.

Possible answers:

Learning :


 */
//#include <iostream>
//#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

bool reverseWords(char str[])
{
	char *buffer;
	int slen, tokenReadPos, wordReadPos, wordEnd, writePos = 0;

	slen = strlen(str);
	/* Position of the last character is length - 1 */
	tokenReadPos = slen - 1;
	buffer = (char *)malloc(slen + 1);
	//buffer = new char[slen + 1];

	if (!buffer)
		return false; /* reverseWords failed */
	while (tokenReadPos >= 0)
	{
		if (str[tokenReadPos] == ' ') /* Non-word characters */
		{

			/* Write character */
			buffer[writePos++] = str[tokenReadPos--];

		} else /* Word characters */
		{
			/* Store position of end of word */
			wordEnd = tokenReadPos;
			/* Scan to next non-word character */
			while (tokenReadPos >= 0 && str[tokenReadPos] != ' ') {
				tokenReadPos--;
			}
			/* tokenReadPos went past the start of the word */
			wordReadPos = tokenReadPos + 1;
			/* Copy the characters of the word */
			while (wordReadPos <= wordEnd) {
				buffer[writePos++] = str[wordReadPos++];
			}
		}
	}
	/* null terminate buffer and copy over str */
	buffer[writePos] = '\0';
	//strlcpy(str, buffer, slen + 1);
	memcpy(str, buffer, slen + 1);
	//strncpy(str, buffer, slen + 1);
	free(buffer);
	//delete buffer;

	return true; /* ReverseWords successful */
}

int main()
{
	char str[128] = "Do or do not, there is no try.";
	reverseWords(str);
	//cout << str;
	//cin.ignore();
	printf("%s", str);
	getchar();
	return 0;
}
