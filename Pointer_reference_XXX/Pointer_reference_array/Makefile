OBJ=test
ALL=test.c
$(OBJ):$(ALL)
	@gcc $(ALL) -o $(OBJ) -g -std=c99
	@echo "ok."
.PHONY:clean
clean:
	@rm -f $(OBJ)
	@echo "del ok."
