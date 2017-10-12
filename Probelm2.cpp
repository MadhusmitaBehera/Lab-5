#include <iostream>
using namespace std;

int main() {
    int i,values[20];
    int small,big;
    small=big=values[20];
    
    for(i=0;i<20;i++)
    {
    	cout<<"\n Enter a value.";
    	cin>>values[i];
    }
    for(i=0;i<1;i++)
    {
    	if(values[i]>big)
    	{
    		big=values[i];
    	}
    }
    for(i=0;i<20;i++)
    {
    	if(values[i]<small)
    	{
    		small=values[i];
    	}
    }
    cout<<"\n The biggest number is="<<big<<endl;
    cout<<"\n The smallest number is="<<small<<endl;
	return 0;
}
