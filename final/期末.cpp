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

int main()
{
start:
	cout << "請輸入你要出的拳 1=剪刀 2=石頭 3=布" << endl;
	int sign;
	cin >> sign;
	PSS comp(0);   //電腦出的拳
	PSS player(sign);     //玩家出的拳
	int again;   //是否再玩一次
	comp.setSign();

	switch (player.getSign())
	{
		case 1:
			if (comp.getSign() == 1)
			{
				cout << "電腦出剪刀, 你也出剪刀!" << endl << "平手!";
			}
			else if (comp.getSign() == 2)
			{
				cout << "電腦出石頭, 你出剪刀!" << endl << "你贏了!";
			}
			else if (comp.getSign() == 3)
			{
				cout << "電腦出布, 你出剪刀!" << endl << "你輸了!";
			}
			break;
		case 2:
			if (comp.getSign() == 1)
			{
				cout << "電腦出剪刀, 你也出剪刀!" << endl << "平手!";
			}
			else if (comp.getSign() == 2)
			{
				cout << "電腦出石頭, 你出剪刀!" << endl << "你贏了!";
			}
			else if (comp.getSign() == 3)
			{
				cout << "電腦出布, 你出剪刀!" << endl << "你輸了!";
			}
			break;
		case 3:
			if (comp.getSign() == 1)
			{
				cout << "電腦出剪刀, 你也出剪刀!" << endl << "平手!";
			}
			else if (comp.getSign() == 2)
			{
				cout << "電腦出石頭, 你出剪刀!" << endl << "你贏了!";
			}
			else if (comp.getSign() == 3)
			{
				cout << "電腦出布, 你出剪刀!" << endl << "你輸了!";
			}
			break;
		default:
			cout << "輸入錯誤!";
	}
	
	cout << endl;
	cout << "再玩一次嗎? 1=是 2=否" << endl;
	cin >> again;
	if (again == 1)
	{
		goto start;
	}
	else
	{
		goto end;
	}
end:
	return 0;
}
