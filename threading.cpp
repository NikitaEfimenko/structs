#include <iostream>
#include <vector>
#include <thread>
#include <algorithm>
#include <unistd.h>

int main(){
	const int tCnt = 10;
	std::vector<std::thread> pool(tCnt);

	for (int i = 0; i < tCnt ; ++i){
		pool[i] = std::thread([=](){
			printf(" is %d thread \n", i); 
		});
	}
	std::for_each(pool.begin(), pool.end(), [](auto &t){ t.join();});
	std::cout << "is main"<<std::endl;

}