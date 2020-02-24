#include <iostream>
using namespace std;


int LinearSearch(int arr[],int start,int value);
int main(){
	
  int array[]={23,12,54,63,66,86,14,90};
 int answer=LinearSearch(array,0,90); 
 
 cout<<answer<<endl;
	
	return 0;
}



int LinearSearch(int arr[],int start,int value){
	
   int lenght = 8;
   if(start== lenght){
   	return -1;
   }
	 if(arr[start]== value){
		return start;
	}
	else {
		LinearSearch(arr,start + 1,value);
	}


	
}
