#include <iostream>
#include <vector>


using namespace std;



int main()
{
	//Add Elements to a Vector


	vector<int> num{ 4, 5, 8 };



	num.push_back(1);
	num.push_back(3);



	for (const int& i : num) {
		cout << i << " ";
	}
}