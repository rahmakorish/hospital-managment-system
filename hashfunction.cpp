#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;
int hash_djb2(char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
int main()
{
	char *s="cisfun";
	int hash = hash_djb2(s);
	cout<< hash<<endl;	
}
