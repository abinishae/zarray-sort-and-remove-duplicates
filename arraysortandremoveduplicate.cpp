#include <iostream>
using namespace std;
//sort position
int main(){
	int n,a[10],b[10],d[10],c[10];
	cin>> n;
//	int c[n];
	int l=n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	d[i] =  a[i];
	for(int i=0;i<n;i++)
	{   //int h = a[i];
		for(int j=i;j<n;j++){
			if(a[i]>a[j])
		{
				int t=a[i];
		         a[i] = a[j];
		         a[j] = t;
		}
	//	a[i] = h;
}
}
 for(int i=0; i<n ;i++)
 cout<<" "<<a[i];
cout<<" ";
//sort(a,a+n); we haven't used this inbuilt sort
for(int i=1; i<n ;i++)
 if(a[i]==a[i-1]){
 	 a[i-1] = -1;
	  l--;
 }
 
   
    for(int i=0,j=0; i<n; i++)
       if(a[i]!=-1)
      {b[j] = a[i];
      j++;
	   } 
	   cout<<"\n sorted: ";
	   for(int i=0; i<l ;i++)
	     cout<<" "<<b[i];
	     
	      for(int i=0; i<n ;i++)
	        for(int j=0; j<l ;j++)
	           if(d[i] == b[j])
	            c[i] = j;
		  cout<<endl <<"position: ";
	       for(int i=0; i<n ;i++)
	        cout<<" "<<c[i];
	     return 0;
}
