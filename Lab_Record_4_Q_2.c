# include <stdio.h>

// USING RETURN

/*int add( int a, int b){
    return a + b;
}

int main(){
    int res;
    res = add( 10, 20);
    printf("%d", res);
    return 0;
}*/

//USING PRINTF

void add( int a, int b){
    printf("%d", a + b);
}

int main(){

    add( 10, 20);
    return 0;
}