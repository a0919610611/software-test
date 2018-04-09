#include "commission.h"
#include <bits/stdc++.h>
using namespace std;

/*
 * parameters: number of lock, stock and barrel
 * price: lock 45, stock 30 barrel 25
 * constraints:
 * 1 <= lockCount <= 70
 * 1 <= stockCount <= 80
 * 1 <= barrelCount <=90
 * return value : the comission
 * return -1 if have wrong parameter values;
 */
double CalCommission(int lockCount, int stockCount, int barrelCount)
{
    double lockPrice = 45.0, stockPrice = 30.0, barrelPrice = 25.0;
    double totalSale = 0;
    totalSale += lockPrice * lockCount;
    totalSale += stockPrice * stockCount;
    totalSale += barrelPrice * barrelCount;
    double commission = 0.0;
    if (totalSale > 1800.0) {
        commission = 0.1 * 1000.0;
        commission += 0.15 * 800.0;
        commission += 0.2 * (totalSale - 1800.0);

    } else if (totalSale > 1000.0) {
        commission = 0.1 * 1000.0;
        commission += 0.15 * (totalSale - 1000.0);

    } else {
        commission = 0.10 * totalSale;
    }
    return commission;
}
