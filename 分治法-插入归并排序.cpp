/**************************************************

	data: 2017-5-15
	author: zhangli
	intorduction: 
		���η�����ԭ����ֽ�Ϊ������ģ��С��������ԭ����ļ��������⣬
				�ݹ����������⣬
				Ȼ���ٺϲ���Щ������Ľ�������ԭ����Ľ�

**************************************************/
#include <iostream>

int number[10] = {1,9,3,6,8,2,0,4,5,7}; //���������Ŀ������
int num1[5]; // ������1
int num2[5];

using namespace std;
//unsigned char p = 1; //�����±�
//unsigned char q = 5;
//unsigned char r = 10;

unsigned char keynum1 = 0;
unsigned char keynum2 = 0;

int main(){
	//��number����ֳ�����������
	for(int i=0; i<5; i++){
		num1[i] = number[i];
		num2[i] = number[i+5];
	}

	//�����������������
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
	//���η��������������������
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
	//��ӡ����
	for(int i=0; i<10; i++){
		cout << number[i] ;
	}
	getchar();
	return 0;
}
