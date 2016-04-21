#include "splash.h"

void SplashScreen::Show(sf::RenderWindow & renderWindow)
{
	sf::Image image;
	sf::Texture texture;
	sf::Sprite sprite;
	if (!texture.loadFromFile("images/SplashScreen.png"))
	 {
		     return;
	 }
	
	sprite.setTexture(texture);
	
	  renderWindow.draw(sprite);
	  renderWindow.display();
	
	 sf::Event event;
	  while (true)
	  {
		while (renderWindow.pollEvent(event))
		  {
			  if (event.type == sf::Event::EventType::KeyPressed || event.type == sf::Event::EventType::MouseButtonPressed || event.type == sf::Event::EventType::Closed)
			    {
			     return;
			    }
		  }
	 }
}