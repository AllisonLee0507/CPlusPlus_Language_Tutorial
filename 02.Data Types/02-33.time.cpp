#if 0
#include <iostream>
using std::cout;

#include <ctime>
using std::time_t;
using std::time;
using std::localtime;
using std::asctime;

int main(void)
{
	time_t currentTime;
	
	time( &currentTime );
	
	cout << asctime( localtime( &currentTime ) );
	return 0;
}
#endif


#if 0
#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
	char str[64];
	
	// Get the current system time.
	time_t t = time(NULL);
	
	// Show standard time and date string.
	strftime(str, 64, "%c", localtime(&t));
	cout << "Standard format: " << str << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
	char str[64];
	
	// Get the current system time.
	time_t t = time(NULL);
	
	// Show a custom time and date string.
	strftime(str, 64, "%A, %B %d %Y %I:%M %p", localtime(&t));
	cout << "Custom format: " << str << endl;
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <locale>
#include <cstring>
#include <ctime>

using namespace std;

int main(void)
{
	// Obtain the current system time.
	time_t t = time(NULL);
	tm *cur_time = localtime(&t);
	
	// Create US and German locales.
	locale usloc("English_US");
	locale gloc("German_Germany");
	
	// %c specifies the standard time and date pattern.
	char *std_pat = "%c";
	char *std_pat_end = std_pat + strlen(std_pat);
	
	return 0;
}
#endif


#if 0

Command           Replaced By
%a                Abbreviated weekday name
%A                Full weekday name
%b                Abbreviated month name
%B                Full month name
%c                Standard date and time string
%d                Day of month as a decimal (1-31)
%H                Hour (0-23)
%I                Hour (1-12)
%j                Day of year as a decimal (1-366)
%m                Month as decimal (1-12)
%M                Minute as decimal (0-59)
%p                Locale's equivalent of AM or PM
%S                Second as decimal (0-61)
%U                Week of year, Sunday being first day (0-53)
%w                Weekday as a decimal (0-6, Sunday being 0)
%W                Week of year, Monday being first day (0-53)
%x                Standard date string
%X                Standard time string
%y                Year in decimal without century (0-99)
%Y                Year including century as decimal
%Z                Time zone name
%%                The percent sign

#endif



#if 0
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{
	// Current date/time based on current system
	time_t now = time(0);
	
	// Convert now to tm struct for UTC
	tm* gmtm = gmtime(&now);
	if (gmtm != NULL) {
	 cout << "The UTC date and time is: " << asctime(gmtm) << endl;
	}
	else {
	cerr << "Failed to get the UTC date and time" << endl;
	return EXIT_FAILURE;
	}
	
	return 0;
}
#endif



#if 0
#include <iostream>
#include <locale>
#include <cstring>
#include <ctime>

using namespace std;

int main(void)
{

	// Obtain the current system time.
	time_t t = time(NULL);
	tm *cur_time = localtime(&t);
	
	// Create US and German locales.
	locale usloc("English_US");
	locale gloc("German_Germany");
	
	// Set the locale to US and get the time_put facet for US.
	cout.imbue(usloc);
	const time_put<char> &us_time = use_facet<time_put<char> >(cout.getloc());
	
	return 0;
}
#endif


#if 0
#include <iostream>
#include <locale>
#include <cstring>
#include <ctime>

using namespace std;

int main()
{
	// Obtain the current system time.
	time_t t = time(NULL);
	tm *cur_time = localtime(&t);
	
	// Create US and German locales.
	locale usloc("English_US");
	locale gloc("German_Germany");
	
	// custom pattern displays hours and minutes followed by the date.
	char *custom_pat = "%A %B %d, %Y %H:%M";
	char *custom_pat_end = custom_pat + strlen(custom_pat);
	
	return 0;
}
#endif

