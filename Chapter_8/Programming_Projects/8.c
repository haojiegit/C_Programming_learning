#include <stdio.h>

int main(void) {
  int a[5][5] = {{0}}, student_number, quiz_number, row_sum, column_sum,
      low_score, high_score;
  double average_score_of_the_student;

  for (student_number = 1; student_number <= 5; student_number++) {
    printf("Enter student %d's grades: ", student_number);
    for (quiz_number = 0; quiz_number < 5; quiz_number++) {
      scanf("%d", &a[student_number - 1][quiz_number]);
    }
  }

  // calculate the total score, average score for each student.
  for (student_number = 0; student_number < 5; student_number++) {
    row_sum = 0;
    for (quiz_number = 0; quiz_number < 5; quiz_number++) {
      row_sum += a[student_number][quiz_number];
    }
    average_score_of_the_student = row_sum / 5.0;
    printf("Student %d's total score: %d, average score across the 5 quizes: "
           "%.2lf\n",
           student_number + 1, row_sum, average_score_of_the_student);
  }

  // calculate the average score for each quiz.
  for (quiz_number = 0; quiz_number < 5; quiz_number++) {
    column_sum = 0;
    for (student_number = 0; student_number < 5; student_number++) {
      column_sum += a[student_number][quiz_number];
    }
    printf("average score for quiz %d: %.2lf\n", quiz_number + 1,
           column_sum / 5.0);
  }

  // finding high score and low score for each quiz.
  for (quiz_number = 0; quiz_number < 5; quiz_number++) {
    low_score = 25;
    high_score = 0;

    for (student_number = 0; student_number < 5; student_number++) {
      if (a[student_number][quiz_number] >= high_score)
        high_score = a[student_number][quiz_number];
      if (a[student_number][quiz_number] <= low_score)
        low_score = a[student_number][quiz_number];
    }
    printf("high score for quiz %d: %d\n", quiz_number + 1, high_score);
    printf("Low score for quiz %d: %d\n", quiz_number + 1, low_score);
  }

  return 0;
}
