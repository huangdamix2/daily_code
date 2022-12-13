#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	string conceptOutput, realOutput;
	// int cntError[128];
	string cntError;
	cin >> conceptOutput >> realOutput;
	for (int i = 0; i < conceptOutput.size(); i ++ )
		if (realOutput.find(conceptOutput[i]) == string::npos && cntError.find(toupper(conceptOutput[i])) == string::npos ) 
			cntError += toupper(conceptOutput[i]);
	cout << cntError;
	return 0;
}