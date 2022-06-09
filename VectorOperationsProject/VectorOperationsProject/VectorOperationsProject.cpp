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
	/////////////////////////

	//Access Elements of a Vector

		cout << "Number at Index 0: " << num.at(0) << endl;
		cout << "Number at Index 2: " << num.at(2) << endl;
		cout << "Number at Index 4: " << num.at(4);

		return 0;

	/////////////////////////

}