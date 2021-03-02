#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	
	public:
		
		Encomenda(bool prioridade, int peso, int custokg, Cliente Remetente, Cliente Destinatario){
			this->relampago=prioridade;
			this->PESO=peso;
			this->CUSTOkg=custokg;
			this->remetente=Remetente;
			this->dest=Destinatario;
		}
		
		double calcula(){
			
			this->T = this->PESO * this->CUSTOkg;
			
			if(this->relampago){
				
				this->T *= 1.25;
			}
			
			return this->T;
		}
		void print(){

			cout << "[Remetente]" << endl;
			this->remetente.print();
			cout << "[Destinatário]" << endl;
			this->dest.print();
			
			if(!this->relampago){
				cout << "[Encomenda Normal]" << endl;
				cout << "  Peso: " << this->PESO << endl
					<< "  Custo por kg: " << this->CUSTOkg << endl
					<< "  Custo total: " << this->T << endl;
			}
			
			else{
				cout << "[Encomenda Relâmpago]" << endl;
				cout << "  Peso: " << this->PESO << endl
					<< "  Custo por kg: " << this->CUSTOkg << endl
					<< "  Taxa adicional: " << 0.25 << endl
					<< "  Custo total: " << this->T << endl;
				
		}
		bool prioridade(){
			
			return this->relampago;
		}
	
	private:
		
		bool relampago = 0;
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif
