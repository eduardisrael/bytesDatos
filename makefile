bin/bytes: obj/main.o obj/funciones.o   
	gcc -Wall -I./include $^ -o $@
obj/main.o: src/main.c include/codigo.h
	gcc -Wall -c -I./include $< -o $@
obj/funciones.o: src/funciones.c include/codigo.h
	gcc -Wall -c -I./include $< -o $@

clean:
	rm -f obj/* bin/*