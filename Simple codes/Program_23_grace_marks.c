#include <stdio.h>

int main(void) {
  // Declare variables
  int class, failed_subjects, grace_marks = 0;

  // Get input from the user
  printf("Enter the class obtained by the student (1 for first class, 2 for second class, 3 for third class):  ");
  scanf("%d", &class);
  printf("Enter the number of subjects the student failed in: ");
  scanf("%d", &failed_subjects);

  // Calculate the grace marks based on the class and number of failed subjects
  switch (class) {
    case 1:
      if (failed_subjects <= 3) {
        grace_marks = 5 * failed_subjects;
      }
      break;
    case 2:
      if (failed_subjects <= 2) {
        grace_marks = 4 * failed_subjects;
      }
      break;
    case 3:
      if (failed_subjects == 1) {
        grace_marks = 5;
      }
      break;
  }

  // Print the result
  printf("The student's grace marks are: %d\n", grace_marks);

  return 0;
}
