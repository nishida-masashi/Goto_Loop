// test.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int i=0, j=0, k=0, l=0;

	li: if(i <= 9)
	lj: if(j <= 9)
	lk: if(k <= 9)   
	ll: if(l < 9) 
	{             printf("%d%d%d%d   \n",i,j,k,++l); goto ll;}
	else if (k != 9)
	{l=0;         printf("%d%d%d%d \n\n",i,j,++k,l); goto lk;}
	else if (j != 9)
	{l=0;k=0;     printf("%d%d%d%d   \n",i,++j,k,l); goto ll;}
	else if (i != 9)
	{l=0;k=0;j=0; printf("%d%d%d%d   \n",++i,j,k,l); goto ll;}

	return 0;
}
