#include<iostream>
using namespace std;
bool subarraysumzero(int n ,int a[]){
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=a[j];
		 if(sum==0){
		 	return true;
		 }
		}
	}
	return false;
}

int main(){
   int a[100],b;
	bool c;
	cout<<"Enter the size of array: "<<endl;
	cin>>b;
	cout<<"\nEnter the array:"<<endl;
	for(int i=0;i<b;i++){
		cin>>a[i];
		
	}
	cout<<"\n";
	c=subarraysumzero(b,a);
	if(c==1){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}

}
