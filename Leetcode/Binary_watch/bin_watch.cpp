//A binary watch has 4 LEDs on the top which represent the hours (0-11), and the 6 LEDs on the bottom represent the minutes (0-59).

//Each LED represents a zero or one, with the least significant bit on the right.
//
//Given a non-negative integer n which represents the number of LEDs that are currently on, return all possible times the watch could represent.

#include<iostream>
#include<vector>
#include<string>

int main(){
	int num; 
	std::cin>>num;

	std::vector<std::string> v = binWatch(num);
}
