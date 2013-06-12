#include <iostream>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;
int main()
{
	Window oknoGlowne(VideoMode(800,600), "Okno glowne");
	oknoGlowne.setFramerateLimit(60);
	Event zdarzenia;
	while(oknoGlowne.isOpen())
	{
		while(oknoGlowne.pollEvent(zdarzenia))
		{
			if(zdarzenia.type == Event::Closed)
			{
				oknoGlowne.close();
			}
		}

		oknoGlowne.display();
	}
	
}