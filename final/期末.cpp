#include<iostream>   
#include<cstdlib>   //�ü�
#include<ctime>     //�ɶ�
using namespace std;


class PSS  //�q������
{
public:
	PSS(int s) //�غc��
	{
		sign = s;
	}
	int setSign()  //�]�w�X��
	{
		srand(time(NULL));  //�]�w�üƺؤl
		sign = rand() % 3 + 1;
		return sign;
	}
	int getSign()  //���o�X��
	{
		return sign;
	}

private:
	int sign; //������
};
