OBJ=main
ALL = main.o Select.o
$(OBJ):$(ALL)
	@gcc $^ -o $(OBJ)
	@echo "create executable ok."
%.o:%.c
	@gcc -c $< -o $@
	@echo "create *.o ok."
.PHONY:clean
clean:
	@rm -f $(ALL) $(OBJ)
	@echo "del ok."
