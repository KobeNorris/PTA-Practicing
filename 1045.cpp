#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
	int size, num, min, max = -1, size_v;
	scanf("%d", &size);
	int list[size];
	for(int t = 0; t < size; t++)	
		scanf("%d", &list[t]);
	vector<int> v1;
	for(int t = 0; t < size; t++)
	{
		if(list[t] > max)
		{
			max = list[t];
			v1.push_back(list[t]);
		}
	}
	min = max + 1;
	
	for(int t = size - 1; t >= 0; t--)
	{
		if(list[t] < min)
		{
			min = list[t];
			v1.push_back(list[t]);
		}
	}
	size_v = v1.size();
	vector<int> v2;
	sort(v1.begin(), v1.end());
	for(int t = 0; t < size_v; t++)
	{
		if(v1[t] == v1[t + 1])
		{
			t++;
			v2.push_back(v1[t]);
		}
	}
	size_v = v2.size();
	printf("%d\n", size_v);
	if(size_v > 0)
		printf("%d", v2[0]);
	for(int t = 1; t < size_v; t++)
		printf(" %d", v2[t]);
	printf("\n");
	
	return 0;
} 
