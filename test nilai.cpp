#include <stdio.h>
#include <math.h>

int main() {
	int grades [4];
	float average;
	
	for (int i = 0; i < 4; i++) {
		printf("masukkan nilai ke %d: \n", i+ 1);
		scanf("%d", &grades [i]);
		
		if (grades[i] < 50); {
			printf("ERROR salah satu nilai ini kurang dari 50");
			return(0);
		}
		
	}


	average = (grades [0] + grades[1] + grades [2] + grades [3]) / 4.0;
	
	if (average < 70)
		printf("kamu lulus\n");
	else
		printf("kamu tidak lulus\n");
		
	return(0);
}
