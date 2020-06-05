#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
int main(int argc, char * argv[])
{
	int size, sum = 0;
	char ch;
	vector<char> list;
	scanf("%c", &ch);
	while(ch != '\n')
	{
		list.push_back(ch);
		scanf("%c", &ch);
	}
	size = list.size();
	for(int t = 0; t < size; t++)
		if(list[t] == 'P')
			for(int i = t + 1; i < size; i++)
				if(list[i] == 'A')
					for(int j = i + 1; j < size; j++)
						if(list[j] == 'T')
							sum++;
	printf("%d", sum); 
	
	return 0;
}
