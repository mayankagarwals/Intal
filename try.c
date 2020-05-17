#include <stdio.h>
#include "intal.h"
typedef long long int ll;
#include <stdlib.h>
#include <unistd.h>

static char* convert_to_string(unsigned int val)
{
    int number_of_digits = 0;
    int n = val;
    while(val)
    {
        ++number_of_digits;
        val /= 10;
    }
    char* res = (char*)malloc((number_of_digits + 1)*sizeof(char));
    //+1 for null character
    int i = number_of_digits - 1;
    while(n)
    {
        res[i] = n%10 + '0';
        n/= 10;
        --i;
    }
    res[number_of_digits] = '\0';
    return res;
}



int main()
{
	ll t;
	scanf("%lli", &t);
	while(t--)
	{
		ll a,b;
		scanf("%lli", &a);
		scanf("%lli", &b);
		char* a_ = convert_to_string(a);
		char* b_ = convert_to_string(b);
		char* res = intal_pow(a_, b_);
		free(res);
		// intal_compare(a_,b_);
		free(a_);
		free(b_);
		sleep(0.1);
	}
}