//A program that finds all primes up to (user-defined int)
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
vector <int> primes;
vector <int> primes1;
void fill(int x)
{

	for (int z = 0; z <= x; ++z){
		primes.push_back(z);
	}
	primes[1] = 0;
}
void redund_kill(vector <int> x)
{
	for (int a : x){
		
		if (x[a] == 0){}
		else{
			for (int b = 0;b <= 10; ++b) {}
			{
				primes1.push_back(a);
			}
		}
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Enter until which number you would like find primes up to: ";
	int val = 0;
	cin >> val;
	fill(val*val);
	for (int multiple = 2; multiple <= val; ++multiple){
		for (int multiplier = 2; multiple* multiplier <= val;++multiplier){
			primes[multiple* multiplier] = 0;
		}
	}
	primes.push_back(val);
	redund_kill(primes);
	for (int a : primes1){
			cout << a << "\t";
	}
	system("pause");
	return 0;
}

