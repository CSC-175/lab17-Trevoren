// Definition of findHigh function goes here

template <typename A, typename B, typename C, typename D>
void findHigh(A arr[], B size, C &index, D &high) {
    for(int i = 0; i < size; i++) {
        if(arr[i] > high) {
            high = arr[i];
            index = i;
        }
    }
}


