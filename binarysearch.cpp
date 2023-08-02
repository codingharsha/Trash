#include<bits/stdc++.h>
using namespace std;
int binarysearch(int array[], int l, int r, int x){
	while(l <= r){
		int m = l+(r-l)/2;
		if(array[m] == x)
		return m;
		if(array[m] < x)
		l = m+1;
		else
		r = m-1;
	}
	return -1;
}
int main(){
	int array[] = {2,3,5,7,9,20,30,50,60};
	int x = 50;
	int n = sizeof(array)/sizeof(array[0]);
	int result = binarysearch(array, 0, n-1, x);
	if(result==-1)
	cout<<"Element not found";
	else
	cout<<"Element is present at index:"<<result;
	return 0;
}
