#include "stdio.h"
#include "stdlib.h"
#include <string>
#include <iostream>

void swap( char &a, char &b){
	char tmp = a;
	a = b;
	b = tmp;
}

void reverse (std::string &str, int size){ 
	for (int i = 0; i < size / 2; ++i){
		swap(str[i], str[size - i - 1]);
	}
}


int main(){
	std::string str = "hello";
	std::cout << str << std::endl;
	reverse(str, 5);
	std::cout << str;
	return 0;
}