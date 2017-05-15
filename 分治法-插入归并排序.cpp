/**************************************************

	data: 2017-5-15
	author: zhangli
	intorduction: 
		分治法：将原问题分解为几个规模较小但类似于原问题的几个子问题，
				递归的求解子问题，
				然后再合并这些子问题的解来建立原问题的解

**************************************************/
#include <iostream>

int number[10] = {1,9,3,6,8,2,0,4,5,7}; //进行排序的目标数组
int num1[5]; // 子数组1
int num2[5];

using namespace std;
//unsigned char p = 1; //数组下标
//unsigned char q = 5;
//unsigned char r = 10;

unsigned char keynum1 = 0;
unsigned char keynum2 = 0;

int main(){
	//将number数组分成两个子数组
	for(int i=0; i<5; i++){
		num1[i] = number[i];
		num2[i] = number[i+5];
	}

	//对这个子数组做排序
	for(int i=0; i<4; i++){
		keynum1 = num1[i];
		if(keynum1 >= num1[i+1]){
			num1[i] = num1[i+1];
			num1[i+1] = keynum1;
		}
		keynum2 = num2[i];
		if(keynum2 >= num2[i+1]){
			num2[i] = num2[i+1];
			num2[i+1] = keynum2;
		}

	}
	//分治法对两个子数组进行排序
	int i = 0;
	int j = 0;
	for(int k=0; k<10; k++){
		if(num1[i]<num2[j]){
			number[k] = num1[i];
			i++;
		} else{
			number[k] = num2[j];
			j++;
		}
	}
	//打印数组
	for(int i=0; i<10; i++){
		cout << number[i] ;
	}
	getchar();
	return 0;
}
