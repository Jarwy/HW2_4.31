#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int r, s, d  ;
	

	for (r = 1; r <=9; r++)			//�C
	{
		if (r <= 5)					//�e���C
		{
			for (s = 1; s <= (5 - r); s++)		//�e���檺�Ů�:�Ů��=(5-�C��)
			{
				printf(" ");
			}

			for (d = 1;d <=2*r-1; d++)			//�e���檺�I:�I���ƥ�=(2*�C��-1)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (s = 1; s <= (r-5); s++)		//��|�檺�Ů�:�Ů��=(�C��-5)
			{
				printf(" ");
			}

			for (d = 1; d <=(9-2*(r-5)); d++)	//��|�檺�I:�I���ƥ�=(9-2*(�C��))
			{
				printf("*");
			}
			printf("\n");
		}
	}

	printf("\n");
	system("pause");
	return 0;
}