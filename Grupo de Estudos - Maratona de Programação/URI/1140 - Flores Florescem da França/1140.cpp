#include<bits/stdc++.h>

using namespace std;

int main(){
	string pal;

	while(getline(cin, pal)){
		if(pal == "*")
			break;

		bool foi = true;

		int tam = pal.size() - 1;
		for(int i = 1; i < tam; i++)
			if(pal[i] == ' ')
				if(tolower(pal[i+1]) != tolower(pal[0]))
					foi = false;

		if(foi)
			printf("Y\n");
		else
			printf("N\n");
	}

	return 0;
}
