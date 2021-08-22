#if 0
#include <iostream>
#include <cstring>

using namespace std;
int main(void)
{
	char delims[] = "., ?;!";
	char str[] = "I like apples, pears, and grapes. Do you?";
	char *tok;
	tok = strtok(str, delims);
	while (tok) {
		cout << tok << endl;
		tok = strtok(NULL, delims);
	}

	return 0;
}
#endif


#if 0
#include <iostream>
#include <cstring>

using namespace std;
int main(void)
{
	char kvpairs[] = "count=10, name=\"Joe, jr.\", max=100, min=0.01";
	char kvdelims[] = " =,";
	char *tok;
	tok = strtok(kvpairs, kvdelims);

	while (tok) {
		cout << "Key: " << tok << " ";
		if (!strcmp("name", tok)) {
			tok = strtok(NULL, "\"");
		}
		else {
			tok = strtok(NULL, kvdelims);
		}
		cout << "Value: " << tok << endl;

		tok = strtok(NULL, kvdelims);
	}

	return 0;
}
#endif