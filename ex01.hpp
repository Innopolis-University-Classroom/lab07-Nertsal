
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

template <typename WhatKind>
void multiples (WhatKind& sum, WhatKind x, int n)
{
    sum = 1 + (1 + n) * n / 2 * x;
}
