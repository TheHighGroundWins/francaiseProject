// Hello SFML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <sfml/Graphics.hpp>
#include <sstream>

using namespace sf;

int main()
{
	VideoMode vm(1366, 768);
	RenderWindow window(vm, "francais project", Style::Resize);

	Texture texturebackground;
	texturebackground.loadFromFile("graphics/white.png");
	Sprite background;
	background.setTexture(texturebackground);

	Font font;
	font.loadFromFile("fonts/cour.ttf");

	Text question;
	question.setFont(font);
	question.setFillColor(Color::Black);
	question.setCharacterSize(60);
	question.setPosition(50, 50);

	Text answer1;
	answer1.setFont(font);
	answer1.setFillColor(Color::Black);
	answer1.setCharacterSize(50);
	answer1.setPosition(200, 200);

	Text answer2;
	answer2.setFont(font);
	answer2.setFillColor(Color::Black);
	answer2.setString("2.voiture");
	answer2.setCharacterSize(50);
	answer2.setPosition(200, 300);

	Text answer3;
	answer3.setFont(font);
	answer3.setFillColor(Color::Black);
	answer3.setCharacterSize(50);
	answer3.setPosition(200, 400);

	Text answer4;
	answer4.setFont(font);
	answer4.setFillColor(Color::Black);
	answer4.setString("2.voiture");
	answer4.setCharacterSize(50);
	answer4.setPosition(200, 500);

	//for showing the score
	Text textScore;
	textScore.setFont(font);
	textScore.setFillColor(Color::Black);
	textScore.setCharacterSize(100);
	textScore.setPosition(100, 100);

	int intScore = 0;

	//bread textures

	Texture textureBread1;
	textureBread1.loadFromFile("graphics/bread1.png");

	Texture textureBread2;
	textureBread2.loadFromFile("graphics/bread2.png");

	Texture textureBaguette;
	textureBaguette.loadFromFile("graphics/baguette.png");

	Texture textureBread4;
	textureBread4.loadFromFile("graphics/bread4.png");


	//tower textures
	Texture textureTower1;
	textureTower1.loadFromFile("graphics/tower1.png");

	Texture textureEiffelTower;
	textureEiffelTower.loadFromFile("graphics/eiffel_tower.png");

	Texture textureTower3;
	textureTower3.loadFromFile("graphics/tower3.png");

	Texture textureTower4;
	textureTower4.loadFromFile("graphics/tower4.png");

	//tower sprites
	Sprite spriteTower1;
	Sprite spriteEiffelTower;
	Sprite spriteTower3;
	Sprite spriteTower4;

	spriteTower1.setTexture(textureTower1);
	spriteEiffelTower.setTexture(textureEiffelTower);
	spriteTower3.setTexture(textureTower3);
	spriteTower4.setTexture(textureTower4);

	spriteTower1.setPosition(300, 200);
	spriteEiffelTower.setPosition(1000, 200);
	spriteTower3.setPosition(300, 600);
	spriteTower4.setPosition(1000, 600);

	//brand textures
	Texture textureChanel;
	textureChanel.loadFromFile("graphics/chanel.png");

	Texture texturePerfume2;
	texturePerfume2.loadFromFile("graphics/perfume2.png");

	Texture texturePerfume3;
	texturePerfume3.loadFromFile("graphics/perfume3.png");

	Texture texturePerfume4;
	texturePerfume4.loadFromFile("graphics/perfume4.png");

	//brand sprites
	Sprite spriteChanel;
	Sprite spritePerfume2;
	Sprite spritePerfume3;
	Sprite spritePerfume4;

	//sets texture of perfumes
	spriteChanel.setTexture(textureChanel);
	spritePerfume2.setTexture(texturePerfume2);
	spritePerfume3.setTexture(texturePerfume3);
	spritePerfume4.setTexture(texturePerfume4);

	spriteChanel.setPosition(280, 200);
	spritePerfume2.setPosition(1000, 200);
	spritePerfume3.setPosition(300, 700);
	spritePerfume4.setPosition(1000, 650);

	//textures of brands

	Texture textureBrand1;
	textureBrand1.loadFromFile("graphics/brand1.png");

	Texture textureBrand2;
	textureBrand2.loadFromFile("graphics/brand2.png");

	Texture textureBrand3;
	textureBrand3.loadFromFile("graphics/brand3.png");

	Texture texturePaul;
	texturePaul.loadFromFile("graphics/paul.png");

	//brands sprites
	Sprite spriteBrand1;
	Sprite spriteBrand2;
	Sprite spriteBrand3;
	Sprite spritePaul;

	//sets texture of sprites
	spriteBrand1.setTexture(textureBrand1);
	spriteBrand2.setTexture(textureBrand2);
	spriteBrand3.setTexture(textureBrand3);
	spritePaul.setTexture(texturePaul);

	spriteBrand1.setPosition(280, 200);
	spriteBrand2.setPosition(1000, 200);
	spriteBrand3.setPosition(300, 700);
	spritePaul.setPosition(1000, 650);

	//texture flags
	Texture textureFlagFrance;
	textureFlagFrance.loadFromFile("graphics/flag_france.png");

	Texture textureFlag2;
	textureFlag2.loadFromFile("graphics/flag2.png");

	Texture textureFlag3;
	textureFlag3.loadFromFile("graphics/flag3.png");

	Texture textureFlag4;
	textureFlag4.loadFromFile("graphics/flag4.png");

	//flag sprites
	Sprite spriteFlagFrance;
	Sprite spriteFlag2;
	Sprite spriteFlag3;
	Sprite spriteFlag4;

	spriteFlagFrance.setTexture(textureFlagFrance);
	spriteFlag2.setTexture(textureFlag2);
	spriteFlag3.setTexture(textureFlag3);
	spriteFlag4.setTexture(textureFlag4);

	spriteFlagFrance.setPosition(300, 200);
	spriteFlag2.setPosition(300, 425);
	spriteFlag3.setPosition(300, 625);
	spriteFlag4.setPosition(300, 850);

	//bread sprites

	Sprite spriteBread1;
	Sprite spriteBread2;
	Sprite spriteBread3;
	Sprite spriteBread4;

	spriteBread1.setTexture(textureBread1);
	spriteBread2.setTexture(textureBread2);
	spriteBread3.setTexture(textureBaguette);
	spriteBread4.setTexture(textureBread4);

	spriteBread1.setPosition(300, 200);
	spriteBread2.setPosition(300, 400);
	spriteBread3.setPosition(300, 600);
	spriteBread4.setPosition(300, 800);

	Texture textureArrow;
	textureArrow.loadFromFile("graphics/Arrow.png");
	Sprite spriteArrow1;
	Sprite spriteArrow2;
	Sprite spriteArrow3;
	Sprite spriteArrow4;

	spriteArrow1.setTexture(textureArrow);
	spriteArrow2.setTexture(textureArrow);
	spriteArrow3.setTexture(textureArrow);
	spriteArrow4.setTexture(textureArrow);

	spriteArrow1.setPosition(100, 200);
	spriteArrow2.setPosition(100, 400);
	spriteArrow3.setPosition(100, 600);
	spriteArrow4.setPosition(100, 800);

	bool boolBreads = true;
	bool boolTowers = true;
	bool boolFlags = true;
	bool boolPerfumes = true;
	bool boolBrands = true;
	bool boolScore = true;

	bool boolQuestion1 = false;
	bool boolQuestion2 = true;
	bool boolQuestion3 = true;
	bool boolQuestion4 = true;
	bool boolQuestion5 = true;
	bool boolQuestion6 = true;
	bool boolQuestion7 = true;
	bool boolQuestion8 = true;
	bool boolQuestion9 = true;
	bool boolQuestion10 = true;
	bool boolQuestion11 = true;
	bool boolQuestion12 = true;
	bool boolQuestion13 = true;
	bool boolQuestion14 = true;
	bool boolQuestion15 = true;
	bool boolQuestion16 = true;
	bool boolQuestion17 = true;
	bool boolQuestion18 = true;
	bool boolQuestion19 = true;
	bool boolQuestion20 = true;
	bool boolQuestion21 = true;

	bool boolSkip1 = true;
	bool boolSkip2 = true;
	bool boolSkip3 = true;
	bool boolSkip4 = true;
	bool boolSkip5 = true;
	bool boolSkip6 = true;
	bool boolSkip7 = true;
	bool boolSkip8 = true;
	bool boolSkip9 = true;
	bool boolSkip10 = true;

	bool correct1 = true;
	bool correct2 = true;
	bool correct3 = true;
	bool correct4 = true;
	bool correct5 = true;
	bool correct6 = true;
	bool correct7 = true;
	bool correct8 = true;
	bool correct9 = true;
	bool correct10 = true;

	bool boolArrow1 = true;
	bool boolArrow2 = true;
	bool boolArrow3 = true;
	bool boolArrow4 = true;
	bool boolChecker = true;

	bool running = true;
	bool running2 = true;
	bool boolQuestion = false;

	Event test;

	Color colorAnswer;

	while (window.isOpen())
	{
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

		//for testing purposes skipping

		if (Keyboard::isKeyPressed(Keyboard::Numpad1))
		{
			boolSkip1 = false;
		}
		if (Keyboard::isKeyPressed(Keyboard::Numpad2))
		{
			boolSkip2 = false;
		}
		if (Keyboard::isKeyPressed(Keyboard::Numpad3))
		{
			boolSkip3 = false;
		}
		if (Keyboard::isKeyPressed(Keyboard::Numpad4))
		{
			boolSkip4 = false;
		}
		if (Keyboard::isKeyPressed(Keyboard::Numpad5))
		{
			boolSkip5 = false;
		}
		if (Keyboard::isKeyPressed(Keyboard::Numpad6))
		{
			boolSkip6 = false;
		}
		if (Keyboard::isKeyPressed(Keyboard::Numpad7))
		{
			boolSkip7 = false;
		}
		if (Keyboard::isKeyPressed(Keyboard::Numpad8))
		{
			boolSkip8 = false;
		}
		if (Keyboard::isKeyPressed(Keyboard::Numpad9))
		{
			boolSkip9 = false;
		}
		if (Keyboard::isKeyPressed(Keyboard::Numpad0))
		{
			boolSkip10 = false;
		}

		if (!boolQuestion1 || !boolSkip1)
		{
			boolBreads = false;
			question.setString("Choisir franciase pain");

			while (window.pollEvent(test))
			{
				switch (test.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					if (Keyboard::isKeyPressed(Keyboard::Num1))
					{
						boolArrow1 = false;
						boolArrow2 = true;
						boolArrow3 = true;
						boolArrow4 = true;
					}

					if (Keyboard::isKeyPressed(Keyboard::Num2))
					{
						boolArrow1 = true;
						boolArrow2 = false;
						boolArrow3 = true;
						boolArrow4 = true;
					}
					if (Keyboard::isKeyPressed(Keyboard::Num3))
					{
						boolArrow1 = true;
						boolArrow2 = true;
						boolArrow3 = false;
						boolArrow4 = true;
					}

					if (Keyboard::isKeyPressed(Keyboard::Num4))
					{
						boolArrow1 = true;
						boolArrow2 = true;
						boolArrow3 = true;
						boolArrow4 = false;
					}
					if (Keyboard::isKeyPressed(Keyboard::Tab))
					{
						boolQuestion2 = false;
						boolQuestion1 = true;
					}
					break;
				}
			}
		}

		if (!boolQuestion2)
		{
			if (!boolArrow3)
			{
				question.setString("Correct");
				correct1 = false;
			}
			else
			{
				question.setString("Wrong");
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				boolQuestion3 = false;
				boolQuestion2 = true;
			}
		}

		if (!boolQuestion3 || !boolSkip2)
		{
			boolArrow1 = true;
			boolArrow2 = true;
			boolArrow3 = true;
			boolArrow4 = true;

			boolBreads = true;
			running = false;
			question.setString("Quelle est un mot pour un transport");
			answer1.setString("1.car");
			answer2.setString("2.voiture");

			while (window.pollEvent(test))
			{
				switch (test.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					if (Keyboard::isKeyPressed(Keyboard::Num1))
					{
						answer1.setFillColor(Color::Blue);
						answer2.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num2))
					{
						answer2.setFillColor(Color::Blue);
						answer1.setFillColor(Color::Black);
					}
					if (Keyboard::isKeyPressed(Keyboard::Tab))
					{
						boolQuestion4 = false;
						boolQuestion3 = true;
					}
					break;
				}
			}
		}

		if (!boolQuestion4)
		{
			running = true;
			colorAnswer = answer2.getFillColor();

			if (colorAnswer == Color::Blue)
			{
				question.setString("Correct");
				correct2 = false;
			}
			else
			{
				question.setString("Wrong");
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				answer1.setFillColor(Color::Black);
				answer2.setFillColor(Color::Black);
				boolQuestion5 = false;
				boolQuestion4 = true;
			}
		}

		if (!boolQuestion5 || !boolSkip3)
		{

			running = false;
			question.setString("Conjugation pour Je venir marcher");
			answer1.setString("1. Je viens marcher");
			answer2.setString("2. Je venir marche");
			answer2.setFillColor(Color::Black);
			while (window.pollEvent(test))
			{
				switch (test.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					if (Keyboard::isKeyPressed(Keyboard::Num1))
					{
						answer1.setFillColor(Color::Blue);
						answer2.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num2))
					{
						answer1.setFillColor(Color::Black);
						answer2.setFillColor(Color::Blue);
					}
					if (Keyboard::isKeyPressed(Keyboard::Tab))
					{
						boolQuestion6 = false;
						boolQuestion5 = true;
					}
					break;
				}
			}

		}

		if (!boolQuestion6)
		{
			running = true;
			colorAnswer = answer1.getFillColor();

			if (colorAnswer == Color::Blue)
			{
				question.setString("Correct");
				correct3 = false;
			}
			else
			{
				question.setString("Wrong");
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				boolQuestion6 = true;
				boolQuestion7 = false;
			}
		}

		if (!boolQuestion7 || !boolSkip4)
		{

			boolTowers = false;
			running = true;
			boolBreads = true;

			spriteArrow1.setPosition(50, 275);
			spriteArrow2.setPosition(850, 275);
			spriteArrow3.setPosition(50, 675);
			spriteArrow4.setPosition(850, 675);

			question.setString("Choisir francaise tour");

			while (window.pollEvent(test))
			{
				switch (test.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					if (Keyboard::isKeyPressed(Keyboard::Num1))
					{
						boolArrow1 = false;
						boolArrow2 = true;
						boolArrow3 = true;
						boolArrow4 = true;
					}

					if (Keyboard::isKeyPressed(Keyboard::Num2))
					{
						boolArrow1 = true;
						boolArrow2 = false;
						boolArrow3 = true;
						boolArrow4 = true;
					}
					if (Keyboard::isKeyPressed(Keyboard::Num3))
					{
						boolArrow1 = true;
						boolArrow2 = true;
						boolArrow3 = false;
						boolArrow4 = true;
					}

					if (Keyboard::isKeyPressed(Keyboard::Num4))
					{
						boolArrow1 = true;
						boolArrow2 = true;
						boolArrow3 = true;
						boolArrow4 = false;
					}
					if (Keyboard::isKeyPressed(Keyboard::Tab))
					{
						boolQuestion8 = false;
						boolQuestion7 = true;
					}
					break;
				}
			}
		}

		if (!boolQuestion8)
		{
			answer1.setFillColor(Color::Black);
			answer2.setFillColor(Color::Black);
			answer3.setFillColor(Color::Black);
			answer4.setFillColor(Color::Black);

			if (!boolArrow2)
			{
				question.setString("Correct");
				correct4 = false;
			}
			else
			{
				question.setString("Wrong");
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				boolArrow1 = true;
				boolArrow2 = true;
				boolArrow3 = true;
				boolArrow4 = true;
				boolQuestion9 = false;
				boolQuestion8 = true;
			}
		}

		if (!boolQuestion9 || !boolSkip5)
		{
			boolTowers = true;
			boolBreads = true;
			running = false;
			running2 = false;
			
			question.setString("Quelle langue utilese France");
			answer1.setString("1. Espagniol");
			answer2.setString("2. Japanoise");
			answer3.setString("3. Americain");
			answer4.setString("4. Francais");

			while (window.pollEvent(test))
			{
				switch (test.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					if (Keyboard::isKeyPressed(Keyboard::Num1))
					{
						answer1.setFillColor(Color::Blue);
						answer2.setFillColor(Color::Black);
						answer3.setFillColor(Color::Black);
						answer4.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num2))
					{
						answer1.setFillColor(Color::Black);
						answer2.setFillColor(Color::Blue);
						answer3.setFillColor(Color::Black);
						answer4.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num3))
					{
						answer1.setFillColor(Color::Black);
						answer2.setFillColor(Color::Black);
						answer3.setFillColor(Color::Blue);
						answer4.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num4))
					{
						answer1.setFillColor(Color::Black);
						answer2.setFillColor(Color::Black);
						answer3.setFillColor(Color::Black);
						answer4.setFillColor(Color::Blue);
					}

					if (Keyboard::isKeyPressed(Keyboard::Tab))
					{
						boolQuestion10 = false;
						boolQuestion9 = true;
					}
					break;
				}
			}

		}

		if (!boolQuestion10)
		{
			running = true;
			running2 = true;
			colorAnswer = answer4.getFillColor();

			if (colorAnswer == Color::Blue)
			{
				question.setString("Correct");
				correct5 = false;
			}
			else
			{
				question.setString("Wrong");
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				boolQuestion10 = true;
				boolQuestion11 = false;
			}
		}
		if (!boolQuestion11 || !boolSkip6)
		{
			boolBreads = true;
			boolTowers = true;
			boolFlags = false;

			spriteArrow1.setPosition(100, 200);
			spriteArrow2.setPosition(100, 400);
			spriteArrow3.setPosition(100, 625);
			spriteArrow4.setPosition(100, 825);

			question.setString("Choisir francaise flag");

			while (window.pollEvent(test))
			{
				switch (test.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					if (Keyboard::isKeyPressed(Keyboard::Num1))
					{
						boolArrow1 = false;
						boolArrow2 = true;
						boolArrow3 = true;
						boolArrow4 = true;
					}

					if (Keyboard::isKeyPressed(Keyboard::Num2))
					{
						boolArrow1 = true;
						boolArrow2 = false;
						boolArrow3 = true;
						boolArrow4 = true;
					}
					if (Keyboard::isKeyPressed(Keyboard::Num3))
					{
						boolArrow1 = true;
						boolArrow2 = true;
						boolArrow3 = false;
						boolArrow4 = true;
					}

					if (Keyboard::isKeyPressed(Keyboard::Num4))
					{
						boolArrow1 = true;
						boolArrow2 = true;
						boolArrow3 = true;
						boolArrow4 = false;
					}
					if (Keyboard::isKeyPressed(Keyboard::Tab))
					{
						boolQuestion12 = false;
						boolQuestion11 = true;
					}
					break;
				}
			}
		}

		if (!boolQuestion12)
		{
			answer1.setFillColor(Color::Black);
			answer2.setFillColor(Color::Black);
			answer3.setFillColor(Color::Black);
			answer4.setFillColor(Color::Black);

			if (!boolArrow1)
			{
				question.setString("Correct");
				correct6 = false;
			}
			else
			{
				question.setString("Wrong");
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				boolArrow1 = true;
				boolArrow2 = true;
				boolArrow3 = true;
				boolArrow4 = true;
				boolQuestion13 = false;
				boolQuestion12 = true;
			}
			boolTowers = true;
			boolBreads = true;
			
		}

		if (!boolQuestion13 || !boolSkip7)
		{
			boolFlags = true;
			running = false;
			running2 = false;
			question.setCharacterSize(50);
			question.setString("Quel pays Francais envoyer The Statue of Liberty");
			answer1.setString("1. Mongolia");
			answer2.setString("2. Americain");
			answer3.setString("3. Allemagne");
			answer4.setString("4. Italie");

			while (window.pollEvent(test))
			{
				switch (test.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					if (Keyboard::isKeyPressed(Keyboard::Num1))
					{
						answer1.setFillColor(Color::Blue);
						answer2.setFillColor(Color::Black);
						answer3.setFillColor(Color::Black);
						answer4.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num2))
					{
						answer1.setFillColor(Color::Black);
						answer2.setFillColor(Color::Blue);
						answer3.setFillColor(Color::Black);
						answer4.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num3))
					{
						answer1.setFillColor(Color::Black);
						answer2.setFillColor(Color::Black);
						answer3.setFillColor(Color::Blue);
						answer4.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num4))
					{
						answer1.setFillColor(Color::Black);
						answer2.setFillColor(Color::Black);
						answer3.setFillColor(Color::Black);
						answer4.setFillColor(Color::Blue);
					}

					if (Keyboard::isKeyPressed(Keyboard::Tab))
					{
						boolQuestion14 = false;
						boolQuestion13 = true;
					}
					break;
				}
			}

		}

		if (!boolQuestion14)
		{
			running = true;
			running2 = true;

			colorAnswer = answer2.getFillColor();

			if (colorAnswer == Color::Blue)
			{
				question.setString("Correct");
				correct7 = false;
			}
			else
			{
				question.setString("Wrong");
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				answer1.setFillColor(Color::Black);
				answer2.setFillColor(Color::Black);
				answer3.setFillColor(Color::Black);
				answer4.setFillColor(Color::Black);
				boolQuestion14 = true;
				boolQuestion15 = false;
			}
		}

		if (!boolQuestion15 || !boolSkip8)
		{
			running = false;
			running2 = false;
			question.setCharacterSize(50);
			question.setString("Quoi endroit le tour de eiffel utilser en");
			answer1.setString("1. Musee");
			answer2.setString("2. parc d'attractions");
			answer3.setString("3. World Fair");
			answer4.setString("4. Aquarium");

			while (window.pollEvent(test))
			{
				switch (test.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					if (Keyboard::isKeyPressed(Keyboard::Num1))
					{
						answer1.setFillColor(Color::Blue);
						answer2.setFillColor(Color::Black);
						answer3.setFillColor(Color::Black);
						answer4.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num2))
					{
						answer1.setFillColor(Color::Black);
						answer2.setFillColor(Color::Blue);
						answer3.setFillColor(Color::Black);
						answer4.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num3))
					{
						answer1.setFillColor(Color::Black);
						answer2.setFillColor(Color::Black);
						answer3.setFillColor(Color::Blue);
						answer4.setFillColor(Color::Black);
					}

					if (Keyboard::isKeyPressed(Keyboard::Num4))
					{
						answer1.setFillColor(Color::Black);
						answer2.setFillColor(Color::Black);
						answer3.setFillColor(Color::Black);
						answer4.setFillColor(Color::Blue);
					}

					if (Keyboard::isKeyPressed(Keyboard::Tab))
					{
						boolQuestion16 = false;
						boolQuestion15 = true;
					}
					break;
				}
			}

		}

		if (!boolQuestion16)
		{
			running = true;
			running2 = true;
			colorAnswer = answer3.getFillColor();

			spriteArrow1.setPosition(100, 250);
			spriteArrow2.setPosition(800, 250);
			spriteArrow3.setPosition(100, 750);
			spriteArrow4.setPosition(800, 750);

			if (colorAnswer == Color::Blue)
			{
				question.setString("Correct");
				correct8 = false;
			}
			else
			{
				question.setString("Wrong");
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				boolArrow1 = true;
				boolArrow2 = true;
				boolArrow3 = true;
				boolArrow4 = true;
				answer1.setFillColor(Color::Black);
				answer2.setFillColor(Color::Black);
				answer3.setFillColor(Color::Black);
				answer4.setFillColor(Color::Black);
				boolQuestion16 = true;
				boolQuestion17 = false;
			}
		}
		if (!boolQuestion17 || !boolSkip9)
		{
			
			boolPerfumes = false;
			question.setString("Choisir franciase perfum");

			while (window.pollEvent(test))
			{
				switch (test.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					if (Keyboard::isKeyPressed(Keyboard::Num1))
					{
						boolArrow1 = false;
						boolArrow2 = true;
						boolArrow3 = true;
						boolArrow4 = true;
					}

					if (Keyboard::isKeyPressed(Keyboard::Num2))
					{
						boolArrow1 = true;
						boolArrow2 = false;
						boolArrow3 = true;
						boolArrow4 = true;
					}
					if (Keyboard::isKeyPressed(Keyboard::Num3))
					{
						boolArrow1 = true;
						boolArrow2 = true;
						boolArrow3 = false;
						boolArrow4 = true;
					}

					if (Keyboard::isKeyPressed(Keyboard::Num4))
					{
						boolArrow1 = true;
						boolArrow2 = true;
						boolArrow3 = true;
						boolArrow4 = false;
					}
					if (Keyboard::isKeyPressed(Keyboard::Tab))
					{
						boolQuestion18 = false;
						boolQuestion17 = true;
					}
					break;
				}
			}
		}

		if (!boolQuestion18)
		{
			if (!boolArrow1)
			{
				question.setString("Correct");
				correct9 = false;
			}
			else
			{
				question.setString("Wrong");
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{
				boolArrow1 = true;
				boolArrow2 = true;
				boolArrow3 = true;
				boolArrow4 = true;
				boolQuestion19 = false;
				boolQuestion18 = true;
			}
		}

		if (!boolQuestion19 || !boolSkip10)
		{
			spriteArrow1.setPosition(80, 250);
			spriteArrow2.setPosition(800, 200);
			spriteArrow3.setPosition(100, 750);
			spriteArrow4.setPosition(800, 750);
			boolPerfumes = true;
			boolBrands = false;
			question.setString("Choisir franciase boulangerie");

			while (window.pollEvent(test))
			{
				switch (test.type)
				{
				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					if (Keyboard::isKeyPressed(Keyboard::Num1))
					{
						boolArrow1 = false;
						boolArrow2 = true;
						boolArrow3 = true;
						boolArrow4 = true;
					}

					if (Keyboard::isKeyPressed(Keyboard::Num2))
					{
						boolArrow1 = true;
						boolArrow2 = false;
						boolArrow3 = true;
						boolArrow4 = true;
					}
					if (Keyboard::isKeyPressed(Keyboard::Num3))
					{
						boolArrow1 = true;
						boolArrow2 = true;
						boolArrow3 = false;
						boolArrow4 = true;
					}

					if (Keyboard::isKeyPressed(Keyboard::Num4))
					{
						boolArrow1 = true;
						boolArrow2 = true;
						boolArrow3 = true;
						boolArrow4 = false;
					}
					if (Keyboard::isKeyPressed(Keyboard::Tab))
					{
						boolQuestion20 = false;
						boolQuestion19 = true;
					}
					break;
				}
			}
		}

		if (!boolQuestion20)
		{
			if (!boolArrow4)
			{
				question.setString("Correct");
				correct10 = false;
			}
			else
			{
				question.setString("Wrong");
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter))
			{

				boolQuestion21 = false;
				boolQuestion20 = true;
			}
		}
		if (!boolQuestion21)
		{
			boolArrow1 = true;
			boolArrow2 = true;
			boolArrow3 = true;
			boolArrow4 = true;
			boolBrands = true;
			boolQuestion = true;
			//checks the correct answers
			if (!correct1)
			{
				intScore++;
				correct1 = true;
			}

			if (!correct2)
			{
				intScore++;
				correct2 = true;
			}

			if (!correct3)
			{
				intScore++;
				correct3 = true;
			}

			if (!correct4)
			{
				intScore++;
				correct4 = true;
			}

			if (!correct5)
			{
				intScore++;
				correct5 = true;
			}

			if (!correct6)
			{
				intScore++;
				correct6 = true;
			}

			if (!correct7)
			{
				intScore++;
				correct7 = true;
			}

			if (!correct8)
			{
				intScore++;
				correct8 = true;
			}

			if (!correct9)
			{
				intScore++;
				correct9 = true;
			}

			if (!correct10)
			{
				intScore++;
				correct10 = true;
			}

			std::stringstream stringScore;
			stringScore << "Score = " << intScore<<"/10";
			textScore.setString(stringScore.str());
			boolScore = false;
		}

		window.clear();
		window.draw(background);

		if (!boolQuestion)
		{
			window.draw(question);
		}

		if (!boolBreads)
		{
			window.draw(spriteBread1);
			window.draw(spriteBread2);
			window.draw(spriteBread3);
			window.draw(spriteBread4);
		}

		if (!boolTowers)
		{
			window.draw(spriteTower1);
			window.draw(spriteEiffelTower);
			window.draw(spriteTower3);
			window.draw(spriteTower4);
		}

		if (!boolFlags)
		{
			window.draw(spriteFlagFrance);
			window.draw(spriteFlag2);
			window.draw(spriteFlag3);
			window.draw(spriteFlag4);
		}

		if (!boolPerfumes)
		{
			window.draw(spriteChanel);
			window.draw(spritePerfume2);
			window.draw(spritePerfume3);
			window.draw(spritePerfume4);
		}

		if (!boolBrands)
		{
			window.draw(spriteBrand1);
			window.draw(spriteBrand2);
			window.draw(spriteBrand3);
			window.draw(spritePaul);
		}

		if (!boolArrow1)
		{
			window.draw(spriteArrow1);
		}
		if (!boolArrow2)
		{
			window.draw(spriteArrow2);
		}
		if (!boolArrow3)
		{
			window.draw(spriteArrow3);
		}
		if (!boolArrow4)
		{
			window.draw(spriteArrow4);
		}

		if (!running)
		{
			window.draw(answer1);
			window.draw(answer2);
		}
		if (!running2)
		{
		window.draw(answer3);
		window.draw(answer4);
		}
		if (!boolScore)
		{
			window.draw(textScore);
		}

			window.display();
		}
		return 0;
}

