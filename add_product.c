enum boolean add_product(struct item m[MAX_ITEMS]){
        int id, cant; //validacin que sea un valor entero
        scanf("%d %cd");

        if (id < 0 || id > MAX_ITEMS) 
                return false;
        else {
                scanf("%d", &cant);
                if (cant<=0 || cant>m[id-1].stock)  //acceder a lo que tienes en el stock (porque products comienza en 1)
                        return False;
                else { 
                        m[id-1]. stock -= cant;
                        m[id-1].cart += cant:
                        return True; //si no rompe es porque el valor del usuario está en rango y porque hay suficiente stock
                }
        }  /// print carrito, produtcos (carritos) y borrar productos, (lo mismo que add products pero invirtiendo sumar con restar y viceversa)
