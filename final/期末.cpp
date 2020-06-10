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
	//設置計算場次的變數 
	int p = 0;
	int c = 0;
	int e = 0;
	int i = 0;
start:
	cout << "請輸入你要出的拳 1=剪刀 2=石頭 3=布" << endl;
	int sign;
	cin >> sign;  //輸入玩家所出的拳 
	PSS comp(0);   //電腦物件 
	PSS player(sign);     //玩家物件
	int again;   //是否再玩一次
	comp.setSign(); //電腦出的拳 

	switch (player.getSign())
	{
	case 1:
		if (comp.getSign() == 1)
		{
			cout << "電腦出剪刀, 你也出剪刀!" << endl << "平手!";
			e += 1; //平手場次+1 
		}
		else if (comp.getSign() == 2)
		{
			cout << "電腦出石頭, 你出剪刀!" << endl << "你贏了!";
			p += 1;//玩家贏的場次+1 
		}
		else if (comp.getSign() == 3)
		{
			cout << "電腦出布, 你出剪刀!" << endl << "你輸了!";
			c += 1;//電腦贏的場次+1 
		}
		break;
	case 2:
		if (comp.getSign() == 1)
		{
			cout << "電腦出剪刀, 你也出剪刀!" << endl << "平手!";
			e += 1;
		}
		else if (comp.getSign() == 2)
		{
			cout << "電腦出石頭, 你出剪刀!" << endl << "你贏了!";
			p += 1;
		}
		else if (comp.getSign() == 3)
		{
			cout << "電腦出布, 你出剪刀!" << endl << "你輸了!";
			c += 1;
		}
		break;
	case 3:
		if (comp.getSign() == 1)
		{
			cout << "電腦出剪刀, 你也出剪刀!" << endl << "平手!";
			e += 1;
		}
		else if (comp.getSign() == 2)
		{
			cout << "電腦出石頭, 你出剪刀!" << endl << "你贏了!";
			p += 1;
		}
		else if (comp.getSign() == 3)
		{
			cout << "電腦出布, 你出剪刀!" << endl << "你輸了!";
			c += 1;
		}
		break;
	default:
		cout << "輸入錯誤!";
		i += 1;//無效場次+1 
	}
	cout << endl;
	cout << "再玩一次嗎? 1=是 2=否" << endl;
	cin >> again;
	if(again == 1 || again == 2)
	{
		if (again == 1)
		{
			goto start; //回到 start
		}
		else if(again == 2)
		{
			goto end; //到 end
		}
	}
	else
	{
		cout << "無此選項!" << endl;
		cout << "再玩一次嗎? 1=是 2=否" << endl;
		cin >> again;
		if(again == 1 || again == 2)
		{
			if (again == 1)
			{
				goto start;
			}
			else if(again == 2)
			{
				goto end;
			}
		}
	}
	
end:
	cout << "你總共贏了:" << p << "場" << endl;
	cout << "電腦總共贏了:" << c << "場" << endl;
	cout << "總共平手:" << e << "場" << endl;
	cout << "無效總共:" << i << "場" << endl;
	return 0;
}
