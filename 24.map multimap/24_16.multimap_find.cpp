#if 0
#include <map>
#include <iostream>
#include <string>

using namespace std;

typedef multimap <int, string> MMAP_INT_STRING;

int main(void)
{
	MMAP_INT_STRING mmapIntToString;


	mmapIntToString.insert(MMAP_INT_STRING::value_type(3, "Three"));
	mmapIntToString.insert(MMAP_INT_STRING::value_type(45, "Forty Five"));
	mmapIntToString.insert(MMAP_INT_STRING::value_type(-1, "Minus One"));
	mmapIntToString.insert(MMAP_INT_STRING::value_type(1000, "Thousand"));

	MMAP_INT_STRING::const_iterator iElementFound;

	iElementFound = mmapIntToString.find(1000);

	if (iElementFound != mmapIntToString.end())
	{
		size_t nNumPairsInMap = mmapIntToString.count(1000);
		cout << "The number of pairs in the multimap with 1000 as key: ";
		cout << nNumPairsInMap << endl;

		cout << "The values corresponding to the key 1000 are: " << endl;
		for (size_t nValuesCounter = 0
			; nValuesCounter < nNumPairsInMap
			; ++nValuesCounter)
		{
			cout << "Key: " << iElementFound->first;
			cout << ", Value [" << nValuesCounter << "] = ";
			cout << iElementFound->second << endl;

			++iElementFound;
		}
	}
	else
		cout << "Element not found in the multimap";

	return 0;
}
#endif
