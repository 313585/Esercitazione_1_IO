#include <iostream>
#include <fstream>
#include <iomanip> 

// funzione per mappare i punti tra [-1,2]
double funmap(double x)
{
return (-1.0+((x-1.0)*3.0/4.0));
}

int main()
{
    // aprire il file
	std::ifstream Input("data.txt");
	std::ofstream Output("result.txt");
	// controllare che non dia errori
	if (Input.fail())
	{
		std::cerr<<"file not found"<<std::endl;
		return 1;
	}
	if (Output.fail())
	{
		std::cerr<<"file not found"<<std::endl;
		return 1;
	}
	// leggon solo numeri
	double N;
	double sum=0;
	int i=0;
	double media=0;
	Output<<"#\tN Mean\n";
	while (Input>>N)
	{
		double n=funmap(N); 
		sum += n;
		i++;
		media=sum/i;
		Output<<i<<"\t"<<std::setprecision(16)<<std::scientific<<media<<std::endl;
	}
		
		
		
	
	return 0;
}
