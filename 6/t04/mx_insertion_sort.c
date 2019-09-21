int mx_strlen(const char *s);
int mx_insertion_sort(char **arr, int size);

int mx_insertion_sort(char **arr, int size){
    char *sort = 0;
    int j = 0;
    int swap = 0;

    for(int i = 1; i < size; i ++){
        sort = arr[i];
        for(j = i - 1; j >= 0 && (mx_strlen(arr[j]) > mx_strlen(sort)); j--){
            arr[j + 1] = arr[j];
            swap++;
        }
        arr[j + 1] = sort;
    }
    return swap;
}
