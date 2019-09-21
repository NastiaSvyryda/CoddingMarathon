int mx_factorial_rec(int n);

int mx_factorial_rec(int n){
    int factorial;
    
    if(n == 1 || n == 0){
        return 1;
    }
    else if(n > 0 && n < 13){
        factorial = mx_factorial_rec(n - 1) * n;
        return factorial;
    }
    return 0;
}
