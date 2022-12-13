#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int length, width; cin >> length >> width;

	if (width > length) swap(width, length);

	// length -= width;
	int cost = 0;
	while (true)
	{
		cout << "length: " << length << " width:" << width << endl;
		if (length % width == 0)
		{
			cost += 4 * (length * width) / (width * width) * width;
			length = 0;
			// length -= width;
		}
		else length -= width, cost += 4 * width;

		if (length == 0) break;

		if (width > length) swap(length, width);
	}

	cout << cost;
	
	return 0;
}
