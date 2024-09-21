#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int data[n] = {2, 15, 27, 38, 39, 42, 54, 74, 81, 105};
	int low, high;
	low = 0;
	high = n - 1;
	int pos;
	int cari = 81;

	while (cari > data[low] && cari <= data[high]) {
		pos = (static_cast<double>(cari - data[low]) / (data[high] - data[low])) * (high - low) + low;
		cout << pos << endl;
		if (cari > data[pos])
			low = pos + 1;
		else if (cari < data[pos])
			high = pos - 1;
		else
			low = pos;
	}

	if (cari == data[low])
		cout << "Ketemu" << endl;
	else
		cout << "Tidak ketemu" << endl;
	return 0;
}