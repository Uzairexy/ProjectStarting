#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;

int main() {
	sf::RenderWindow window(sf::VideoMode(512, 512), "SFML Window", sf::Style::Default);

	while (window.isOpen()) {
		sf::Event evnt;
		while (window.pollEvent(evnt)) {
			if (evnt.type == evnt.Closed){
				window.close();
			}
		}
	}
}