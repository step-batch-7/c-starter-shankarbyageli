#include<stdio.h>
#include<math.h>

unsigned char is_even(long);
unsigned char is_odd(long);
double square(float);
double cube(float);
long gcd(long, long);
long lcm(long, long);
double simple_interest(float, float, float);
double compound_interest(float, float, float);
double fahrenheit_to_centigrade(float);
double centigrade_to_fahrenheit(float);
long greatest_of_three(long, long, long);
double average_of_three(long, long, long);

unsigned char is_even(long number) {
  return number % 2 == 0;
}

unsigned char is_odd(long number) {
  return !is_even(number);
}

double square(float number) {
  return number * number;
}

double cube(float number) {
  return number * square(number);
}

long gcd(long n1, long n2) {
  long dividend = n1 > n2 ? n1 : n2;
  long divisor = n1 > n2 ? n2: n1;
  long gcd = dividend;
  while(divisor != 0) {
    gcd = divisor;
    divisor = dividend % divisor;
    dividend = gcd;
  }
  return gcd;
}

double fahrenheit_to_centigrade(float fahrenheit) {
  return (fahrenheit-32) * (5 / 9);
}

double centigrade_to_fahrenheit(float centigrade) {
  return (9 / 5) * centigrade + 32;
}

long greatest_of_three(long n1, long n2, long n3) {
  return n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
}

double average_of_three(long n1, long n2, long n3) {
  return (n1 + n2 + n3) / 3;
}

long lcm(long n1, long n2) {
  long hcf = gcd(n1, n2);
  return n1 * n2 / hcf;
}

double simple_interest(float principle, float duration, float interest) {
  return (principle * duration * interest) / 100;
}

double compound_interest(float principle, float duration, float interest) {
  double total = principle * pow((1 + interest / 100), duration);
  return total - principle;
}

int main() {
  int choice = 1;
  float number, principle, duration, interest, temp;
  long n1, n2, n3;
  printf("1. is_even\n2. is_odd\n3. square\n4. cube\n5. greatest_common_divisor\n6. least_common_multiple\n7. simple_interest\n8. compound_interest\n9. fahrenheit_to_centigrade\n10. centigrade_to_fahrenheit\n11. greatest_of_three\n12. average_of_three\n\n");
  printf("Enter the function number to run: ");
  scanf("%d", &choice);
  switch(choice) {
    case 1:
      printf("Enter the number: ");
      scanf("%ld", &n1);
      printf("%ld is %s\n", n1, is_even(n1) ? "even" : "not even");
      break;
    case 2:
      printf("Enter the number: ");
      scanf("%ld", &n1);
      printf("%ld is %s\n", n1, is_odd(n1) ? "odd" : "not odd");
      break;
    case 3:
      printf("Enter the number: ");
      scanf("%f", &number);
      printf("Square: %lf\n", square(number));
      break;
    case 4:
      printf("Enter tha number: ");
      scanf("%f", &number);
      printf("Cube: %lf\n", cube(number));
      break;
    case 5: 
      printf("Enter two numbers: ");
      scanf("%ld %ld", &n1, &n2);
      printf("GCD of two numbers: %ld\n", gcd(n1, n2));
      break;
    case 6:
      printf("Enter two numbers: ");
      scanf("%ld %ld", &n1, &n2);
      printf("LCM of two numbers: %ld\n", lcm(n1, n2));
      break;
    case 7:
      printf("Enter principle amount, duration and interest rate: ");
      scanf("%f %f %f", &principle, &duration, &interest);
      printf("Simple interest: %lf\n", simple_interest(principle, duration, interest));
      break;
    case 8:
      printf("Enter principle amount, duration and interest rate: ");
      scanf("%f %f %f", &principle, &duration, &interest);
      printf("Compound interest: %lf\n", compound_interest(principle, duration, interest));
      break;
    case 9:
      printf("Enter the temperature: ");
      scanf("%f", &temp);
      printf("Centigrade temperature: %lf\n", fahrenheit_to_centigrade(temp));
      break;
    case 10:
      printf("Enter the temperature: ");
      scanf("%f", &temp);
      printf("Fahrenheit temperature: %lf\n", centigrade_to_fahrenheit(temp));
      break;
    case 11:
      printf("Enter three numbers: ");
      scanf("%ld %ld %ld", &n1, &n2, &n3);
      printf("Greatest of three: %ld\n", greatest_of_three(n1, n2, n3));
      break;
    case 12:
      printf("Enter three numbers: ");
      scanf("%ld %ld %ld", &n1, &n2, &n3);
      printf("Average of given numbers: %lf\n", average_of_three(n1, n2, n3));
      break;
    default:
      printf("Invalid choice\n");
  }
  return 0;
}
