#include <bits/stdc++.h>
#include <time.h>
using namespace std;

int main()
{
	FILE* p = fopen("d:\\$-information-$==.txt", "aw");
	fprintf (p,"\n");
	fclose(p);
	
	cout << "欢迎来到~聪聪~备忘录" << endl;
	cout << "查看历史记录回复/F，新建备忘录回复/W" << endl; 
	
	char n[2] = {0};
	cin >> n;
	
	if (n[1] == 'W')
	{
		
		//获取当前年月日时分秒 
		time_t t = time(NULL);
		char ch[64] = {0};
		strftime(ch, sizeof(ch) - 1, "%Y-%m-%d %H:%M:%S", localtime(&t)); 
		
		//存储当前年月日时分秒 
		FILE* pf1 = fopen("d:\\$-information-$==.txt", "aw");
		for (int i = 0;i < 64;i++)
		{
			fprintf (pf1,"%c",ch[i]);
		}
		fprintf (pf1,"\n");
		fclose(pf1);
		
		cout << "请输入备忘录名称（限4611686018427387897个字符，输入回车完成）：" << endl;
		//输入名称 
		string name/*名称*/ = "0";
		cin >> name;
		
		//存储名称 
		FILE* pf2 = fopen("d:\\$-information-$==.txt", "aw");
		fprintf (pf2,"%s \n",name.data()); 
		fclose(pf2);	
		
		cout << "请输入备忘录内容（每行限4611686018427387897个字符，输入回车+$完成）：" << endl;
		//输入信息 
		string information/*信息*/ = "0";
		
		FILE* pf3 = fopen("d:\\$-information-$==.txt", "aw");
		cin >> information;
		while (information != "$")//输入$就可以退出
		{  
			fprintf (pf3,"%s \n",information.data()); 
			cin >> information;
		}	
	}
	else if (n[1] == 'F')
	{
		char  buffer[1024]; 
		FILE* pf = fopen("d:\\$-information-$==.txt", "rt");
		
		while (!feof(pf))
		{ 
		    fscanf(pf, "%s\n", buffer);
			cout << buffer << endl;
		}
		fclose(pf);
	}
	else
	{
		cout << "\007" << "错误" << endl;
	}
} 

