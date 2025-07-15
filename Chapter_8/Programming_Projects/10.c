#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int h, m, user_time;

	//asking the user to enter a time (expressed in hours and minutes, using the 24-hour clock
	//converting the time entered by the user into min from mid-night
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);
	user_time = h * 60 + m;

	//using arrays to store the time of flights
	int departure_time[8] = {480, 583, 679, 767, 840, 945, 1140, 1305},
	    arrival_time[8] = {626, 712, 811, 900, 968, 1075, 1280, 1438};
	
	//finding the closest departure_time 
	int smallest_time_difference = 1440, time_difference, cloest_depature_time, cloest_arrival_time;

	for (int i = 0; i < 8; i++) {
		time_difference = abs(departure_time[i] - user_time);
		if (time_difference <= smallest_time_difference)
			smallest_time_difference = time_difference;
	}

	for (int i = 0; i < 8; i++) {
		if (abs(departure_time[i] - user_time) ==  smallest_time_difference) {
			cloest_depature_time = departure_time[i];
			cloest_arrival_time = arrival_time[i];
			break;
		}
	}

	if (cloest_depature_time < 720 && cloest_arrival_time < 720) {
		printf("Closest depature time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", cloest_depature_time / 60, cloest_depature_time % 60, cloest_arrival_time / 60, cloest_arrival_time % 60);
	}
	else if (cloest_depature_time < 720 && cloest_arrival_time > 720){
		printf("Closest depature time is %d:%.2d a.m., arriving at %d:%.2d p.m.\n", cloest_depature_time / 60, cloest_depature_time % 60, cloest_arrival_time / 60 - 12, cloest_arrival_time % 60);
	}
	else if (cloest_depature_time > 720 && cloest_depature_time < 780){
		printf("Closest depature time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", cloest_depature_time / 60, cloest_depature_time % 60, cloest_arrival_time / 60 - 12, cloest_arrival_time % 60);
	}
	else
		printf("Closest depature time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", cloest_depature_time / 60 - 12, cloest_depature_time % 60, cloest_arrival_time / 60 - 12, cloest_arrival_time % 60);
}
