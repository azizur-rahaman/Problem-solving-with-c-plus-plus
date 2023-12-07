#include <stdio.h>

int main() {
    int productnum;
    float costPrice1, quantity1, costPrice2, quantity2, costPrice3, quantity3;
    float profitMargin, discountRate, totalCost = 0, profit, afterProfit, discountAmount, afterDiscount, vat, finalPrice;

    printf("Enter the number of products: ");
    scanf("%d", &productnum);

    printf("Product 1:\n");
    printf("Enter cost price: ");
    scanf("%f", &costPrice1);
    printf("Enter quantity: ");
    scanf("%f", &quantity1);
    
    printf("Product 2:\n");
    printf("Enter cost price: ");
    scanf("%f", &costPrice2);
    printf("Enter quantity: ");
    scanf("%f", &quantity2);
    
    printf("Product 3:\n");
    printf("Enter cost price: ");
    scanf("%f", &costPrice3);
    printf("Enter quantity: ");
    scanf("%f", &quantity3);
    
    printf("Enter profit margin (in percentage): ");
    scanf("%f", &profitMargin);
    printf("Enter discount rate (in percentage): ");
    scanf("%f", &discountRate);
    
    totalCost += costPrice1+costPrice2+costPrice3* quantity1+quantity2+quantity3;

    profit = (profitMargin / 100) * totalCost;
    afterProfit = totalCost + profit;

    discountAmount = (discountRate / 100) * afterProfit;
    afterDiscount = afterProfit - discountAmount;

    vat = 0.15 * afterDiscount;
    finalPrice = afterDiscount + vat;

    printf("\n\n\nOutput:\n");
    printf("Total cost: %.2f\n", totalCost);
    printf("Profit (%.2f%%): %.2f\n", profitMargin, profit);
    printf("After profit: %.2f\n", afterProfit);
    printf("Discount (%.2f%%): %.2f\n", discountRate, discountAmount);
    printf("After discount: %.2f\n", afterDiscount);
    printf("VAT (15%%): %.2f\n", vat);
    printf("Final selling price: %.2f\n", finalPrice);

    return 0;
}