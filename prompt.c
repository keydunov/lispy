#include <stdio.h>

#include <editline/readline.h>

/* Declare a static buffer for user input of maximum size 2048 */
static char input[2048];

int main(int argc, char** argv) {

  /* Print Version and Exit Information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  /* In a never ending loop */
  while (1) {

    /* Output our prompt and get input */
    char* input = readline("lispy> ");

    /* add input to histroy */
    add_history(input);

    /* Echo input back to user */
    printf("No you're a %s\n", input);

    /* free retrieved input */
    free(input);
  }

  return 0;
}
