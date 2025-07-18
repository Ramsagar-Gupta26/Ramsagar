#include <stdio.h>
void hanoi(int n, char s, char d, char a) {
   if(n == 1){
      printf("Move disk 1 from %c to %c\n", s, d);
   }
   else{
      hanoi(n-1, s, a, d);
      printf("Move disk %d from %c to %c\n", n, s, d);
      hanoi(n-1, a, d, s);
   }
}
int main() {
   int n = 3;
   char s = 'A';
   char d = 'B';
   char a = 'C';
   //calling hanoi() method
   hanoi(n, s, a, d);
   return 0;
}