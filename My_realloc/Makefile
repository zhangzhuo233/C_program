ALL=My_realloc.c
OBJ=My_realloc
$(OBJ):$(ALL)
	@gcc $^ -o $@ -g -std=c99
	@echo "ok."
.PHONY:clean
clean:
	@rm -f $(OBJ)
	@echo "del ok."

