#include <iostream>
using namespace std;

int main() {
	int arr;
	int i,n,sum=0;
	cout<<"\n Enter size of an array.";
	cin>>n;
	cout<<"\n Enter elements in the array,n";
	cin>>arr[n];
	for(i=0;i<n;i++)
	{
	   cin>>arr[i];
	   sum+=arr[i];
	}
	cout<<"\n Sum of all elements of the array is"<<sum<<endl;
	
	

	return 0;
}
