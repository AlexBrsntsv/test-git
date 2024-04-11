#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main(){
	std::vector v{1, 2, 3, 4, 5, 6};
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, ", "));
	std::cout << std::endl;
	std::cout << "hello world" << std::endl;
	return 0;	
}