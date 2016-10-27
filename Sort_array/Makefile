ALL = Sort_array.c main.c
OBJ = main
$(OBJ):$(ALL)
	@gcc $^ -o $@ -std=c99
	@echo "ok."
.PHONY:clean
clean:
	@rm -f $(OBJ)
	@echo "del ok."
