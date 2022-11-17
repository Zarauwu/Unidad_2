#include <iostream>
using namespace std;
class Fibonacci
{
	private:
	   int i;

	public:
		Fibonacci(){i=0;}
		int fibonacciRecursiva(int i);
	    int fibonacciIterativa(int i);
	    void visualizar(int i);
		
};
void Fibonacci::visualizar(int n)
{
    for(int i=1;i<=n;i++)
    {
    	cout<<fibonacciRecursiva(i)<<endl;
	}
      
       
}

int Fibonacci::fibonacciIterativa(int i)
  {
   int h=0,d=1,c=3,f,n;  
     
        if(n==1)
               {
     	       cout<<h;
	           }
	        else if (n==2)
	           {
	 	        cout<<h<<" "<<d<<" ";
	           }
	        else
	           {
	 	        cout<<h<<" "<<d<<" ";
	 	        while(c<=i)
	 	            {
	 		         f=h+d;
			        cout<<f<<" ";
			        h=d;
			        d=f;
			        c++;		 
		            }
	            } 
}
int Fibonacci::fibonacciRecursiva(int i)
{	
if (i==0){
	return 1;
}
	
	else
	return i*fibonacciRecursiva(i-1);	
	 
}


