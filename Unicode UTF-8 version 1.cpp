// Unicode UTF-8 version 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;
class converter {
private:
	int dec;
	string binary;
	string hex;
public:
	converter() :dec(0),binary(""), hex("") {};

	void input() {
		cout << "Enter decimal number: ";
		cin >> dec;
		cout << endl;
	}

	void decToBinary()
	{
		// array to store binary number 
		int binaryNum[32];

		// counter for binary array 
		int i = 0;
		while (dec > 0) {

			// storing remainder in binary array 
			binaryNum[i] = dec % 2;
			dec = dec / 2;
			i++;
		}
		// printing binary array in reverse order 
		for (int j = i - 1; j >= 0; j--)
		{
			binary += to_string(binaryNum[j]);
		}
		if (binary.length() % 4 != 0) {
			for (i = 0; i < binary.length() % 4; i++)
			{
				binary = "0" + binary;
			}
		}
		cout <<"Bin:"<< binary<<endl;	
	}
	char getHexCharacter(std::string str)
	{
		if (str.compare("1111") == 0) return 'F';
		else if (str.compare("1110") == 0) return 'E';
		else if (str.compare("1101") == 0) return 'D';
		else if (str.compare("1100") == 0) return 'C';
		else if (str.compare("1011") == 0) return 'B';
		else if (str.compare("1010") == 0) return 'A';
		else if (str.compare("1001") == 0) return '9';
		else if (str.compare("1000") == 0) return '8';
		else if (str.compare("0111") == 0) return '7';
		else if (str.compare("0110") == 0) return '6';
		else if (str.compare("0101") == 0) return '5';
		else if (str.compare("0100") == 0) return '4';
		else if (str.compare("0011") == 0) return '3';
		else if (str.compare("0010") == 0) return '2';
		else if (str.compare("0001") == 0) return '1';
		else if (str.compare("0000") == 0) return '0';
		else if (str.compare("111") == 0) return '7';
		else if (str.compare("110") == 0) return '6';
		else if (str.compare("101") == 0) return '5';
		else if (str.compare("100") == 0) return '4';
		else if (str.compare("011") == 0) return '3';
		else if (str.compare("010") == 0) return '2';
		else if (str.compare("001") == 0) return '1';
		else if (str.compare("000") == 0) return '0';
		else if (str.compare("11") == 0) return '3';
		else if (str.compare("10") == 0) return '2';
		else if (str.compare("01") == 0) return '1';
		else if (str.compare("00") == 0) return '0';
		else if (str.compare("1") == 0) return '1';
		else if (str.compare("0") == 0) return '0';
	}
	string getHex()
	{
		for (int i = 0; i < binary.length(); i = i + 4)
		{
			hex += getHexCharacter(binary.substr(i, 4));
		}
		return hex;
	}
	~converter() {};
};



int main()
{
	converter test;
	test.input();
	test.decToBinary();
	cout << "HEX: "<<test.getHex();

	//vector<string> bytes = {"00000000", "00000000", "00000000", "00000000"};
}
