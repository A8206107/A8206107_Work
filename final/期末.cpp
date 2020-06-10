#include<iostream>   
#include<cstdlib>   //亂數
#include<ctime>     //時間
using namespace std;


class PSS  //猜拳物件
{
public:
	PSS(int s) //建構者
	{
		sign = s;
	}
	int setSign()  //設定出拳
	{
		srand(time(NULL));  //設定亂數種子
		sign = rand() % 3 + 1;
		return sign;
	}
	int getSign()  //取得出拳
	{
		return sign;
	}

private:
	int sign; //資料欄位
};
