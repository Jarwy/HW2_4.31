#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int r, s, d  ;
	

	for (r = 1; r <=9; r++)			//
	{
		if (r <= 5)					//玡き
		{
			for (s = 1; s <= (5 - r); s++)		//玡き︽:计=(5-计)
			{
				printf(" ");
			}

			for (d = 1;d <=2*r-1; d++)			//玡き︽翴:翴计ヘ=(2*计-1)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (s = 1; s <= (r-5); s++)		//︽:计=(计-5)
			{
				printf(" ");
			}

			for (d = 1; d <=(9-2*(r-5)); d++)	//︽翴:翴计ヘ=(9-2*(计))
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