void show_products(struct item mf[MAX_ITEMS]) { //MF= nombre arbitrario
        for  (int=0: i<MAX_ITEMS; i++){
                    if (mf[i].stock > 0) {
                            printf("%d\t%s\t%f\t%i\n", i+1
