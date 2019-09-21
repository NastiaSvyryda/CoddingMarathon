int mx_gcd(int a, int b);

int mx_gcd(int a, int b){
    int devider = 0;
 
    if(a < 0 && b < 0){
    a = -1 * a;
    b = -1 * b;
    }   
    
    if(a == 0){
        devider = b;
    }
    else if(b == 0){
        devider = a;
    }
    else if(a == b){
        devider = a;
    }
    else if(a > b){
        a = mx_gcd(a - b, b);
        devider = a;
    }
    else if(a < b){
        b = mx_gcd(a, b - a);
        devider = b;
    }
    else{
        devider = 0;
    } 
    return devider;
}
