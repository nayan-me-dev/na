#include<iostream>
#include<math.h>
using namespace std;
unsigned long long fib(long long n)
{
	n=n%60;
	unsigned long long  array[n];
	unsigned long long sum[n];
	array[0]=0;
	array[1]=1;
	sum[0]=0;
	sum[1]=1;
	for(int i=2;i<=n;i++)
	{
		array[i]=(((array[i-1])%10)+((array[i-2])%10))%10;
		sum[i]=(sum[i-1]+array[i])%10;
		
	}
	return sum[n]%10;
}
int main()
{
	unsigned long long n;
	cin>>n;
	cout<<fib(n);
}
