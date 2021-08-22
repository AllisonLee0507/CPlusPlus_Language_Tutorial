#if 0
#include <iostream>
#include <cwctype>
using namespace std;

int main()
{
  wctype_t x;

  x = wctype("space");

  if(iswctype(L' ', x))
    cout << "Is a space.\n";

  return 0;
}
#endif


#if 0
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <cwctype>

using namespace std;


inline bool caseInsCharCompareW(wchar_t a, wchar_t b) {
   return(towupper(a) == towupper(b));
}

bool caseInsCompare(const wstring& s1, const wstring& s2) {
   return((s1.size( ) == s2.size( )) && equal(s1.begin( ), s1.end( ), s2.begin( ), caseInsCharCompareW));
}

int main(void)
{
	wstring ws1 = L"The END";
	wstring ws2 = L"the end";
	
	if (caseInsCompare(ws1, ws2))
		cout << "Equal!\n";
	
	return 0;

}
#endif

