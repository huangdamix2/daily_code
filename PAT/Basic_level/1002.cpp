#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int sum;
string a[15] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
vector<string> ve;
int main(void)
{
    string s; cin >> s;
    for (int i = 0; i < s.size(); i ++ ) sum += (s[i] - '0');

    while (sum)
    {
        ve.push_back(a[sum%10]);
        sum/=10;
    }
    for (int i = ve.size()-1; i>=0; i -- )
    {
        cout << ve[i];
        if (i) cout << " ";
    }
    return 0;
}