#include <iostream>
using namespace std;
//7.	Write a program to print the sum of first n prime numbers. Accept the limit ‘n’ from the use

//function that finds a prime numbers in number given by the user.

bool prime(int n){
 bool condition;
  if (n!= 1 && n!= 0){
      for (int i=2; i<=n; i++){
        if ( n%i == 0){
          if (n == i){
            condition = true;           
          }
          else {
            condition = false;
            return condition;
          }    
      }    
    }

  } else condition = false;
  
 return condition; 
}

int main(){
  int n;
  int sum=0;
  
  cout<<"Enter the number to search for: ";
  cin>>n;
  cout<<"\n";
  cout<<"The prime numbers are: "<<endl;
  for (int i=1; i<=n; i++){
    if (prime(i)){ 
      cout<<i<<endl;
      sum = sum + i;  
    }         
}   
cout<<"The sum of prime numbers are : "<<sum<<endl;  
return 0;
  
}