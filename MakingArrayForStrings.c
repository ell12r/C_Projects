#include <stdio.h>
#include <stdlib.h>

int main() {
   int num_strings;
   printf("Enter the number of strings: ");
   scanf("%d", &num_strings);
   char **string_array = malloc(num_strings * sizeof(char *));
   // Allocate memory for the array of strings

   for (int i = 0; i < num_strings; i++) {
      printf("Enter string %d: ", i+1);
      char *str = malloc(100 * sizeof(char));
      // Allocate memory for each string
      scanf("%s", str);
      string_array[i] = str;
   }

   // Print out the strings in the array
   printf("The strings you entered are:\n");
   for (int i = 0; i < num_strings; i++) {
      printf("%s\n", string_array[i]);
   }

   // Free the memory allocated for each string and the array
   for (int i = 0; i < num_strings; i++) {
      free(string_array[i]);
   }
   free(string_array);

   return 0;
}
