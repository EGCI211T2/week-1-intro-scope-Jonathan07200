DEPS= Jonathan
compile: main.c 
	 gcc main.c -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS)

clean: $(DEPS)
	 rm $(DEPS)
clear: main.c
	clear
#Hello