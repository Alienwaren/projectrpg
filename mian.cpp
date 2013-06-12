#include <iostream>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>
#include "struktury.h"

using namespace std;
using namespace sf;
int main()
{
	snake_e.atk_spd = 0.5f;
	snake_e.zycie = 30;
	snake_e.obrazenia = 10;
	Texture kostur;
	kostur.setSmooth(true);
	bool narysowano[15];
	for(int i = 0; i < 15; i++)
	{
		narysowano[i] = false;
	}
	if(!kostur.loadFromFile("staff.png"))
	{
		cout << "Nie moge zaladowac pliku";
	}
	Sprite kostur_s;
	kostur_s.setTexture(kostur);
	///
	Texture waz;
	waz.setSmooth(true);
	if(!waz.loadFromFile("snake.png"))
	{
		cout << "Nie moge zaladowac pliku";
	}
	Sprite snake_s;
	snake_s.setTexture(waz);
	RenderWindow oknoGlowne(VideoMode(800,600), "Okno glowne");
	oknoGlowne.setFramerateLimit(60);
	///
	Event zdarzenia;
	while(oknoGlowne.isOpen())
	{
		
		while(oknoGlowne.pollEvent(zdarzenia))
		{
			if(zdarzenia.type == Event::Closed)
			{
				oknoGlowne.close();
			}
			if(Keyboard::isKeyPressed(Keyboard::K))
			{
				oknoGlowne.clear(Color::Black);
				oknoGlowne.draw(snake_s);
				oknoGlowne.display();
			}
			if
			
		}
		
		
		oknoGlowne.display();
	}
	
}