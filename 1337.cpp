#pragma warning(disable:4996);
#pragma warning(disable:6031);

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char s[110],f[110];
	int k;
	scanf("%d", &k);
	while (k--) {
		scanf("%s %s", s, f);
		int len1 = strlen(s);
		int len2 = strlen(f);
		int i, j;
		int flag;
		bool find = false;
		for (i = 0; i < len1 && !find; i++) {
			if (s[i] == f[0]) {
				flag = i;
				for (j = 0; j < len2; j++) {
					if (s[flag] == f[j])
						flag = (flag + 1) % len1;
					else
						break;
				}
				if (j == len2) {
					find = true;
					break;
				}
				flag = i;
				for (j = 0; j < len2; j++) {
					if (f[j] == s[flag])
						flag = (abs(len1 + flag - 1)) % len1;
					else
						break;
				}
				if (j == len2)
					find = true;
			}
		}
		if (find)
			printf("Yes\n");
		else
			printf("No\n");
	}
}
