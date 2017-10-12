#include <iostream>
using namespace std;

int main() {
	int a[10],i,j,n,index=0;
	cout<<"\n Enter the numbers of elements.";
	cin>>n;
	cout<<"\n Enter the elements.";
	for(i=0;i<n;i++)
	   cin>>a[i];
	i=0;
	j=n-1;
	while(i!=j)
	{
		if (a[i]<a[j])
		{
			j--;
			index=i;
		}
		else
		{
			i++;
			index=j;
		}
	}
	cout<<"\n The smallest element is"<<a[index]<<endl;
	return 0;
}
