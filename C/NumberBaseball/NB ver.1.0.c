#include stdio.h
#include stdlib.h
#include time.h

int main()
{
	printf(ntttttBulls and Cows!n);
	while (1)
	{
		printf(게임을 );
		system(pause);

		int i, j;
		int rn[4];
		int un[4];
		int s = 0;
		int b = 0;
		int temp;
		int a = 0;
		srand((unsigned)time(NULL));

		for (i = 0; i  4; i++)
		{
			temp = (rand() % 9);
			rn[i] = temp;
			for (j = 0; j  i; j++)
				if (temp == rn[j] && i != j)
					i--;
		}

		printf(nnCPU가 값을 정했습니다!(0~9까지)nn);

		printf(%d%d%d%d, rn[0], rn[1], rn[2], rn[3]); 

		for (;;)
		{
			printf(숫자를 입력하세요. (스페이스바를 이용하여 숫자 사이를 구분해주세요.)  );
			scanf(%d %d %d %d, &un[0], &un[1], &un[2], &un[3]);
			printf(n);

			for (i = 0; i  4; i++)
				for (j = 0; j  4; j++)
					if (un[i] == un[j] && i != j)
						a++;
			
			if (a  0)
			{
				printf(네자리 전부 다른 숫자를 입력하세요!na);
				a = 0;
				printf(n);
				continue;
			}
			
			for (i = 0; i  4; i++) 바꾼코드
				for (j = 0; j  4; j++)
					if (rn[i] == un[j])
						if (i == j)
							s++;
						else
							b++;

			if (s == 4)
			{
				printf(n축하합니다! 승리했습니다.na);
				system(pause);
				printf(n);
				break;
			}

			else
			{
				printf(t%d %d %d %dt, un[0], un[1], un[2], un[3]);
				printf(%dS %dB nn, s, b);
				s = 0;
				b = 0;
			}
		}
	}
}
