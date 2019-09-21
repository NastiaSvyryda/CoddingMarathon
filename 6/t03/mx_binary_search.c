
int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count);

int mx_binary_search(char **arr, int size, const char *s, int *count){
    if(size >= 2){
        int mid = size  / 2 ;
        
        if(mx_strcmp(arr[mid], s) == 0){
             (*count)++;
             return mid;
        }
        if(mx_strcmp(arr[mid], s) == 1){
             (*count)++;
             return mx_binary_search(arr, mid - 1, s, count);
        }
        if(mx_strcmp(arr[mid], s) == - 1){
            (*count)++;
            return mx_binary_search(arr, mid + 1, s, count);
        }
    }
    return -1;
}
