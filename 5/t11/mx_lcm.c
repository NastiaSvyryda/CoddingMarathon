int mx_lcm(int a, int b);
int mx_gcd(int a, int b);

int mx_lcm(int a, int b){
    if(a < 0){
        a = -1 * a;
    } 
    if(b < 0){
        b = -1 * b;
    } 
    int dev = mx_gcd(a, b);
    int common_mult = (a * b) / dev;
    return common_mult; 
}
