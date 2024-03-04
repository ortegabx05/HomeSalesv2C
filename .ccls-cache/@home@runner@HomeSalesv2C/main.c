#include <stdio.h>

int main() {
    double sales[] = {0};
    char initials[] = {'D', 'E', 'F'};
    char *names[] = {"Danielle", "Edward", "Francis"};

    double grandTotal = 0;
    char initial;
    char highestSalesPerson = ' ';
    double highestTotal = 0;

    while (1) {
      printf("Enter salesperson's initial (or 'Z' to exit): ");
      scanf(" %c", &initial);
      initial = toupper(initial);

        if (initial == 'Z') {
            break;
  }

    int validInitial = 0;

    for (int i = 0; i < 3; i++) {
       if (initials[i] == initial) {
          validInitial = 1;
          printf("Enter the total amount for %s: ", names[i]);
          double saleAmount;
          scanf("%lf", &saleAmount);
          sales[i] += saleAmount;
          grandTotal += saleAmount;

       if (saleAmount > highestTotal) {
          highestTotal = saleAmount;
          highestSalesPerson = initial;
    }
                break;
      }
    }

       if (!validInitial) {
          printf("Error, invalid salesperson selected, please try again\n");
          continue;
      }
    }

    printf("Grand Total: $%.0lf\n", grandTotal);
    printf("Highest Sale: %c\n", highestSalesPerson);

    return 0;
}
