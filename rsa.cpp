#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int d_bul(int e,int qN){
	int d=2,k,i;
	while(d<qN)
	{
		k=0;
		if((d*e)%qN==1)
		{
			for(i=2;i<=d;i++)
		{
			if(d%i==0 && qN%i==0)
			{
				k=1;
			}
		}
		if(k==0)
		return d;
		}
		d++;
	}	
}


int main(int argc, char *argv[]) 
{
	unsigned int p,q,e,x=5,d,sifreli;
	srand(time(NULL));
	p=asal_uret(2,10);
	q=asal_uret(5,11);
	int N = p*q;
	int qN=(p-1)*(q-1);
	e=e_bul(qN);
	d=d_bul(e,qN);
	sifreli=(int)pow(x,e)%N;
	printf("p: %d q=%d qN= %d  e= %d  d=%d",p,q,qN,e,d);
	
	printf("\n sifreli = %d", ((int)pow(x,e))%N);
	printf("\n cozulmus = %d", ((int)pow(sifreli,d))%N);
	
	
	return 0;
}

int e_bul(int qN)
{
	int e,i,k;
	while(1)
	{
		k=0;
		e=(rand()%(qN-2))+2;
		for(i=2;i<e;i++)
		{
			if(e%i==0 && qN%i==0)
			{
				k=1;
			}
		}
		if(k==0)
		return e;
	}
}



int asal_uret(int min,int max)
{
	int sayi;
	while(1)
	{
		sayi = (rand()%(max-min))+(min+1);
		if(asal_mi(sayi))
		return sayi;
	}
}


int asal_mi(int sayi)
{
	int kontrol=0,i;
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			return 0;
		}
	}
	return 1;
	
	
	
	
}
