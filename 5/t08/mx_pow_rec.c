double mx_pow_rec(double n, unsigned int pow);

double mx_pow_rec(double n, unsigned int pow){
    int num;

    if(pow == 0 || n == 1){
        return 1;
    }
    else if(pow == 1){
        return n;
    }
    else {
        return (mx_pow_rec(n, pow - 1))* n;
    }
    return num;
}

