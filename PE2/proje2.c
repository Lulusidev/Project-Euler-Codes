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
		n_terms++;
	 }while(f1<VALUE);
	 //declarion and initilazion the array real which to use
	 int f[count];
	 f[0]=0;
	 f[1]=1;
	 //make the array
	 for (int i=2;i<=count+1;i++){
		f[i]=f[i-1]+f[i-2];
	 }
	 //sum the even-valued
	 for(int i =0;i<count;i++){
		if(f[i]%2==0){
		  sum+=f[i];
		}
	 }
	 return sum;
}

int main(){
  //print sum; 
  printf("%i\n",fib(0,1));
 
  return 0;
}
