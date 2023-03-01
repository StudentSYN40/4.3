#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n;
	int *mas = new int[n];
	printf("Максимальное количество элементов = 100\nВведите количество элементов : ");
	scanf("%i", &n);
	
	while (n>100)
	{
	printf("Максимальное количество элементов = 100\nВведите количество элементов : ");
	scanf("%i", &n);	
	}

	for(int i=0;i<n;i++)
	{
		printf("Введите %i число : ",i+1);
		scanf("%i", &mas[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%i ",mas[i]);
	}
	
	printf("\n");
	
	bool fl=true;
	
	while (fl)
	{
		fl=false;
		for(int i=0;i<n-1;i++)
		{
			if(mas[i]>mas[i+1])
			{
				int z=mas[i];
				mas[i]=mas[i+1];
				mas[i+1]=z;
				fl=true;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%i ",mas[i]);
	}
	
	delete[] mas;
}