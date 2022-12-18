#include<iostream>
#include<vector>
#include<iterator>
#include<string>
#include<stdexcept>
using namespace std;

int main()
{
	int val1, val2;
	while (cin >> val1 >> val2) {
		try
		{
			if (!val2)
				throw runtime_error("除数不能为0！");
			cout << val1 / val2 << '\n';
		}
		catch (const std::runtime_error& err)
		{
			cout << err.what() << endl;
			cout << "是否继续（Y or N）？" << endl;
			char ch;
			cin >> ch;
			if (ch != 'Y' && ch != 'y')
				break;
		}
	}
	return 0;
}
