int reverse(int x){
    int reversedInteger = 0;
    while(x!=0)
    {
        if(reversedInteger>INT_MAX /10||(reversedInteger<INT_MIN/ 10))
        {
            return 0;
        }
        reversedInteger *= 10;
        reversedInteger = reversedInteger + (x % 10);
        x /= 10;
    }

    return reversedInteger;
}