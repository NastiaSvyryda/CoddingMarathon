
int mx_sum_digits(int num);

int mx_sum_digits(int num){
    int sum = 0; 
    while(num != 0){
      sum += num % 10;
      num = num / 10; 
    }
    if(sum <0){
      return -sum;
    } 
    else{
      return sum;
    }
}

