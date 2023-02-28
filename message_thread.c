#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

#define THREAD_COUNT 10

void* helloThread(void* thread_value) {
	printf("Hello Thread! value = %d\n", (int) thread_value);
	return NULL;
}

int main() {
  pthread_t threads[THREAD_COUNT];
  printf("With join\n");
  for (size_t i=0;i<THREAD_COUNT;i++) {
    pthread_create(&threads[i], NULL, helloThread, (void *)i);
  }

  printf("No join\n");
  for (size_t i=0;i<THREAD_COUNT;i++) {
    pthread_create(&threads[i], NULL, helloThread, (void *)i);
  }
  pthread_exit(NULL); /*this function is called after a thread has completed and no longer required.*/
	return 0;
}
