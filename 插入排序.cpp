/************************************************

	Date: 2017-5-10
	Auther: zhangli

************************************************/
#include <iostream>

using namespace std;
int num[6] = {6,4,2,7,5,2};
void ascendOrder(); //按升序排列
void descendOrder(); //按降序排列

int main(){
	descendOrder();
	for(int k=0; k<6; k++){
		cout << num[k] << endl;
	}
	getchar();
	return 0;
}

void ascendOrder(){
	int key;
	int i,j;
	for(i=1; i<6; i++){
		key = num[i];
		j = i-1;
		while((j>=0) && (num[j]>key)){
			num[j+1] = num[j];
			j = j-1;
		}
		num[j+1] = key;
	}
}

void descendOrder(){
	int key;
	int i,j;
	for(i=1; i<6; i++){
		key = num[i];
		j = i-1;
		while ((j>=0) && (num[j]<key))
		{
			num[j+1] = num[j];
			j = j-1;
		}
		num[j+1] = key;
	}
}