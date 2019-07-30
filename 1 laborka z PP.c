#include <iostream>

using namespace std;

int main() {

	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	for (int k = 0; k < c; k++) {
		for (int i = 0; i < a; i++)
		{
			for (int l = 0; l < b; l++) {
				for (int j = 0; j < a; j++)
				{
					if (i == 0 || i == a - 1 || j == 0 || j == a - 1 || i == j || j + i == a - 1) cout << "*";
					else
					{
						if (i < j && j + i < a - 1) cout << "N";
						if (i < j && j + i > a - 1) cout << "E";
						if (i > j && j + i < a - 1) cout << "W";
						if (i > j && j + i > a - 1) cout << "S";
					}
				}
				cout << " ";
			}
			cout << endl;
	
		}
		cout << endl;
	}
	system("pause");
	return 0;
}