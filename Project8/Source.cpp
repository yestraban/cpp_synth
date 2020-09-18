#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <iostream>
#include <Windows.h>
#include <SFML/Audio.hpp>
#include <stdlib.h>
#include <vector>
#include <string>
#include <chrono>
#include <ctime> 
#include<fstream>

using namespace std;

void menu();

void zapisz(vector <string> lead, string name)
{
	ofstream file(name + ".txt");
	for (int i = 0; i < lead.size(); i++)
	{
		if (lead[i] == " ")
		{
			file << "-"<<endl;
		}
		else
			file << lead[i] << endl;
	}
	cout << "Zapisano w pliku " << name << ".txt";
	Sleep(1000);
	system("CLS");
}

vector<string> otworz(string name)
{
	vector<string> a;
	string b;
	ifstream file(name + ".txt");
	while (file >> b)
	{
		if (b == "-")
			a.push_back(" ");
		else
			a.push_back(b);
	}
	return a;
}

void wyswietl_lead(vector <string> lead)
{
	system("CLS");
	cout << "Tryb kompozycyjny- aby zmieniæ dlugosc nuty uzyj klawiwszy:\n0- osemka \n9- cwiercnuta \n8- polnuta \n"
		<< "aby wyczyscic uzyj klawisza ';' \naby zmazac wcisnij klawisz '-' \naby wyjsc do menu wcisnij '/' \naby zagrac nacisnij 'p'\n"
		<< "domyslne bpm: 60,  aby zmienic bpm wcisnij '=' \naby zapisac wcisnij '[', aby odtworzyc ']'"<<endl<<endl<<endl;
	cout << " ";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << " ";
		if (lead[i] == "c6")
			std::cout << "0";
		else
			if (lead[i] == "cs6")
				cout << "#";
		else
			std::cout << " ";
	}
	std::cout << std::endl << " ";
	for (int i = 0; i < lead.size(); i++) //nice
	{
		if (i % 8 == 0 && i != 0)
			cout << " ";
		if (lead[i] == "b5")
			std::cout << "O";
		else
				cout << " ";
	}
	std::cout << std::endl << " ";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << " ";
		if (lead[i] == "a5")
			std::cout << "0";
		else
			if (lead[i] == "as5")
				cout << "#";
		else
			if (lead[i] == "c6" || lead[i] == "cs6"|| lead[i] == "b5")
				cout << "-";
		else
			std::cout << " ";

	}
	std::cout << std::endl << " ";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << " ";
		if (lead[i] == "g5")
			std::cout << "O";
		else
			if (lead[i] == "gs5") //powinno byæ gs500
				cout << "#";
		else
		std::cout << " ";
	}
	std::cout << std::endl << "|";

	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << "|";
		if (lead[i] == "f5")
			std::cout << "0";
		else
			if (lead[i] == "fs5")
				cout << "#";
		else
		std::cout << "-";
	}
	std::cout << std::endl << "|";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << "|";
		if (lead[i] == "e5")
			std::cout << "O";
		else
		std::cout << " ";
	}
	std::cout << std::endl << "|";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << "|";
		if (lead[i] == "d5")
			std::cout << "0";
		else
			if (lead[i] == "ds5")
				cout << "#";
		else
		std::cout << "-";
	}
	std::cout << std::endl << "|";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << "|";
		if (lead[i] == "c5")
			std::cout << "O";
		else
			if (lead[i] == "cs5")
				cout << "#";
		else
			std::cout << " ";
	}
	std::cout << std::endl << "|";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << "|";
		if (lead[i] == "b4")
			std::cout << "0";
			else
		std::cout << "-";
	}
	std::cout << std::endl << "|";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << "|";
		if (lead[i] == "a4")
			std::cout << "O";
		else
			if (lead[i] == "as4")
				cout << "#";
			else
		std::cout << " ";
	}
	std::cout << std::endl << "|";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << "|";
		if (lead[i] == "g4")
			std::cout << "0";
		else
			if (lead[i] == "gs4")
				cout << "#";
			else
		std::cout << "-";
	}
	std::cout << std::endl << "|";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << "|";
		if (lead[i] == "f4")
			std::cout << "O";
		else
			if (lead[i] == "fs4")
				cout << "#";
			else
		std::cout << " ";
	}
	std::cout << std::endl << "|";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << "|";
		if (lead[i] == "e4")
			std::cout << "O";
		else
		std::cout << "-";
	}
	std::cout << std::endl << " ";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << " ";
		if (lead[i] == "d4")
			std::cout << "O";
		else
			if (lead[i] == "ds4")
				cout << "#";
			else
				std::cout << " ";
	}
	std::cout << std::endl << " ";
	for (int i = 0; i < lead.size(); i++)
	{
		if (i % 8 == 0 && i != 0)
			cout << " ";
		if (lead[i] == "c4")
			std::cout << "0";
		else
			if (lead[i] == "cs4")
				cout << "#";
			else
				std::cout << " ";
	}
	std::cout << std::endl;
}

void live_mode()
{
	cout << "wczytywanie..." << endl;
	bool trigger[25] = { 0 };
	sf::SoundBuffer buffer[25];
	sf::Sound sound[25];

	bool min=false, chordtrigger = false, chordon= true, chordtime=true;

	sf::SoundBuffer chordbuffer[24];
	sf::Sound chord[24];


	if (!chordbuffer[0].loadFromFile("C://Sound/cmaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[0].setBuffer(chordbuffer[0]);

	if (!chordbuffer[1].loadFromFile("C://Sound/csmaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[1].setBuffer(chordbuffer[1]);

	if (!chordbuffer[2].loadFromFile("C://Sound/dmaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[2].setBuffer(chordbuffer[2]);

	if (!chordbuffer[3].loadFromFile("C://Sound/dsmaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[3].setBuffer(chordbuffer[3]);

	if (!chordbuffer[4].loadFromFile("C://Sound/emaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[4].setBuffer(chordbuffer[4]);

	if (!chordbuffer[5].loadFromFile("C://Sound/fmaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[5].setBuffer(chordbuffer[5]);

	if (!chordbuffer[6].loadFromFile("C://Sound/fsmaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[6].setBuffer(chordbuffer[6]);

	if (!chordbuffer[7].loadFromFile("C://Sound/gmaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[7].setBuffer(chordbuffer[7]);

	if (!chordbuffer[8].loadFromFile("C://Sound/gsmaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[8].setBuffer(chordbuffer[8]);

	if (!chordbuffer[9].loadFromFile("C://Sound/amaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[9].setBuffer(chordbuffer[9]);

	if (!chordbuffer[10].loadFromFile("C://Sound/asmaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[10].setBuffer(chordbuffer[10]);

	if (!chordbuffer[11].loadFromFile("C://Sound/bmaj.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[11].setBuffer(chordbuffer[11]);

	if (!chordbuffer[12].loadFromFile("C://Sound/cmin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[12].setBuffer(chordbuffer[12]);

	if (!chordbuffer[13].loadFromFile("C://Sound/csmin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[13].setBuffer(chordbuffer[13]);

	if (!chordbuffer[14].loadFromFile("C://Sound/dmin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[14].setBuffer(chordbuffer[14]);

	if (!chordbuffer[15].loadFromFile("C://Sound/dsmin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[15].setBuffer(chordbuffer[15]);

	if (!chordbuffer[16].loadFromFile("C://Sound/emin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[16].setBuffer(chordbuffer[16]);

	if (!chordbuffer[17].loadFromFile("C://Sound/fmin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[17].setBuffer(chordbuffer[17]);

	if (!chordbuffer[18].loadFromFile("C://Sound/fsmin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[18].setBuffer(chordbuffer[18]);

	if (!chordbuffer[19].loadFromFile("C://Sound/gmin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[19].setBuffer(chordbuffer[19]);

	if (!chordbuffer[20].loadFromFile("C://Sound/gsmin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[20].setBuffer(chordbuffer[20]);

	if (!chordbuffer[21].loadFromFile("C://Sound/amin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[21].setBuffer(chordbuffer[21]);

	if (!chordbuffer[22].loadFromFile("C://Sound/asmin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[22].setBuffer(chordbuffer[22]);

	if (!chordbuffer[23].loadFromFile("C://Sound/bmin.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	chord[23].setBuffer(chordbuffer[23]);




	if (!buffer[0].loadFromFile("C://Sound/c5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[0].setBuffer(buffer[0]);

	if (!buffer[1].loadFromFile("C://Sound/cs5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[1].setBuffer(buffer[1]);

	if (!buffer[2].loadFromFile("C://Sound/d5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[2].setBuffer(buffer[2]);

	if (!buffer[3].loadFromFile("C://Sound/ds5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[3].setBuffer(buffer[3]);

	if (!buffer[4].loadFromFile("C://Sound/e5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[4].setBuffer(buffer[4]);

	if (!buffer[5].loadFromFile("C://Sound/f5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[5].setBuffer(buffer[5]);

	if (!buffer[6].loadFromFile("C://Sound/fs5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[6].setBuffer(buffer[6]);

	if (!buffer[7].loadFromFile("C://Sound/g5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[7].setBuffer(buffer[7]);

	if (!buffer[8].loadFromFile("C://Sound/gs5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[8].setBuffer(buffer[8]);

	if (!buffer[9].loadFromFile("C://Sound/a5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[9].setBuffer(buffer[9]);

	if (!buffer[10].loadFromFile("C://Sound/as5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[10].setBuffer(buffer[10]);

	if (!buffer[11].loadFromFile("C://Sound/b5.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[11].setBuffer(buffer[11]);

	if (!buffer[12].loadFromFile("C://Sound/c6.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[12].setBuffer(buffer[12]);

	if (!buffer[13].loadFromFile("C://Sound/c4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[13].setBuffer(buffer[13]);

	if (!buffer[14].loadFromFile("C://Sound/cs4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[14].setBuffer(buffer[14]);

	if (!buffer[15].loadFromFile("C://Sound/d4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[15].setBuffer(buffer[15]);

	if (!buffer[16].loadFromFile("C://Sound/ds4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[16].setBuffer(buffer[16]);

	if (!buffer[17].loadFromFile("C://Sound/e4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[17].setBuffer(buffer[17]);

	if (!buffer[18].loadFromFile("C://Sound/f4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[18].setBuffer(buffer[18]);

	if (!buffer[19].loadFromFile("C://Sound/fs4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[19].setBuffer(buffer[19]);

	if (!buffer[20].loadFromFile("C://Sound/g4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[20].setBuffer(buffer[20]);

	if (!buffer[21].loadFromFile("C://Sound/gs4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[21].setBuffer(buffer[21]);

	if (!buffer[22].loadFromFile("C://Sound/a4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[22].setBuffer(buffer[22]);

	if (!buffer[23].loadFromFile("C://Sound/as4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[23].setBuffer(buffer[23]);

	if (!buffer[24].loadFromFile("C://Sound/b4.WAV"))
	{
		std::cout << "err1";
		system("Pause");
	}
	sound[24].setBuffer(buffer[24]);


	auto start = std::chrono::system_clock::now();

	cout << "gotowe";
	Sleep(500);
	system("CLS");
	cout << "Major";
	while (true)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
		{
			system("CLS");
			min = !min;
			if (min == true)
				cout << "Minor";
			else
				cout << "Major";
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
			{ }
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tab))
		{
			chordon = !chordon;
			while (sf::Keyboard::isKeyPressed(sf::Keyboard::Tab))
			{ }
		}
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> elapsed_seconds = end - start;
		if (elapsed_seconds.count() > 2)
		{
			chordtime = true;
		}
		else
			chordtime = false;

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && trigger[13] == false)
		{
			sound[13].play();
			if(chordtrigger==false && chordon==true && chordtime==true)
				if (min == false)
				{
					chord[0].play();
					chordtrigger = true;
					start = std::chrono::system_clock::now();
					chordtime = false;
				}
				else
				{
					chord[12].play();
					chordtrigger = true;
					start = std::chrono::system_clock::now();
					chordtime = false;
				}

			trigger[13] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && trigger[14] == false)
		{
			sound[14].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
				if (min == false)
				{
					chord[1].play();
					chordtrigger = true;
					start = std::chrono::system_clock::now();
					chordtime = false;
				}
				else
				{
					chord[13].play();
					chordtrigger = true;
					start = std::chrono::system_clock::now();
					chordtime = false;
				}

			trigger[14] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::X) && trigger[15] == false)
		{
			sound[15].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
				if (min == false)
				{
					chord[2].play();
					chordtrigger = true;
					start = std::chrono::system_clock::now();
					chordtime = false;
				}
				else
				{
					chord[14].play();
					chordtrigger = true;
					start = std::chrono::system_clock::now();
					chordtime = false;
				}

			trigger[15] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && trigger[16] == false)
		{
			sound[16].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
				if (min == false)
				{
					chord[3].play();
					chordtrigger = true;
					start = std::chrono::system_clock::now();
					chordtime = false;
				}
				else
				{
					chord[15].play();
					chordtrigger = true;
					start = std::chrono::system_clock::now();
					chordtime = false;
				}

			trigger[16] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::C) && trigger[17] == false)
		{
			sound[17].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[4].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[16].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[17] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::V) && trigger[18] == false)
		{
			sound[18].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[5].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[17].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}

			trigger[18] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::G) && trigger[19] == false)
		{
			sound[19].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[6].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[18].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[19] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::B) && trigger[20] == false)
		{
			sound[20].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[7].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[19].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[20] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::H) && trigger[21] == false)
		{
			sound[21].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[8].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[20].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[21] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::N) && trigger[22] == false)
		{
			sound[22].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[9].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[21].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[22] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::J) && trigger[23] == false)
		{
			sound[23].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[10].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[22].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[23] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::M) && trigger[24] == false)
		{
			sound[24].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[11].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[23].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[24] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Comma) && trigger[0] == false)
		{
			sound[0].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[0].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[12].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[0] = true;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q) && trigger[0] == false)
		{
			sound[0].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[0].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[12].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[0] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2) && trigger[1] == false)
		{
			sound[1].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[1].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[13].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[1] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && trigger[2] == false)
		{
			sound[2].play(); 
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[2].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[14].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[2] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3) && trigger[3] == false)
		{
			sound[3].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[3].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[15].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[3] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) && trigger[4] == false)
		{
			sound[4].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[4].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[16].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[4] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::R) && trigger[5] == false)
		{
			sound[5].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[5].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[17].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[5] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5) && trigger[6] == false)
		{
			sound[6].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[6].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[18].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[6] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::T) && trigger[7] == false)
		{
			sound[7].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[7].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[19].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[7] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6) && trigger[8] == false)
		{
			sound[8].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[8].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[20].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[8] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y) && trigger[9] == false)
		{
			sound[9].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[9].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[21].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[9] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7) && trigger[10] == false)
		{
			sound[10].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[10].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[22].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[10] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::U) && trigger[11] == false)
		{
			sound[11].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[11].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[23].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[11] = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::I) && trigger[12] == false)
		{
			sound[12].play();
			if (chordtrigger == false && chordon == true && chordtime == true)
			if (min == false)
			{
				chord[0].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			else
			{
				chord[12].play();
				chordtrigger = true;
				start = std::chrono::system_clock::now();
				chordtime = false;
			}
			trigger[12] = true;
		}

		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
		{
			sound[13].stop();
			trigger[13] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			sound[14].stop();
			trigger[14] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::X))
		{
			sound[15].stop();
			trigger[15] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			sound[16].stop();
			trigger[16] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			sound[17].stop();
			trigger[17] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::V))
		{
			sound[18].stop();
			trigger[18] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::G))
		{
			sound[19].stop();
			trigger[19] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::B))
		{
			sound[20].stop();
			trigger[20] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::H))
		{
			sound[21].stop();
			trigger[21] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::N))
		{
			sound[22].stop();
			trigger[22] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::J))
		{
			sound[23].stop();
			trigger[23] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::M))
		{
			sound[24].stop();
			trigger[24] = false;
		}

		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Q) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Comma))
		{
			sound[0].stop();
			trigger[0] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
		{
			sound[1].stop();
			trigger[1] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			sound[2].stop();
			trigger[2] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
		{
			sound[3].stop();
			trigger[3] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::E))
		{
			sound[4].stop();
			trigger[4] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::R))
		{
			sound[5].stop();
			trigger[5] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
		{
			sound[6].stop();
			trigger[6] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::T))
		{
			sound[7].stop();
			trigger[7] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
		{
			sound[8].stop();
			trigger[8] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
		{
			sound[9].stop();
			trigger[9] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
		{
			sound[10].stop();
			trigger[10] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::U))
		{
			sound[11].stop();
			trigger[11] = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::I))
		{
			sound[12].stop();
			trigger[12] = false;
		}

		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Q)
			&& !sf::Keyboard::isKeyPressed(sf::Keyboard::Comma)&& !sf::Keyboard::isKeyPressed(sf::Keyboard::I))
		{
			chord[0].stop();
			chord[12].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::S) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
		{
			chord[1].stop();
			chord[13].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::X) && !sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			chord[2].stop();
			chord[14].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::D) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
		{
			chord[3].stop();
			chord[15].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::C) && !sf::Keyboard::isKeyPressed(sf::Keyboard::E))
		{
			chord[4].stop();
			chord[16].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::V) && !sf::Keyboard::isKeyPressed(sf::Keyboard::R))
		{
			chord[5].stop();
			chord[17].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::G) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
		{
			chord[6].stop();
			chord[18].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::B) && !sf::Keyboard::isKeyPressed(sf::Keyboard::T))
		{
			chord[7].stop();
			chord[19].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::H) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
		{
			chord[8].stop();
			chord[20].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::N) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Y))
		{
			chord[9].stop();
			chord[21].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::J) && !sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
		{
			chord[10].stop();
			chord[22].stop();
			chordtrigger = false;
		}
		if (!sf::Keyboard::isKeyPressed(sf::Keyboard::M) && !sf::Keyboard::isKeyPressed(sf::Keyboard::U))
		{
			chord[11].stop();
			chord[23].stop();
			chordtrigger = false;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			menu();
	}
}

void play_lead(std::vector <std::string> lead, float bpm);

void comp_mode()
{
	std::cout << "Tryb kompozycyjny- aby zmieniæ dlugosc nuty uzyj klawiwszy:\n 0- osemka \n9- cwiercnuta \n8- polnuta \n"
		<< "aby wyczyscic uzyj klawisza ';' \naby zmazac wcisnij klawisz '-' \naby wyjsc do menu wcisnij '/' \naby zagrac nacisnij 'p'\n"
		<< "domyslne bpm: 60,  aby zmienic bpm wcisnij '=' \naby zapisac wcisnij '[', aby odtworzyc ']'";
	char flush = getchar();
	int length= 2, note;
	float bpm = 60;
	string name;
	std::vector <std::string> lead;
	while (true)
	{
		note = getchar();

		if (note == ']')
		{
			system("CLS");
			cout << "podaj nazwe pliku do odtworzenia" << endl;
			cin >> name;
			lead = otworz(name);
		}
		if (note == '[')
		{
			system("CLS");
			cout << "podaj nazwe pliku do zapisania" << endl;
			cin >> name;
			zapisz(lead, name);
		}
		if (note == '0')
			length = 1;
		else
		if (note == '9')
			length = 2;
		else
		if (note == '8')
			length = 4;
		else
		if (note == 'q')
		{
			for (int k = 0; k < length; k++)
			{
				lead.push_back("c5");
			}

		}
		else
			if (note == '2')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("cs5");
				}
			}
		else
		if (note == 'w')
		{
			for (int k = 0; k < length; k++)
			{
				lead.push_back("d5");
			}
		}
		else
			if (note == '3')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("ds5");
				}
			}
		else
		if (note == 'e')
		{
			for (int k = 0; k < length; k++)
			{
				lead.push_back("e5");
			}
		}
		else
			if (note == 'r')
		{
			for (int k = 0; k < length; k++)
			{
				lead.push_back("f5");
			}
		}
			else
				if (note == '5')
				{
					for (int k = 0; k < length; k++)
					{
						lead.push_back("fs5");
					}
				}
		else
			if (note == 't')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("g5");
				}
			}
			else
				if (note == '6')
				{
					for (int k = 0; k < length; k++)
					{
						lead.push_back("gs5");
					}
				}
		else
			if (note == 'y')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("a5");
				}
			}
			else
				if (note == '7')
				{
					for (int k = 0; k < length; k++)
					{
						lead.push_back("as5");
					}
				}
		else
			if (note == 'u')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("b5");
				}
			}
		else
			if (note == 'i')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("c6");
				}
			}
		else
			if (note == ' ')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back(" ");
				}
			}
		else
			if (note == 'z')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("c4");
				}
			}
		else
			if (note == 's')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("cs4");
				}
			}
		else
			if (note == 'x')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("d4");
				}
			}
		else
			if (note == 'd')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("ds4");
				}
			}
		else
			if (note == 'c')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("e4");
				}
			}
		else
			if (note == 'v')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("f4");
				}
			}
		else
			if (note == 'g')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("fs4");
				}
			}
		else
			if (note == 'b')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("g4");
				}
			}
		else
			if (note == 'h')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("gs4");
				}
			}
		else
			if (note == 'n')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("a4");
				}
			}
		else
			if (note == 'j')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("as4");
				}
			}
		else
			if (note == 'm')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("b4");
				}
			}
		else
			if (note == ',')
			{
				for (int k = 0; k < length; k++)
				{
					lead.push_back("c5");
				}
			}
		else
			if(note==';')
			{
				int ghl;
				system("CLS");
				cout << "czy na pewno chcesz wyczyscic? \nTak-->y\nNie-->n\n";
				ghl = getchar();
				ghl = getchar();
				while (ghl != 'y' && ghl != 'n')
					ghl = getchar();
				if (ghl == 'y')
					lead.clear();
			}
		else
			if (note == '-')
			{ 
				for(int i=0; i<length; i++)
				lead.pop_back();
			}
		else
			if(note=='p')
				play_lead(lead, bpm);
		else
			if (note=='=')
			{
				system("CLS");
				cout << "wpisz nowe bpm" << endl;
				cin >> bpm;
				system("CLS");
			}
		wyswietl_lead(lead);
		cout << bpm << endl;
		if(note=='/')
		{
			menu();
		}
	}
	

}


int main()
{
		menu();
	
	return 0;
}

void play_lead(std::vector <std::string> lead, float bpm)
{
	float delay=10;
	delay = (bpm / 60);
	delay = 1 / delay;
	delay /= 8;
	delay *= 1000;
	bool trigger[25] = { 0 };
	sf::SoundBuffer buffer[25];
	sf::Sound sound[25];
	for  (int i = 0; i < lead.size(); i++)
	{
		if (lead[i] == "c4"&&trigger[13] == false)
		{
			if (!buffer[13].loadFromFile("C://Sound/c4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[13].setBuffer(buffer[13]);
			sound[13].play();
			trigger[13] = true;
		}
		if (lead[i] != "c4")
		{
			sound[13].stop();
			trigger[13] = false;
		}
		if (lead[i] == "cs4"&&trigger[14] == false)
		{
			if (!buffer[14].loadFromFile("C://Sound/cs4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[14].setBuffer(buffer[14]);
			sound[14].play();
			trigger[14] = true;
		}
		if (lead[i] != "cs4")
		{
			sound[14].stop();
			trigger[14] = false;
		}
		if (lead[i] == "d4"&&trigger[15] == false)
		{
			if (!buffer[15].loadFromFile("C://Sound/d4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[15].setBuffer(buffer[15]);
			sound[15].play();
			trigger[15] = true;
		}
		if (lead[i] != "d4")
		{
			sound[15].stop();
			trigger[15] = false;
		}

		if (lead[i] == "ds4"&&trigger[16] == false)
		{
			if (!buffer[16].loadFromFile("C://Sound/ds4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[16].setBuffer(buffer[16]);
			sound[16].play();
			trigger[16] = true;
		}
		if (lead[i] != "ds4")
		{
			sound[16].stop();
			trigger[16] = false;
		}
		if (lead[i] == "e4"&&trigger[17] == false)
		{
			if (!buffer[17].loadFromFile("C://Sound/e4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[17].setBuffer(buffer[17]);
			sound[17].play();
			trigger[17] = true;
		}
		if (lead[i] != "e4")
		{
			sound[17].stop();
			trigger[17] = false;
		}
		if (lead[i] == "f4"&&trigger[18] == false)
		{
			if (!buffer[18].loadFromFile("C://Sound/f4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[18].setBuffer(buffer[18]);
			sound[18].play();
			trigger[18] = true;
		}
		if (lead[i] != "f4")
		{
			sound[18].stop();
			trigger[18] = false;
		}
		if (lead[i] == "fs4"&&trigger[19] == false)
		{
			if (!buffer[19].loadFromFile("C://Sound/fs4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[19].setBuffer(buffer[19]);
			sound[19].play();
			trigger[19] = true;
		}
		if (lead[i] != "fs4")
		{
			sound[19].stop();
			trigger[19] = false;
		}
		if (lead[i] == "g4"&&trigger[20] == false)
		{
			if (!buffer[20].loadFromFile("C://Sound/g4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[20].setBuffer(buffer[20]);
			sound[20].play();
			trigger[20] = true;
		}
		if (lead[i] != "g4")
		{
			sound[20].stop();
			trigger[20] = false;
		}
		if (lead[i] == "gs4"&&trigger[21] == false)
		{
			if (!buffer[21].loadFromFile("C://Sound/gs4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[21].setBuffer(buffer[21]);
			sound[21].play();
			trigger[21] = true;
		}
		if (lead[i] != "gs4")
		{
			sound[21].stop();
			trigger[21] = false;
		}
		if (lead[i] == "a4"&&trigger[22] == false)
		{
			if (!buffer[22].loadFromFile("C://Sound/a4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[22].setBuffer(buffer[22]);
			sound[22].play();
			trigger[22] = true;
		}
		if (lead[i] != "a4")
		{
			sound[22].stop();
			trigger[22] = false;
		}
		if (lead[i] == "as4"&&trigger[23] == false)
		{
			if (!buffer[23].loadFromFile("C://Sound/as4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[23].setBuffer(buffer[23]);
			sound[23].play();
			trigger[23] = true;
		}
		if (lead[i] != "as4")
		{
			sound[23].stop();
			trigger[23] = false;
		}
		if (lead[i] == "b4"&&trigger[24] == false)
		{
			if (!buffer[24].loadFromFile("C://Sound/b4.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[24].setBuffer(buffer[24]);
			sound[24].play();
			trigger[24] = true;
		}
		if (lead[i] != "b4")
		{
			sound[24].stop();
			trigger[24] = false;
		}


		if (lead[i] == "c5"&&trigger[0]==false)
		{
			if (!buffer[0].loadFromFile("C://Sound/c5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[0].setBuffer(buffer[0]);
			sound[0].play();
			trigger[0] = true;
		}
		if (lead[i] != "c5")
		{
			sound[0].stop();
			trigger[0] = false;
		}
			

		if (lead[i] == "cs5"&&trigger[1] == false)
		{
			if (!buffer[1].loadFromFile("C://Sound/cs5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[1].setBuffer(buffer[1]);
			sound[1].play();
			trigger[1] = true;
		}
		if (lead[i] != "cs5")
		{
			sound[1].stop();
			trigger[1] = false;
		}
		
		if (lead[i] == "d5"&&trigger[2] == false)
		{
			if (!buffer[2].loadFromFile("C://Sound/d5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}
			sound[2].setBuffer(buffer[2]);
			sound[2].play();
			trigger[2] = true;
		}
		if (lead[i] != "d5")
		{
			sound[2].stop();
			trigger[2] = false;
		}

		if (lead[i] == "ds5"&&trigger[3] == false)
		{
			if (!buffer[3].loadFromFile("C://Sound/ds5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[3].setBuffer(buffer[3]);
			sound[3].play();
			trigger[3] = true;
		}
		if (lead[i] != "ds5")
		{
			sound[3].stop();
			trigger[3] = false;
		}

		if (lead[i] == "e5"&&trigger[4] == false)
		{
			if (!buffer[4].loadFromFile("C://Sound/e5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[4].setBuffer(buffer[4]);
			sound[4].play();
			trigger[4] = true;
		}
		if (lead[i] != "e5")
		{
			sound[4].stop();
			trigger[4] = false;
		}

		if (lead[i] == "f5"&&trigger[5] == false)
		{
			if (!buffer[5].loadFromFile("C://Sound/f5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[5].setBuffer(buffer[5]);
			sound[5].play();
			trigger[5] = true;
		}
		if (lead[i] != "f5")
		{
			sound[5].stop();
			trigger[5] = false;
		}

		if (lead[i] == "fs5"&&trigger[6] == false)
		{
			if (!buffer[6].loadFromFile("C://Sound/fs5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[6].setBuffer(buffer[6]);
			sound[6].play();
			trigger[6] = true;
		}
		if (lead[i] != "fs5")
		{
			sound[6].stop();
			trigger[6] = false;
		}

		if (lead[i] == "g5"&&trigger[7] == false)
		{
			if (!buffer[7].loadFromFile("C://Sound/g5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[7].setBuffer(buffer[7]);
			sound[7].play();
			trigger[7] = true;
		}
		if (lead[i] != "g5")
		{
			sound[7].stop();
			trigger[7] = false;
		}

		if (lead[i] == "gs5"&&trigger[8] == false)
		{
			if (!buffer[8].loadFromFile("C://Sound/gs5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[8].setBuffer(buffer[8]);
			sound[8].play();
			trigger[8] = true;
		}
		if (lead[i] != "gs5")
		{
			sound[8].stop();
			trigger[8] = false;
		}

		if (lead[i] == "a5"&&trigger[9] == false)
		{
			if (!buffer[9].loadFromFile("C://Sound/a5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[9].setBuffer(buffer[9]);
			sound[9].play();
			trigger[9] = true;
		}
		if (lead[i] != "a5")
		{
			sound[9].stop();
			trigger[9] = false;
		}

		if (lead[i] == "as5"&&trigger[10] == false)
		{
			if (!buffer[10].loadFromFile("C://Sound/as5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[10].setBuffer(buffer[10]);
			sound[10].play();
			trigger[10] = true;
		}
		if (lead[i] != "as5")
		{
			sound[10].stop();
			trigger[10] = false;
		}

		if (lead[i] == "b5"&&trigger[11] == false)
		{
			if (!buffer[11].loadFromFile("C://Sound/b5.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[11].setBuffer(buffer[11]);
			sound[11].play();
			trigger[11] = true;
		}
		if (lead[i] != "b5")
		{
			sound[11].stop();
			trigger[11] = false;
		}

		if (lead[i] == "c6"&&trigger[12] == false)
		{
			if (!buffer[12].loadFromFile("C://Sound/c6.WAV"))
			{
				std::cout << "err1";
				system("Pause");
			}

			sound[12].setBuffer(buffer[12]);
			sound[12].play();
			trigger[12] = true;
		}
		if (lead[i] != "c6")
		{
			sound[12].stop();
			trigger[12] = false;
		}

		int d = int(delay);
		Sleep(d);
	}
}

void menu()
{
	int mode = 0, menu = 1;
	std::cout << "Wybierz tryb: \n 1. TRYB LIVE <-- \n 2. TRYB KOMPOZYCYJNY\n";

	while (mode == 0)
	{
		if (menu == 1)
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{
				system("CLS");
				menu = 2;
				std::cout << "Wybierz tryb: \n 1. TRYB LIVE \n 2. TRYB KOMPOZYCYJNY <--\n";
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
			{
				mode = menu;
				system("CLS");
			}

		}
		else
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{
				system("CLS");
				menu = 1;
				std::cout << "Wybierz tryb: \n 1. TRYB LIVE <--\n 2. TRYB KOMPOZYCYJNY\n ";
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
			{
				mode = menu;
				system("CLS");
			}
		}

		switch (mode)
		{
		case 1:
		{
			live_mode();
			mode = 0;
		};
		case 2:
		{
			comp_mode();
			mode = 0;
		};
		}

	}

}
