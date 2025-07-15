#include <stdio.h>

int main(void)
{
	printf("Enter message to be encrypted: ");

	char entered_message[80];
	int charac_count = 0;
	for (int i = 0; i < 80; i ++) {
		charac_count++;
		entered_message[i] = getchar();
		if (entered_message[i] == '\n')
			break;
	}
	
	char message_to_be_encrypted[charac_count];
	for (int i = 0; i < charac_count; i ++) {
		message_to_be_encrypted[i] = entered_message[i];
	}
	
	int shift_amount;

	printf("Enter shift amount [1-25]: ");
	scanf("%d", &shift_amount);
	
	if (shift_amount > 25 || shift_amount < 1) {
		printf("Please enter the correct shift amount!");
		return 1;
	}

	for (int i = 0; i < charac_count; i ++) {
		if (message_to_be_encrypted[i] >= 'A' && message_to_be_encrypted[i] <= 'Z') {
			message_to_be_encrypted[i] = ((message_to_be_encrypted[i] - 'A') + shift_amount) % 26 + 'A';
		} else if ((int) message_to_be_encrypted[i] >= 'a' && (int) message_to_be_encrypted[i] <= 'z') {
			message_to_be_encrypted[i] = ((message_to_be_encrypted[i] - 'a') + shift_amount) % 26 + 'a';
		}
	}
	
	for (int i = 0; i < charac_count; i++) {
		putchar(message_to_be_encrypted[i]);
	}

	return 0;
}


