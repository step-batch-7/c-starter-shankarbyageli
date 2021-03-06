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
  for(long index = 1; index <= number; index++) {
    factorial *= index;
  }
  return factorial;
}

void fibonacci(int no_of_terms) {
  long a = -1;
  long b = 1;
  for(int index = 0; index < no_of_terms; index++) {
    printf("%ld\n", a + b);
    b = a + b;
    a = b - a;
  }
}

void odd_series(int number) {
  for(int index = 1; index <= number; index += 2) {
    printf("%d\n", index);
  }
}

void even_series(int number) {
  for(int index = 2; index <= number; index += 2) {
    printf("%d\n", index);
  }
}

void multiplication_table(int m, int n) {
  for(int index = 1; index <= n; index++) {
    printf("%d\n", m*index);
  }
}

void print_odd_numbers(int start, int number) {
  int first_odd = start % 2 == 0 ? start + 1 : start;
  for(int index = first_odd; index <= number; index += 2) {
    printf("%d\n", index);
  }
}

void print_nth_numbers(int number, int start, int end) {
  for(int index = start; index <= end; index += number) {
    printf("%d\n", index);
  }
}

long sum_of_even(int start, int end) {
  int sum = 0;
  int first_num = start % 2 == 0 ? start : start + 1;
  for(int index = first_num; index <= end; index += 2) {
    sum += index;
  }
  return sum;
}

void print_odd_backwards(int number) {
  int first_odd = number % 2 == 0 ? number - 1 : number;
  for(int index = first_odd; index > 0; index -= 2) {
    printf("%d\n", index);
  }
}

long product_of_N(int start, int number) {
  int product = 1;
  for(int index = 0; index < number; index++, start++) {
    product *= start;
  }
  return product;
}

long sum_of_N(int start, int number) {
  int sum = 0;
  for(int index = 0; index < number; index++, start++) {
    sum += start;
  }
  return sum;
}

int main() {
  int choice = 1;
  int number, start, end, num1, num2;
  printf("1. factorial\n2. fibonacci\n3. odd_series\n4. even_series\n5. multiplication_table\n6. sum_of_N\n7. product_of_N\n8. print_odd_numbers\n9. print_nth_numbers\n10. sum_of_even\n11. print_odd_backwards\n\n");
  printf("Enter the function number to run: ");
  scanf("%d", &choice);
  switch(choice) {
    case 1:
      printf("Enter the number: ");
      scanf("%d", &number);
      printf("Factorial of %d: %ld\n", number, factorial(number));
      break;
    case 2:
      printf("Enter the number of terms: ");
      scanf("%d", &number);
      fibonacci(number);
      break;
    case 3:
      printf("Enter the number: ");
      scanf("%d", &number);
      odd_series(number);
      break;
    case 4:
      printf("Enter tha number: ");
      scanf("%d", &number);
      even_series(number);
      break;
    case 5: 
      printf("Enter values of m and n: ");
      scanf("%d %d", &num1, &num2);
      multiplication_table(num1, num2);
      break;
    case 6:
      printf("Enter starting number and number: ");
      scanf("%d %d", &num1, &num2);
      printf("Sum of %d numbers from %d: %ld\n", num2, num1, sum_of_N(num1, num2));
      break;
    case 7:
      printf("Enter starting number and number: ");
      scanf("%d %d", &num1, &num2);
      printf("Product of %d numbers from %d: %ld\n", num2, num1, product_of_N(num1, num2));
      break;
    case 8:
      printf("Enter the start and end numbers: ");
      scanf("%d %d", &start, &end);
      print_odd_numbers(start, end);
      break;
    case 9:
      printf("Enter the number, start and end numbers: ");
      scanf("%d %d %d", &number, &start, &end);
      print_nth_numbers(number, start, end);
      break;
    case 10:
      printf("Enter the start and end numbers: ");
      scanf("%d %d", &start, &end);
      printf("Sum of even numbers: %ld\n", sum_of_even(start, end));
      break;
    case 11:
      printf("Enter the number: ");
      scanf("%d", &number);
      print_odd_backwards(number);
      break;
    default:
      printf("Invalid choice\n");
  }
  return 0;
}
