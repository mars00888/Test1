.PHONY: clean All

All:
	@echo "----------Building project:[ PapaTest - Debug ]----------"
	@cd "PapaTest" && "$(MAKE)" -f  "PapaTest.mk"
clean:
	@echo "----------Cleaning project:[ PapaTest - Debug ]----------"
	@cd "PapaTest" && "$(MAKE)" -f  "PapaTest.mk" clean
