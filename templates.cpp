#include <iostream>

template <int n>
class factorial{
public:
	const static int value = n * factorial<n - 1>::value;
};

template <>
class factorial<0>{
public:
	const static int value = 1;
};


int main(){ 
	std::cout << factorial<4>::value <<std::endl;
}