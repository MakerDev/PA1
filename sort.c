#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

typedef int (*compare_t)(const void*, const void*); // 좌우 두 항을 비교하여 왼쪽이 크면 1, 오른쪽이 크면 -1, 같으면 0 리턴
typedef void (*sort_func_t)(void*, size_t nmemb, size_t size, compare_t);

enum e_workload {
  ew_num, ew_str, ew_student, ew_count
};

struct Student {
  int id;
  char name[512];
};

int compare_numbers(const void* lhs, const void* rhs);
int compare_strings(const void* lhs, const void* rhs);
int compare_students(const void* lhs, const void* rhs);

static compare_t compare_funcs[ew_count] = {
  compare_numbers,
  compare_strings,
  compare_students
};

enum e_sort_type {
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

static const char* sort_funcs_name[est_count] = {
  "Insertion sort",
  "Selection sort",
  "Merge sort"
};

int main(int argc, char** argv)
{
  if (argc != 2) {
    fprintf(stderr, "Usage: ./sort <num|str|student>\n");
    exit(-1);
  }

  // TODO: Handle user's input. Check out files in ./in.
  
  enum e_workload workload_type = ew_num;

  if (strcmp(argv[1], "num") == 0) {
    workload_type = ew_num;
  } else if (strcmp(argv[1], "str") == 0) {
    workload_type = ew_str;
  } else if (strcmp(argv[1], "student") == 0) {
    workload_type = ew_student;
  }

  for (int i = 0; i < est_count; ++i) {
    struct timeval start;
    gettimeofday(&start, NULL);

    // TODO: Call sort_funcs[i]

    struct timeval end;
    gettimeofday(&end, NULL);

    fprintf(stderr, "%s: %lf\n", sort_funcs_name[i], ((end.tv_sec + end.tv_usec * 0.000001) - (end.tv_sec + end.tv_usec * 0.000001)));
  }

  // TODO: Print sorted result as written in ./out.

  return 0;
}

// Scenario 1: Number sorting
int compare_numbers(const void* lhs, const void* rhs) {
  // TODO: Fill this!
}

// Scenario 2: Single digit string sorting
int compare_strings(const void* lhs, const void* rhs) {
  // TODO: Fill this!
}

// Scenario 3: Struct sorting
int compare_students(const void* lhs, const void* rhs) {
  // TODO: Fill this!
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
