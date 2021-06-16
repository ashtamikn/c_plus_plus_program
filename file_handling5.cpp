#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream my_file;
	my_file.open("/home/ashi/ASHI/myprgrms/txt/practice.txt", ios::in);
	if (!my_file) {
		cout << "No such file";
	}
	else {
		char word[30]; 

		while (1) {
			my_file >>word;
			if (my_file.eof())
				break;

			cout<<(word)<<" ";//cout<<ch
		}

	}
	my_file.close();
	return 0;
}
