#pragma once
#include <iostream>
using namespace System;

namespace Zoo {

	class Dog {
	protected:
		int value_dog;
	public:
		void add_dog(int kol);
		void print_dog();
		Dog() {
			value_dog = 0;
		}
	};
	class Cat {
	protected:
		int value_cat;
	public:
		void add_cat(int kol);
		void print_cat();
		Cat() {
			value_cat = 0;
		}
	};
	class Rhino {
	protected:
		int value_rhino;
	public:
		void add_rhino(int kol);
		void print_rhino();
		Rhino() {
			value_rhino = 0;
		}
	};
	class Ostrich {
	protected:
		int value_ostrich;
	public:
		void add_ostrich(int kol);
		void print_ostrich();
		Ostrich() {
			value_ostrich = 0;
		}
	};
	class Penguin {
	protected:
		int value_penguin; 
	public:
		void add_penguin(int kol);
		void print_penguin();
		Penguin() {
			value_penguin = 0;
		}
	};
	class Parrot {
	protected:
		int value_parrot;
	public:
		void add_parrot(int kol);
		void print_parrot();
		Parrot() {
			value_parrot = 0;
		}
	};
	class Trout {
	protected:
		int value_trout;
	public:
		void add_trout(int kol);
		void print_trout();
		Trout() {
			value_trout = 0;
		}
	};
	class Salmon {
	protected:
		int value_salmon;
	public:
		void add_salmon(int kol);
		void print_salmon();
		Salmon() {
			value_salmon = 0;
		}
	};
	class Tartle {
	protected:
		int value_tartle;
	public:
		void add_tartle(int kol);
		void print_tartle();
		Tartle() {
			value_tartle = 0;
		}
	};
	class Frog {
	protected:
		int value_frog;
	public:
		void add_frog(int kol);
		void print_frog();
		Frog() {
			value_frog = 0;
		}
	};
	class Mammals:public Dog, public Cat, public Rhino {
	public:
		int value_mammals;
		Mammals() {
			value_mammals = 0;
		}
		void update_mammals() {
			value_mammals = Dog::value_dog + Cat::value_cat + Rhino::value_rhino;
		}
		void print_mammals();
	};
	class Birds :public Ostrich, public Penguin, public Parrot {
	public:
		int value_birds;
		Birds() {
			value_birds = 0;
		}
		void update_birds() {
			value_birds = value_ostrich + value_penguin + value_parrot;
		}
		void print_birds();
	};
	class Fishes :public Trout, public Salmon {
	public:
		int value_fishes;
		Fishes() {
			value_fishes = 0;
		}
		void update_fishes() {
			value_fishes = value_trout + value_salmon;
		}
		void print_fishes();
	};
	class Reptiles:public Tartle{
	public:
		int value_reptiles;
		Reptiles() {
			value_reptiles = 0;
		}
		void update_reptiles() {
			value_reptiles = value_tartle;
		}
		void print_reptiles();
	};
	class  Amphibians :public Frog {
	public:
		int value_amphibians;
		Amphibians() {
			value_amphibians = 0;
		}
		void update_amphibians() {
			value_amphibians = value_frog;
		}
		void print_amphibians();
	};
	class  Warm_blooded :public Mammals, public Birds {
	public:
		int value_warm_blooded;
		Warm_blooded() {
			value_warm_blooded = 0;
		}
		void update_warm_blooded() {
			value_warm_blooded = value_mammals + value_birds;
		}
		void print_warm_blooded();
	};
	class  Cold_blooded :public Fishes, public Reptiles, public Amphibians {
	public:
		int value_cold_blooded;
		Cold_blooded() {
			value_cold_blooded = 0;
		}
		void update_cold_blooded() {
			value_cold_blooded = value_fishes + value_reptiles + value_amphibians;
		}
		void print_cold_blooded();
	};
	class  Vertebrates :public Warm_blooded, public Cold_blooded {
	public:
		int value_vertebrates;
		Vertebrates() {
			value_vertebrates = 0;
		}
		void update_vertebrates() {
			value_vertebrates = value_cold_blooded + value_warm_blooded;
		}
		virtual void print_vertebrates();
	};
	class  Animals :public Vertebrates {
	public:
		int value_animals;
		Animals() {
			value_animals = 0;
		}
		void update_animals() {
			value_animals = value_vertebrates;
		}
		void print_animals();
		void print_vertebrates();
	};

}
