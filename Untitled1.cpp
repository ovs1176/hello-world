#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count_digit(int n){
//    string num = string(n); 
  
    return floor(log10(n) + 1); 
}

int main() {
	// your code goes here
	int N;
	cout<<"enter any no. : ";
	cin>>N;
	
    cout<<"your entered no. has "<<count_digit(N)<<" digits";

//	string t_f=null;
//	std::cin >> N;
//    for(int i=1 ;i<=count_digit(N) ; i++){
//     if(N%i==0){
//         t_f = "Yes";
//         N=int(N/10);
//     }
//     else{
//         t_f="No";
//         exit;
//     }
//     
//    }
//    std::cout << t_f << std::endl;
	
}
