#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int (*compare_t)(const void*, const void*); // 좌우 두 항을 비교하여 왼쪽이 크면 1, 오른쪽이 크면 -1, 같으면 0 리턴
typedef void (*sort_func_t)(void*, size_t nmemb, size_t size, compare_t);

enum e_sort_types {
  est_insertion, est_selection, est_merge, est_count
};

void insertion_sort(void* data, size_t nmemb, size_t size, compare_t compare);
void selection_sort(void* data, size_t nmemb, size_t size, compare_t compare);
void merge_sort(void* data, size_t nmemb, size_t size, compare_t compare);

static sort_func_t sort_funcs[est_count] = {
  insertion_sort,
  selection_sort,
  merge_sort
};

// Scenario 1: Number sorting
int compare_numbers(const void* lhs, const void* rhs) {
  // TODO: Fill this!
}

// Scenario 2: String sorting
int compare_strings(const void* lhs, const void* rhs) {
  // TODO: Fill this!
}

// Scenario 3: Struct sorting
struct Student {
  int id;
  char name[512];
};

int compare_students(const void* lhs, const void* rhs) {
  // TODO: Fill this!
}

int main(int argc, char** argv)
{
  if (argc != 2) {
    fprintf(stderr, "Usage: ./sort <num|str|student>\n");
    exit(-1);
  }

  // TODO: Handle user's input. Check out files in ./in.
  
  if (strcmp(argv[1], "num") == 0) {
	  // TODO: Fill this!
  } else if (strcmp(argv[1], "str") == 0) {
	  // TODO: Fill this!
  } else if (strcmp(argv[1], "student") == 0) {
	  // TODO: Fill this!
  }
  
  return 0;
}

void insertion_sort(void* data, size_t nmemb, size_t size, compare_t compare)
{
  // TODO: Fill this!
}

void selection_sort(void* data, size_t nmemb, size_t size, compare_t compare)
{
  // TODO: Fill this!
}

void merge_sort(void* data, size_t nmemb, size_t size, compare_t compare)
{
  // TODO: Fill this!
}
