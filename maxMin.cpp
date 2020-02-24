#include <iostream>
using namespace std;
void MaxMin(int a[]) {
	int min = arr[0];
	int max = arr[0];

	for (int j = 0; j < value; j++) {

		if (arr[j] > max) {
			max = arr[j];
		}

		if (arr[j] < min) {
			min = arr[j];
		}
	}

	cout << "The minimum value is : " << min << endl;
	cout << "The maximum value is : " << max << endl;
}
int main(){

	int value=0;
	
	cout<<" Enter the size of the array : "<<endl;
	
	cin>>value;
	cout<<" Enter numbers "<<endl;
	int element[value];
	for(int i = 0; i < value; i++){
		
		cout<<"Value "<< i <<" : ";
		cin>>element[i];
		cout<<endl;
	}
    	MaxMin(element[])
	

return 0;	
}

