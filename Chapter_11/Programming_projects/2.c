#include <stdio.h>
#include <stdlib.h>

#define DEPATURE_TIME 0
#define ARRIVAL_TIME 1

const int flight_time[8][2] =   {{480, 616},
                                 {583, 712},
				 {679, 811},
				 {767, 900},
				 {840, 968},
				 {945, 1075},
				 {1140, 1280},
				 {1305, 1438}};

void find_closest_flight(int desired_time, int *depature_time, int *arrival_time);

int main(void)
{	
	int h, m, desired_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);
	
	desired_time = h * 60 + m;

	int depature_time, arrival_time;

	find_closest_flight(desired_time, &depature_time, &arrival_time);
	
	//converting to 12 hour format
	h = depature_time / 60;
	m = depature_time % 60;

	if (h > 12) {
		h -= 12;
		printf("Closest depature time is %d:%.2d p.m.,", h, m);
	} else if (h == 12) {
		printf("Closest depature time is %d:%.2d p.m.,", h, m);
	} else {
		printf("Closest depature time is %d:%.2d a.m.,", h, m);
	}

	h = arrival_time / 60;
	m = arrival_time % 60;

	if (h > 12) {
		h -= 12;
		printf(" arriving at %d:%.2d p.m.\n", h, m);
	} else {
		printf(" arriving at %d:%.2d a.m.\n", h, m);
	} 
	
	return 0;
}

void find_closest_flight(int desired_time, int *depature_time, int *arrival_time)
{
	int time_difference[8], i;

	// put time difference in an array
	for (i = 0; i < 8; i ++) {
		time_difference[i] = abs(desired_time - flight_time[i][DEPATURE_TIME]);
	}
	
	//sorting in the order from smallest to largest time difference
	int pass;
	for (pass = 1; pass < 8; pass++) {
		for (i = 0; i  < 7; i++) {
			int temp;
			if (time_difference[i] > time_difference[i + 1]) {
				temp = time_difference[i];
				time_difference[i] = time_difference[i + 1];
				time_difference[i + 1] = temp;
			}
				
		}
	}
	
	//finding the closest depature time and arrival time for desired time
	for (i = 0; i < 8; i++) {
		if (desired_time + time_difference[0] == flight_time[i][DEPATURE_TIME] || desired_time - time_difference[0] == flight_time[i][DEPATURE_TIME]) {
			*depature_time = flight_time[i][DEPATURE_TIME];
			*arrival_time = flight_time[i][ARRIVAL_TIME];
			break;
		}
	}
}
