#include <string>
#include <iostream>
 
class Layer {
public:	
	unsigned short layerID;
	float diffusion;
	float diffusionRadius;
};

class Tablet {
public:
	unsigned short nLayers;
	Layer* Layer;
	float radius;
};

class Recipe : public Tablet {
public:
	std::string recipeName;
	float pfVolume;
};
 
int main() {
	Recipe *R = new Recipe;
	R -> recipeName = "Cure for Cancer";
	R -> nLayers = 40;
	R -> Layer = new Layer[ R -> nLayers ];
	delete[] R -> Layer;
	delete R;
}