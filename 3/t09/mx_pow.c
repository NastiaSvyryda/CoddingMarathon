
double mx_pow(double n, unsigned int pow);

double mx_pow(double n, unsigned int pow){
    if(pow == 0){
      return 1;
    }
    else if(pow == 1){
      return n;
    }
    else if (pow > 1){
      double num = 1.0;

      for(unsigned int i = 0; i < pow; i++){
         num *= n;
      }
      return num;
    }
    return 0;
}

