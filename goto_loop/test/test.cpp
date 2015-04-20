// test.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int i=0, j=0, k=0, l=0;

	top:
	if(i <= 9) if(j <= 9) if(k <= 9) if(l < 9) 
	{             printf("%d%d%d%d   \n",i,j,k,++l); goto top;}
	else if (k != 9)
	{l=0;         printf("%d%d%d%d \n\n",i,j,++k,l); goto top;}
	else if (j != 9)
	{l=0;k=0;     printf("%d%d%d%d \n\n",i,++j,k,l); goto top;}
	else if (i != 9)
	{l=0;k=0;j=0; printf("%d%d%d%d \n\n",++i,j,k,l); goto top;}

	return 0;
}
