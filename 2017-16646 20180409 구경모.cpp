#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
	std::vector<int> vec;
	int x = 0;
	while (std::cin >> x && x != EOF) {
		vec.push_back(x);
	}
	for (int j = 0; j < vec.size(); j++) {
		for (int a = j; a < vec.size(); a++) {
			if (vec[j] < vec[a]) {
				int temp = vec[a];
				vec[a] = vec[j];
				vec[j] = temp;
			}
		}
	}
	std::cout << "\nordered array" << std::endl;
	for (auto k : vec) {
		std::cout << k << " ";
	}

}