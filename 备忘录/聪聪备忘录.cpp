#include <bits/stdc++.h>
#include <time.h>
using namespace std;

int main()
{
	FILE* p = fopen("d:\\$-information-$==.txt", "aw");
	fprintf (p,"\n");
	fclose(p);
	
	cout << "��ӭ����~�ϴ�~����¼" << endl;
	cout << "�鿴��ʷ��¼�ظ�/F���½�����¼�ظ�/W" << endl; 
	
	char n[2] = {0};
	cin >> n;
	
	if (n[1] == 'W')
	{
		
		//��ȡ��ǰ������ʱ���� 
		time_t t = time(NULL);
		char ch[64] = {0};
		strftime(ch, sizeof(ch) - 1, "%Y-%m-%d %H:%M:%S", localtime(&t)); 
		
		//�洢��ǰ������ʱ���� 
		FILE* pf1 = fopen("d:\\$-information-$==.txt", "aw");
		for (int i = 0;i < 64;i++)
		{
			fprintf (pf1,"%c",ch[i]);
		}
		fprintf (pf1,"\n");
		fclose(pf1);
		
		cout << "�����뱸��¼���ƣ���4611686018427387897���ַ�������س���ɣ���" << endl;
		//�������� 
		string name/*����*/ = "0";
		cin >> name;
		
		//�洢���� 
		FILE* pf2 = fopen("d:\\$-information-$==.txt", "aw");
		fprintf (pf2,"%s \n",name.data()); 
		fclose(pf2);	
		
		cout << "�����뱸��¼���ݣ�ÿ����4611686018427387897���ַ�������س�+$��ɣ���" << endl;
		//������Ϣ 
		string information/*��Ϣ*/ = "0";
		
		FILE* pf3 = fopen("d:\\$-information-$==.txt", "aw");
		cin >> information;
		while (information != "$")//����$�Ϳ����˳�
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
		cout << "\007" << "����" << endl;
	}
} 

