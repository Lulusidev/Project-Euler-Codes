#include <stdio.h>
#define VALUE 4000000

int fib(int f1,int f2){
  int n_terms=0,aux=0;
  int sum=0;	 
  
  //take n terms which for the array fib	 
	 do{
		aux = f1 + f2;
		f1 = f2;
		f2 = aux;
		if(f1%2==0){
		  sum+=f1;
		}
	 }while(f1<VALUE);

	 return sum;
}

int main(){
  //print sum; 
  printf("%i\n",fib(0,1));
 
  return 0;
}
