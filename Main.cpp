#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;

int main() {
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Test Window");
	sf::Event event;
	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed){
				window.close();
			}
		}
	}
	cout << "Hello World";
}