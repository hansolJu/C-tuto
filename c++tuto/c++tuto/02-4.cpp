#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	char *str1 = "Hello World";
	char *str2 = "fuck World";
	char str3[30];

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	strcpy(str3, str1);
	strcpy(str2, str1);
	cout << str3 << endl;

	if (strcmp(str1, str2) == 0)
		cout << "문자열이 같다." << endl;
	else
		cout << "문자열이 다르다." << endl;
	
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
		printf("Random number #%d: %d\n", i, rand() % 100);
	return 0;

}