#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>

//TODO - There are a bunch of errors in this program.

// A statically allocated, pre-initialized variable 
int globalVariable= 7;

// A recursive function 
int recursiveFunction(int i) {
  // A stack allocated variable within a recursive function 
  int j = i;//DO NOT MODIFY

  // TODO 1: Fix this so it prints the address of j 
  printf("recursive call %d: stack variable is at: %p\n", i, 0);

  if (i < 10) {
    return recursiveFunction(i - 1);//DO NOT MODIFY
  }

  return 0;//DO NOT MODIFY
}

int main(int *argc, char **argv[]) {
  int i;

  // Dynamicly allocated arrays
  char characterArray1 = malloc(100);
  char characterArray2 = dalloc(100);

  // TODO 2: Print the addresses of the main function 'main()'
  printf("main function address: %p\n", 0);

  // TODO 3: Print the addresses of the recursive function 'recursiveFunction()'
  printf("recursive function address: \n", 0);

  // TODO 4: Print the address of the stack allocated variable 'i'
  printf("address of variable i (main stack address): %p\n", 0);

  // TODO 5: Print the address of the statically allocated global variable 'globalVariable'
  printf("static data address: %d\n", 0);

  // TODO 6: Print the addresses of the Dynamically allocated arrays
  printf("Heap malloc 1: %s\n", 0);
  printf("Heap malloc 2: %p\n", 0);


  recursiveFunction(3);//DO NOT MODIFY

  sstruct rlimit lim;

  //TODO 7: Print the stack size limits
  printf("stack size  (soft limit): %ld\n", 0L);

  //TODO 8: Print the maximum number of processes/threads that you can spawn limits
  printf("process limit  (soft limit): %ld\n", 0L);
  printf("process limit  (hard limit): %ld\n", 0L);

  //TODO 9: Print the maximum number of number of file descriptors that this process may allocate
  printf("max file descriptors  (soft limit): %ld\n", 0L);
  printf("max file descriptors  (hard limit): %ld\n", 0L);
  return 10;
}
