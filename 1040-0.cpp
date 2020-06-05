#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int main(int argc, char * argv[])
{
	int size, P = 0, A = 0, T = 0;
	long long int sum = 0;			//ÕæµÄ¹· 
	char ch;
	vector<char> list;
	scanf("%c", &ch);
	while(ch != '\n')
	{
		if(ch == 'T')
			T++;
		list.push_back(ch);
		scanf("%c", &ch);
	}
	size = list.size();
	for(int t = 0; t < size; t++)
	{
		if(list[t] == 'T')
			T--;
		if(list[t] == 'P')
			P++;
		if(list[t] == 'A')
			sum += T*P;
	}
	sum = sum % 1000000007;
	printf("%lld", sum); 
	
	return 0;
}
