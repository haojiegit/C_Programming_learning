#include <stdio.h>

int main(void)
{
	int h, m;
	//asking the user to enter a time (expressed in hours and minutes, using the 24-hour clock
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);

	//converting flight time and the time entered by user into min from mid-night
	
	int eight_am_flight = 480, nine_fourty_three_flight = 583, eleven_ninteen_am_flight = 679;
	int twelve_fourty_seven_pm_flight = 767, two_pm_flight = 840, three_fourty_five_pm_flight = 945;
	int seven_pm_flight = 1140, nine_fourty_five_pm_flight = 1305;
	int user_time;
	int time_difference_a, time_difference_b, time_difference_c, time_difference_d, time_difference_e, time_difference_f;
	int time_difference_g, time_difference_h;

	user_time = h * 60 + m;

	//compare user_time with each_flight_time and calculate difference in minutes
	
	if (eight_am_flight > user_time)
		time_difference_a = eight_am_flight - user_time;
	else
		time_difference_a = user_time - eight_am_flight;
	
	if (nine_fourty_three_flight > user_time)
		time_difference_b = nine_fourty_three_flight - user_time;
	else
		time_difference_b = user_time - nine_fourty_three_flight;

 	if (eleven_ninteen_am_flight > user_time)
		time_difference_c = eleven_ninteen_am_flight - user_time;
	else
		time_difference_c = user_time - eleven_ninteen_am_flight;
		
	if (twelve_fourty_seven_pm_flight > user_time)
		time_difference_d = twelve_fourty_seven_pm_flight - user_time;
	else
		time_difference_d = user_time - twelve_fourty_seven_pm_flight;
	
	if (two_pm_flight > user_time)
		time_difference_e = two_pm_flight - user_time;
	else
		time_difference_e = user_time - two_pm_flight;

	if (three_fourty_five_pm_flight > user_time)
		time_difference_f = three_fourty_five_pm_flight - user_time;
	else
		time_difference_f = user_time - three_fourty_five_pm_flight;

	if (seven_pm_flight > user_time)
		time_difference_g = seven_pm_flight - user_time;
	else
		time_difference_g = user_time - seven_pm_flight;

	if (nine_fourty_five_pm_flight > user_time)
		time_difference_h = nine_fourty_five_pm_flight - user_time;
	else	
		time_difference_h = user_time - nine_fourty_five_pm_flight;

	//compare the time difference and trying to find the smallest time difference
	
	int first_winner, second_winner, third_winner, fourth_winner, semi_final_winner_a, semi_final_winner_b, final_winner;

	if (time_difference_a < time_difference_b)
		first_winner = time_difference_a;
	else 
		first_winner = time_difference_b;

	if (time_difference_c < time_difference_d)
		second_winner = time_difference_c;
	else
		second_winner = time_difference_d;

	if (time_difference_e < time_difference_f)
		third_winner = time_difference_e;
	else
		third_winner = time_difference_f;

	if (time_difference_g < time_difference_h)
		fourth_winner = time_difference_g;
	else
		fourth_winner = time_difference_h;

	if (first_winner < second_winner)
		semi_final_winner_a = first_winner;
	else
		semi_final_winner_a = second_winner;

	if (third_winner < fourth_winner)
		semi_final_winner_b = third_winner;
	else
		semi_final_winner_b = fourth_winner;

	if (semi_final_winner_a < semi_final_winner_b)
		final_winner = semi_final_winner_a;
	else
		final_winner = semi_final_winner_b;

	//converting the time difference of final_winner back to original flight time and match arrival time
	
	int original_time_1, original_time_2;

	original_time_1 = user_time - final_winner;
	original_time_2 = user_time + final_winner;

	switch (original_time_1) {
		case 480: printf("Closest depature time is 8:00 a.m., arriving at 10:16 a.m.\n");
			  break;
		case 583: printf("Closest depature time is 9:43 a.m., arriving at 11:52 a.m.\n");
			  break;
		case 679: printf("Closest depature time is 11:19 a.m., arriving at 1:31 p.m.\n");
			  break;
		case 767: printf("Closest depature time is 12:47 p.m., arriving at 3:00 p.m.\n");
			  break;
		case 840: printf("Closest depature time is 2:00 p.m., arriving at 4:08 p.m.\n");
			  break;
		case 945: printf("Closest depature time is 3:45 p.m., arriving at 5:55 p.m.\n");
			  break;
		case 1140: printf("Closest depature time is 7:00 p.m., arriving at 9:20 p.m.\n");
			   break;
		case 1305: printf("Closest depature time is 9:45 p.m., arriving at 11:58 p.m.\n");
			   break;
	}
	
	switch (original_time_2) {
		case 480: printf("Closest depature time is 8:00 a.m., arriving at 10:16 a.m.\n");
			  break;
		case 583: printf("Closest depature time is 9:43 a.m., arriving at 11:52 a.m.\n");
			  break;
		case 679: printf("Closest depature time is 11:19 a.m., arriving at 1:31 p.m.\n");
			  break;
		case 767: printf("Closest depature time is 12:47 p.m., arriving at 3:00 p.m.\n");
			  break;
		case 840: printf("Closest depature time is 2:00 p.m., arriving at 4:08 p.m.\n");
			  break;
		case 945: printf("Closest depature time is 3:45 p.m., arriving at 5:55 p.m.\n");
			  break;
		case 1140: printf("Closest depature time is 7:00 p.m., arriving at 9:20 p.m.\n");
			   break;
		case 1305: printf("Closest depature time is 9:45 p.m., arriving at 11:58 p.m.\n");
			   break;
	}
	return 0;
}
