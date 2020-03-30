#include<stdio.h>

int denomination_count(int amount, int denomination) {
  int remaining = amount % denomination;
  int count = amount / denomination;
  printf("%d x Rs. %d\n", count, denomination);
  return remaining;
}

int main(void) {
  int amount = 0;
  printf("Enter the amount: ");
  scanf("%d", &amount);
  amount = denomination_count(amount, 2000);
  amount = denomination_count(amount, 500);
  amount = denomination_count(amount, 200);
  amount = denomination_count(amount, 100);
  amount = denomination_count(amount, 50);
  amount = denomination_count(amount, 10);
  amount = denomination_count(amount, 5);
  amount = denomination_count(amount, 1);
  return 0;
}
