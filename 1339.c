#pragma warning(disable:4996);
#pragma warning(disable:6031);

#include<stdio.h>
#include<string.h>
#define N 1000009
int prime[78600];
int is_prime[N];
int count[N];
int cnt=0;
int main() {
    int k,i,j,a,b;
    memset(is_prime, 1, sizeof(is_prime));
    is_prime[0] = is_prime[1] = 0;
    for (i = 2; i <= N; i++) {
        if (is_prime[i])
            prime[++cnt] = i;
        for (j = 1; j <= cnt && i * prime[j] <= N; j++) {
            is_prime[i * prime[j]] = 0;
            if (i % prime[j] == 0)
                break;
        }
    }
    for (i = 3; i <= cnt; i++) {
        int temp = (prime[i] + prime[i - 1]) / 2;
        if (temp > N)
            break;
        if (!is_prime[temp])
            count[temp] = 1;
    }
    for (i = 1; i < N; i++)
        count[i] += count[i - 1];
    scanf("%d", &k);
    while (k--) {
        scanf("%d%d", &a, &b);
        printf("%d\n", count[b] - count[a-1]);  
	}
}
