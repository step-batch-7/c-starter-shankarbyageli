#include<stdio.h>

unsigned long factorial(int);
void fibonacci(int);
void odd_series(int);
void even_series(int);
void multiplication_table(int, int);
long sum_of_N(int, int);
long product_of_N(int, int);
void print_odd_numbers(int, int);
void print_nth_numbers(int, int, int);
void print_odd_backwards(int);
long sum_of_even(int, int);

unsigned long factorial(int number) {
  unsigned long factorial = 1;
  for(long i = 1; i <= number; i++) {
    factorial *= i;
  }
  return factorial;
}

void fibonacci(int no_of_terms) {
  long a = -1;
  long b = 1;
  for(int i = 0; i < no_of_terms; i++) {
    printf("%ld\n", a + b);
    b = a + b;
    a = b - a;
  }
}

void odd_series(int N) {
  for(int i = 1; i <= N; i += 2) {
    printf("%d\n", i);
  }
}

void even_series(int N) {
  for(int i = 2; i <= N; i += 2) {
    printf("%d\n", i);
  }
}

void multiplication_table(int m, int n) {
  for(int i = 1; i <= n; i++) {
    printf("%d\n", m*i);
  }
}

void print_odd_numbers(int start, int N) {
  int first_odd = start % 2 == 0 ? start + 1 : start;
  for(int i = first_odd; i <= N; i += 2) {
    printf("%d\n", i);
  }
}

void print_nth_numbers(int N, int start, int end) {
  for(int i = start; i <= end; i += N) {
    printf("%d\n", i);
  }
}

long sum_of_even(int start, int end) {
  int sum = 0;
  int first_num = start % 2 == 0 ? start : start + 1;
  for(int i = first_num; i <= end; i += 2) {
    sum += i;
  }
  return sum;
}

void print_odd_backwards(int N) {
  int first_odd = N % 2 == 0 ? N - 1 : N;
  for(int i = first_odd; i > 0; i -= 2) {
    printf("%d\n", i);
  }
}

long product_of_N(int start, int N) {
  int product = 1;
  for(int i = 0; i < N; i++, start++) {
    product *= start;
  }
  return product;
}

long sum_of_N(int start, int N) {
  int sum = 0;
  for(int i = 0; i < N; i++, start++) {
    sum += start;
  }
  return sum;
}

int main() {
  int choice = 1;
  int N, start, end, n1, n2;
  printf("1. factorial\n2. fibonacci\n3. odd_series\n4. even_series\n5. multiplication_table\n6. sum_of_N\n7. product_of_N\n8. print_odd_numbers\n9. print_nth_numbers\n10. sum_of_even\n11. print_odd_backwards\n\n");
  printf("Enter the function number to run: ");
  scanf("%d", &choice);
  switch(choice) {
    case 1:
      printf("Enter the number: ");
      scanf("%d", &N);
      printf("Factorial of %d: %ld\n", N, factorial(N));
      break;
    case 2:
      printf("Enter the number of terms: ");
      scanf("%d", &N);
      fibonacci(N);
      break;
    case 3:
      printf("Enter the number: ");
      scanf("%d", &N);
      odd_series(N);
      break;
    case 4:
      printf("Enter tha number: ");
      scanf("%d", &N);
      even_series(N);
      break;
    case 5: 
      printf("Enter values of m and n: ");
      scanf("%d %d", &n1, &n2);
      multiplication_table(n1, n2);
      break;
    case 6:
      printf("Enter starting number and N: ");
      scanf("%d %d", &n1, &n2);
      printf("Sum of %d numbers from %d: %ld\n", n2, n1, sum_of_N(n1, n2));
      break;
    case 7:
      printf("Enter starting number and N: ");
      scanf("%d %d", &n1, &n2);
      printf("Product of %d numbers from %d: %ld\n", n2, n1, product_of_N(n1, n2));
      break;
    case 8:
      printf("Enter the start and end numbers: ");
      scanf("%d %d", &start, &end);
      print_odd_numbers(start, end);
      break;
    case 9:
      printf("Enter the N, start and end numbers: ");
      scanf("%d %d %d", &N, &start, &end);
      print_nth_numbers(N, start, end);
      break;
    case 10:
      printf("Enter the start and end numbers: ");
      scanf("%d %d", &start, &end);
      printf("Sum of even numbers: %ld\n", sum_of_even(start, end));
      break;
    case 11:
      printf("Enter the number: ");
      scanf("%d", &N);
      print_odd_backwards(N);
      break;
    default:
      printf("Invalid choice\n");
  }
  return 0;
}
