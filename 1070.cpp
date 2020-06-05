#include <cstdio>
#include <algorithm>

using namespace std;
int main(int argc, char * argv[])
{
	int size, n;
	double sum;
	scanf("%d", &size);
	double list[size];
	for(int t = 0; t < size; t++)
		scanf("%lf", &list[t]);
	sort(list, list + size);
	sum = list[0];
	for(int t = 1; t < size; t++)
	{
		sum = sum + list[t];
		sum = sum / 2.0;
	}
	n = (int)sum;
	printf("%d", n);
	
	return 0;
} 
