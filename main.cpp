#include <iostream>
#include <iostream>
#include <vector>

using namespace std;

vector<string> split(const string& inString, const string& delimiter)
{
	vector<string> outVecStr;

	string s = inString;

	size_t pos = 0;
	string token;
	while ((pos = s.find(delimiter)) != string::npos)
	{
		token = s.substr(0, pos);

		outVecStr.push_back(token);

		s.erase(0, pos + delimiter.length());
	}
	outVecStr.push_back(s);

	return outVecStr;
}

int main()
{

	string s = "scott + tiger + mushroom+";
	string delimiter = " + ";

	auto vecs = split(s, delimiter);

	for (auto i = 0; i < vecs.size(); i++)
	{
		cout << vecs[i] << endl;
	}

	return 0;
}
