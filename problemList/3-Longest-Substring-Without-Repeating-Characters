// Larry Wang's solution to Leetcode Problem 3
// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  int max, curr, str_len, map[128];
  int left, old_index;
  char c;

  char *s = argv[1];
  max = 0;   // Max substring's length
  curr = 0;  // Current substring's length
  left = 0;  // Keeps track of scope
  str_len = strlen(s);
  for(int i = 0; i < 128; i++) map[i] = -1;  // Set all values to -1 as default

  for(int i = 0; i < str_len; i++) {
    c = s[i]; 
    // If char not seen before, add it to map with it's index 
    if(map[c] == -1) {
      curr++;
      map[c] = i;
    }
    // Remove characters from map that aren't needed in new substring
    else {
      // Calculate new current length
      old_index = map[c];
      if(curr > max) max = curr;
      curr -= (old_index - left);

      // Delete unneeded chars from map and update new index of c
      for(int j = left; j <= old_index; j++) { map[s[j]] = -1; } 
      map[c] = i;
      left = old_index + 1;
    }
  }

  printf("%d\n" , (curr > max) ? curr : max);
}