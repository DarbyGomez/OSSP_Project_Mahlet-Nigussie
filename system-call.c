#include <stdio.h>
#include <sys/time.h>

int main() {
     struct timeval tv;
     struct timezone tz;

    // Get the current time
 if (gettimeofday(&tv, &tz) == -1) {
      perror("gettimeofday");
return 1;
}

    // Print the current time
      printf("Current time: \n %ld seconds and \n %ld microseconds \n", tv.tv_sec, tv.tv_usec);

 return 0;
}
