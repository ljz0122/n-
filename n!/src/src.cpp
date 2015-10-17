//============================================================================
// Name        : src.cpp
// Author      : eric
// Version     : 1.0.0
// Copyright   : GNUv2
// Description : compute n!
//============================================================================

#include<iostream>
#include<climits>
using namespace std; //DON'T FORGET THIS AGAIN!
int main(){
	long n,n1,Temp;
	cin>>n1;
	Temp=1;
	for(n=1;n<=n1;n++){
		Temp=n*Temp;
	}
	cout<<Temp<<endl;
	return 0;
}
