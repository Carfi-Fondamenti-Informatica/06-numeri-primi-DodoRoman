
bool primoo(int n){
    if (n>1){
        for (int i=2; i<n; i++){
            if (n%i==0){
                return false;
            }
        }
        return true;
    }
    return false;
}
