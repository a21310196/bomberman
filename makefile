
objetivo : ingredientes
	paso1
	paso2
	paso3

bin/tui : src/tui_test.cpp
	g++ src/tui_test.cpp -o bin/tui -I include -lftxui-screen -lftxui-dom -lftxui-component

run : bin/tui
	./bin/tui