#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdio.h>

using namespace std;

class Worker{
	protected:
		string surname;
		string position;
		int  experience;
		string sex;
		int age;
		string children;
		int k_children;
		int salary;
		int nom_locomotive;
		int nom_brigade;
		string manag_department;
		string med_review;
	public:
		Worker(){}

		Worker(string surname,string position,int  experience,string sex,	int age, string children,int k_children, int salary){
		this->surname=surname;
		this->position=position;
		this->experience=experience;
		this->sex=sex;
		this->age=age;
		this->children=children;
		this->k_children=k_children;
		this->salary=salary;
		}

		void Print_worker(){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";

		}
		void Print_chief_driver(){
		    if(position.compare("chief_driver")==0 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
        void Print_chief_repair(){
		    if(position.compare("chief_repair")==0 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
        void Print_chief_dispatcher(){
		    if(position.compare("chief_dispatc")==0){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
        void Print_chief_cashier(){
		    if(position.compare("chief_cashier")==0){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}

		//Працівники у відділах
		void Print_all_driver(){
		    if(position.compare("chief_driver")==0 | position.compare("driver")==0 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
        void Print_all_repair(){
		    if(position.compare("chief_repair")==0 | position.compare("repair")==0  ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
        void Print_all_dispatcher(){
		    if(position.compare("chief_dispatc")==0 | position.compare("dispatcher")==0 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
        void Print_all_cashier(){
		    if(position.compare("chief_cashier")==0 | position.compare("cashier")==0 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}

		void Print_worker_sex_male(){
		    if(sex.compare("male")==0 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }
		}
		void Print_worker_sex_female(){
		    if(sex.compare("female")==0 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }
		}

		//Year experience
		void Print_worker_experience_5(){
		    if(experience==5){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }
		}
		void Print_worker_experience_10(){
		    if(experience==10){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
		void Print_worker_experience_15(){
		    if(experience==15){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
		//Worker sge
		void Print_worker_age_30(){
		    if(age==30 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
		void Print_worker_age_35(){
		    if(age==35 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
		void Print_worker_age_40(){
		    if(age==40 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
		void Print_worker_age_45(){
		    if(age==45 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
            }

		}
		void Print_worker_age_50(){
		    if(age==50 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}

		//Salary worker
		void Print_worker_salary_6000(){
		    if(salary==6000 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
		void Print_worker_salary_8000(){
		    if(salary==8000 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
		void Print_worker_salary_10000(){
		    if(salary==10000 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}
		void Print_worker_salary_12000(){
		    if(salary==12000 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
            }

		}
		void Print_worker_salary_14000(){
		    if(salary==14000 ){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
                }

		}


		//Children
		 void Print_worker_children_true(){
        		if((children.compare("true"))==0){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
			  	}
        }
         void Print_worker_children_false(){
        		if((children.compare("false"))==0){
		    cout<<surname<<"\t  "<<position<<"\t   "<<experience<<"\t    "<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"";
		    cout<<"\n________________________________________________________________________________\n";
			  	}
        }

		~Worker(){}
};
class Driver:public Worker{
    public:
    Driver(	string surname,string position,int  experience,string sex,	int age, string children,int k_children, int salary,string med_review){
		this->surname=surname;
		this->position=position;
		this->experience=experience;
		this->sex=sex;
		this->age=age;
		this->children=children;
		this->k_children=k_children;
		this->salary=salary;
        this->med_review=med_review;

		}

    void Driver_med_review_true(){
	    if((med_review.compare("true"))==0){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
	    }
	}
	void Driver_med_review_false(){
	    if((med_review.compare("false"))==0){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
	    }
	}

	//sex
	void Driver_sex_male(){
	    if((sex.compare("male"))==0){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
	    }
	}
	void Driver_sex_female(){
	    if((sex.compare("female"))==0){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
	    }
	}

	//age driver
    void Print_driver_age_30(){
        		if(age==30){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
			  	}
        }
    void Print_driver_age_40(){
        		if(age==40){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
			  	}
        }
    void Print_driver_age_45(){
        		if(age==45){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
			  	}
        }
    void Print_driver_age_50(){
        		if(age==50){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
			  	}
    }

    // salary driver
    void Print_driver_salary_8000(){
        		if(salary==8000){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
			  	}
        }
    void Print_driver_salary_9000(){
        		if(salary==9000){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
			  	}
        }
    void Print_driver_salary_10000(){
        		if(salary==10000){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
			  	}
        }
    void Print_driver_salary_12000(){
        		if(salary==12000){
		    cout<<surname<<"\t  "<<position<<"\t"<<experience<<"\t"<<sex<<"\t"<<age<<"\t"<<children<<"\t"<<k_children<<"\t"<<salary<<"\t"<<med_review<<"";
            cout<<"\n________________________________________________________________________________\n";
			  	}
        }

};

class Locomotive{
    string name_locomotive;
	string availabiliyu_station;
	string chas_prub;
	int k_trip;

	string tech_review;
	string repair; //відправлених у ремонт
	int k_route_to_repair;
	int k_repair;
	int age_locomotive;
	public:

	Locomotive( string name_locomotive,string availabiliyu_station,string chas_prub,int k_trip,string tech_review,string repair,int k_repair,int k_route_to_repair,int age_locomotive){
        this->name_locomotive=name_locomotive;
		this->availabiliyu_station=availabiliyu_station;
		this->chas_prub=chas_prub;
		this->k_trip=k_trip;
		this->tech_review=tech_review;
		this->repair=repair;
		this->k_repair=k_repair;
        this->k_route_to_repair=k_route_to_repair;
		this->age_locomotive=age_locomotive;
	}

	//Приписаних до залізничної станції
    void Print_locomotive_availabiliyu_true(){
        		if((availabiliyu_station.compare("true"))==0){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t "<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_availabiliyu_false(){
        		if((availabiliyu_station.compare("false"))==0){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t "<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }

   //За часом прибуття
    void Print_locomotive_time_11_13(){
        		if((chas_prub.compare("11:13"))==0){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_time_15_16(){
        		if((chas_prub.compare("15:16"))==0){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
        void Print_locomotive_time_17_23(){
        		if((chas_prub.compare("17:23"))==0){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }

    //За кількістю скоєних маршрутів
    void Print_locomotive_k_route_1200(){
        		if(k_trip==1200){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_k_route_2100(){
        		if(k_trip==2100){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_k_route_1000(){
        		if(k_trip==1000){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
    }

    //Що пройшли плановий техогляд або або не пройшли
    void Print_locomotive_tech_view_true(){
        		if((tech_review.compare("true"))==0){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_tech_view_false(){
        		if((tech_review.compare("false"))==0){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    //Відправлених у ремонт
      void Print_locomotive_repair_true(){
        		if((repair.compare("true"))==0){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
      void Print_locomotive_repair_false(){
        		if((repair.compare("false"))==0){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    //Ремонтованих вказане число раз
    void Print_locomotive_k_repair_30(){
        		if(k_repair==30){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_k_repair_45(){
        		if(k_repair==45){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_k_repair_20(){
        		if(k_repair==20){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
    }

    //Кількістю скоєних рейсів до ремонту
    void Print_locomotive_k_route_to_repair_340(){
        		if(k_route_to_repair==340){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_k_route_to_repair_370(){
        		if(k_route_to_repair==370){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_k_route_to_repair_467(){
        		if(k_route_to_repair==467){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
    }

    //За віком локомотива
    void Print_locomotive_age_34(){
        		if(age_locomotive==34){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_age_20(){
        		if(age_locomotive==20){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
        }
    void Print_locomotive_age_59(){
        		if(age_locomotive==59){
		    		cout<<name_locomotive<<"\t"<<availabiliyu_station<<"\t"<<chas_prub<<"\t"<<k_trip<<"\t"<<tech_review<<"\t"<<repair<<"\t"<<k_repair<<"\t"<<k_route_to_repair<<"\t"<<age_locomotive<<"";
		    		cout<<"\n____________________________________________________________________________\n";
			  	}
    }

	~Locomotive(){}
};

class Train{
	string nom_train;
    string route_train;
    int time_trip;
    int cost_ticket;

    public:
    	Train(string nom_train,string route_train,int time_trip,int cost_ticket){
    		this->nom_train=nom_train;
			this->route_train=route_train;
			this->time_trip=time_trip;
			this->cost_ticket=cost_ticket;
		}

		void Print_train(){
			cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"\n";
        }
        void Print_typeLK(){
        		if((route_train.compare("LK"))==0){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";
			  	}
				  	}
		void Print_typeKL(){
        		if((route_train.compare("KL"))==0){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";
			  	}
		}
        void Print_typeKT(){
        		if((route_train.compare("KT"))==0){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";
			  	}
				  	}
		void Print_typeTL(){
        		if((route_train.compare("TL"))==0){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";
			  	}

		}


		void Print_duration8(){
        		if(time_trip==8){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";

			  	}
				  	}
		void Print_duration10(){
        		if(time_trip==10){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";

			  	}
		}
        void Print_duration11(){
        		if(time_trip==11){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";

			  	}
        }
        void Print_duration12(){
        		if(time_trip==12){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";

			  	}
        }


        void Print_cost160(){
        		if(cost_ticket==160){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";

			  	}
				  	}
		void Print_cost180(){
        		if(cost_ticket==180){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";
			  	}
		}
        void Print_cost190(){
        		if(cost_ticket==190){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";
			  	}
        }
        void Print_cost_220(){
        		if(cost_ticket==220){
		    		cout<<nom_train<<"\t"<<route_train<<"\t"<<time_trip<<"\t"<<cost_ticket<<"";
		    		cout<<"\n______________________________\n";
        		}
        }
};

class Type_trip{
    string name_train;
    string type_train;
	string route_trip;
	int k_return_ticket;
	public:
		Type_trip(){
		}
		Type_trip(string name_train,string  route_trip,string type_train,int k_return_ticket){
			this->name_train=name_train;
            this->route_trip=route_trip;
            this->type_train=type_train;
            this->k_return_ticket=k_return_ticket;

		}
		Type_trip(string name_train,string  route_trip,string type_train){
			this->name_train=name_train;
            this->route_trip=route_trip;
            this->type_train=type_train;

		}
		string get_route_trip(string route_trip){
			return route_trip;
		}
		int get_k_return_ticket(int k_return_ticket){
			return k_return_ticket;
		}
        void Print_typeLK(){
            if((type_train.compare("LK"))==0){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"\t"<<k_return_ticket<<"";
		    		cout<<"\n________________________________________\n";
            }
        }
		void Print_typeKL(){
        		if((type_train.compare("KL"))==0){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"\t"<<k_return_ticket<<"";
		    		cout<<"\n________________________________________\n";
			  	}
		}
        void Print_typeKT(){
        		if((type_train.compare("KT"))==0){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"\t"<<k_return_ticket<<"";
		    		cout<<"\n________________________________________\n";
			  	}
				  	}
		void Print_typeTL(){



        		if((type_train.compare("TL"))==0){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"\t"<<k_return_ticket<<"";
		    		cout<<"\n________________________________________\n";
			  	}
		}

		void Print_typeLK_only(){
            if((type_train.compare("LK"))==0){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"";
		    		cout<<"\n______________________________\n";
            }
        }
		void Print_typeKL_only(){
        		if((type_train.compare("KL"))==0){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"";
		    		cout<<"\n______________________________\n";
			  	}
		}
        void Print_typeKT_only(){
        		if((type_train.compare("KT"))==0){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"";
		    		cout<<"\n______________________________\n";
			  	}
				  	}
		void Print_typeTL_only(){
        		if((type_train.compare("TL"))==0){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"";
		    		cout<<"\n______________________________\n";
			  	}
		}


		void Print_type_ticket_30(){
            if(k_return_ticket==30){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"\t"<<k_return_ticket<<"";
		    		cout<<"\n________________________________________\n";
            }
        }
		void Print_type_ticket_35(){
        		if(k_return_ticket==35){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"\t"<<k_return_ticket<<"";
		    		cout<<"\n________________________________________\n";
			  	}
		}
        void Print_type_ticket_40(){
        		if(k_return_ticket==40){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"\t"<<k_return_ticket<<"";
		    		cout<<"\n________________________________________\n";
			  	}
				  	}
        void Print_type_ticket_45(){
        		if(k_return_ticket==45){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"\t"<<k_return_ticket<<"";
		    		cout<<"\n________________________________________\n";
			  	}
				  	}
		void Print_type_ticket_50(){
        		if(k_return_ticket==50){
		    		cout<<name_train<<"\t"<<route_trip<<"\t"<<type_train<<"\t"<<k_return_ticket<<"";
		    		cout<<"\n________________________________________\n";
			  	}

		}

		~Type_trip(){
		}
};

class Ticket{
	protected:
	    string nom_ticket;
	    string type_ticket;
       	string data_ticket;
		string route_ticket;
        int duration_ticket;
		int cost_ticket;


	public:
		Ticket(){}
		Ticket(string nom_ticket,string type_ticket,string data_ticket,string route_ticket){
		    this->nom_ticket=nom_ticket;
			this->type_ticket=type_ticket;
			this->route_ticket=route_ticket;
			this->data_ticket=data_ticket;
		}
		Ticket(string nom_ticket,string type_ticket,string route_ticket,int duration_ticket,int cost_ticket){
		    this->nom_ticket=nom_ticket;
			this->type_ticket=type_ticket;
			this->route_ticket=route_ticket;
            this->duration_ticket=duration_ticket;
			this->cost_ticket=cost_ticket;
		}

		void Print_Ticket(){
			cout<<nom_ticket<<"\t"<<type_ticket<<"\t"<<data_ticket<<"\t"<<route_ticket<<"\n";
		}

        void Print_return_LK(){
        		if((route_ticket.compare("LK"))==0){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<data_ticket<<"\t"<<route_ticket<<"";
                cout<<"\n__________________________________________\n";
			  	}
				  	}
		void Print_return_KL(){
        		if((route_ticket.compare("KL"))==0){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<data_ticket<<"\t"<<route_ticket<<"";
                cout<<"\n__________________________________________\n";
			  	}
		}
        void Print_return_KT(){
        		if((route_ticket.compare("KT"))==0){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<data_ticket<<"\t"<<route_ticket<<"";
                cout<<"\n__________________________________________\n";
			  	}
        }
		void Print_return_TL(){
        		if((route_ticket.compare("TL"))==0 ){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<data_ticket<<"\t"<<route_ticket<<"";
                cout<<"\n__________________________________________\n";
			  	}
		}

		//Data
		void Print_return_data_01_06_2021(){
        		if((data_ticket.compare("01.06.2021"))==0){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t"<<data_ticket<<"\t"<<route_ticket<<"";
                cout<<"\n__________________________________________\n";
			  	}
				  	}
		void Print_return_data_07_06_2021(){
        		if((data_ticket.compare("07.06.2021"))==0){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t"<<data_ticket<<"\t"<<route_ticket<<"";
                cout<<"\n__________________________________________\n";
			  	}
		}
        void Print_return_data_30_06_2021(){
        		if((data_ticket.compare("30.06.2021"))==0){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t"<<data_ticket<<"\t"<<route_ticket<<"";
                cout<<"\n__________________________________________\n";
			  	}
        }
        void Print_return_data_30_05_2021(){
        		if((data_ticket.compare("30.05.2021"))==0){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t"<<data_ticket<<"\t "<<route_ticket<<"";
		    		cout<<"\n__________________________________________\n";
			  	}
        }

        //sold Ticket
        void Print_return_LK_sold(){
        		if((route_ticket.compare("LK"))==0){
		    		cout<<nom_ticket<<"\t "<<type_ticket<<"  \t   "<<route_ticket<<"\t "<<duration_ticket<<"\t "<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";
			  	}
				  	}
		void Print_return_KL_sold(){
        		if((route_ticket.compare("KL"))==0){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";
			  	}
		}
        void Print_return_KT_sold(){
        		if((route_ticket.compare("KT"))==0){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";
			  	}
        }
		void Print_return_TL_sold(){
        		if((route_ticket.compare("TL"))==0 ){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";

			  	}
		}


		void Print_return_duration_ticket_sold_8(){
        		if(duration_ticket==8){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";

			  	}
				  	}
		void Print_return_duration_ticket_sold_10(){
        		if(duration_ticket==10){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";

			  	}
		}
        void Print_return_duration_ticket_sold_11(){
        		if(duration_ticket==11){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";

			  	}
        }
        void Print_return_duration_ticket_sold_12(){
        		if(duration_ticket==12){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
                    cout<<"\n_____________________________________\n";

			  	}
        }


        void Print_return_cost_ticket_sold_160(){
        		if(cost_ticket==160){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";

			  	}
				  	}
		void Print_return_cost_ticket_sold_180(){
        		if(cost_ticket==180){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";
			  	}
		}
        void Print_return_cost_ticket_sold_190(){
        		if(cost_ticket==190){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";
			  	}
        }
        void Print_return_cost_ticket_sold_220(){
        		if(cost_ticket==220){
		    		cout<<nom_ticket<<"\t"<<type_ticket<<"\t  "<<route_ticket<<"\t"<<duration_ticket<<"\t"<<cost_ticket<<"";
		    		cout<<"\n_____________________________________\n";
        		}
        }


		~Ticket(){}
};

class Passenger{
	string surname_passenger;
	string type_train_passenger;
	string drive_passenger;
	string abroad_passenger;
	string baggage_passenger;
	string sex_passenger;
	int age_passenger;
	public:
	Passenger(){}
	Passenger(string surname_passenger,string type_train_passenger,string drive_passenger,string abroad_passenger,string baggage_passenger,string sex_passenger,int age_passenger){
	    this->surname_passenger=surname_passenger;
    	this->type_train_passenger=type_train_passenger;
	    this->drive_passenger=drive_passenger;
	    this->abroad_passenger=abroad_passenger;
	    this->baggage_passenger=baggage_passenger;
	    this->sex_passenger=sex_passenger;
      	this->age_passenger=age_passenger;
	}
	void Pasenger_route_LK(){
	    if((type_train_passenger.compare("LK"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	void Pasenger_route_KL(){
	    if((type_train_passenger.compare("KL"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	void Pasenger_route_KT(){
	    if((type_train_passenger.compare("KT"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	void Pasenger_route_TL(){
	    if((type_train_passenger.compare("TL"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}

        //Виїхали в зазначений день

	void Pasenger_leave_true(){
	    if((drive_passenger.compare("true"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	void Pasenger_leave_false(){
	    if((drive_passenger.compare("false"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
		//Виїхали в зазначений день за кордон
    void Pasenger_abroad_true(){
	    if((abroad_passenger.compare("true"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	void Pasenger_abroad_false(){
	    if((abroad_passenger.compare("false"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
    //Здали речі в багаж

	void Pasenger_baggage_true(){
	    if((baggage_passenger.compare("true"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	void Pasenger_baggage_false(){
	    if((baggage_passenger.compare("false"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	//Стать
	void Pasenger_baggage_female(){
	    if((sex_passenger.compare("female"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	void Pasenger_baggage_male(){
	    if((sex_passenger.compare("male"))==0){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}

	//Вік

	void Pasenger_age_25(){
	    if(age_passenger==25){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	void Pasenger_age_30(){
	    if(age_passenger==30){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	 void Pasenger_age_35(){
	    if(age_passenger==35){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";
	    }
	}
	void Pasenger_age_40(){
	    if(age_passenger==40){
	    cout<<surname_passenger<<"\t"<<type_train_passenger<<"\t"<<drive_passenger<<"\t"<<abroad_passenger<<"\t"<<baggage_passenger<<"\t"<<sex_passenger<<"\t"<<age_passenger<<"";
	    cout<<"\n____________________________________________________\n";

	    }
	}


	~Passenger(){}
};
//Головне меню
int stateM; //Стан головного меню
void MainMenu () {
    cout << "Menu \n"
    << "(0) Exit the program \n"
    << "(1) Get a list and the total number of employees of the railway station \n"
    << "(2) Get a list and total number of locomotive drivers \n"
    << "(3) Get a list and total number of locomotives \n"
    << "(4) Get the list and total number of trains \n"
    << "(5) Get the list and the total number of canceled flights in full \n"
    << "(6) Get the list and total number of detained flights in full \n"
    << "(7) Get a list and total number of tickets sold \n"
    << "(8) Get a list and the total number of passengers \n"
    << "(9) Get a list and the total number of unredeemed tickets \n"
    << "(10) Get a list and the total number of returned tickets  \n"
    << "Your choice \n";
    cin >> stateM;
}
int state_M_worker;
void Main_worker () {
    cout << "Menu \n"
    << "Get a list and the total number of employees of the railway station \n"
    << "(0) Exit the program \n"
    << "(1) all employees \n"
    << "(2) department heads \n"
    << "(3) employees of the specified department \n"
    << "(4) by length of service at the station \n"
    << "(5) gender \n"
    << "(6) age \n"
    << "(7) a sign of the presence and number of children \n"
    << "(8) the size of the salary \n"
    << "Your choice \n";
    cin >> state_M_worker;
}
int state_M_driver;
void Main_driver () {
    cout << "Menu \n"
    << "Get a list and the total number of locomotive drivers \n"
    << "(0) Exit the program \n"
    << "(1) for medical examination \n"
    << "(2) by gender \n"
    << "(3) age \n"
    << "(4) the amount of salary \n"
    << "Your choice \n";
    cin >> state_M_driver;
}
int state_M_locomotive;
void Main_locomotive () {
    cout << "Menu \n"
    << "Get a list and total number of locomotives \n"
    << "(0) Exit the program \n"
    << "(1) assigned to the railway station \n"
    << "(2) at the time of arrival at the station \n"
    << "(3) by number of routes completed \n"
    << "(4) that have passed the scheduled inspection \n"
    << "(5) sent for repair \n"
    << "(6) repaired \n"
    << "(7) by number of routes completed before repair \n"
    << "(8) by age \n"
    << "Your choice \n";
    cin >> state_M_locomotive;
}
int state_M_train;
void Main_train () {
    cout << "Menu \n"
    << "Get list and total number of trains \n"
    << "(0) Exit the program \n"
    << "(1) on the specified route \n"
    << "(2) by route duration \n"
    << "(3) at the ticket price \n"
    << "Your choice \n";
    cin >> state_M_train;
}
int state_M_canceled_trip;
void Main_canceled_trip () {
    cout << "Menu \n"
    << "Get the list and the total number of canceled flights in full \n"
    << "(0) Exit the program \n"
    << "(1) on the specified route \n"
    << "Your choice \n";
    cin >> state_M_canceled_trip;
}
int state_M_detained_trip;
void Main_detained_trip () {
    cout << "Menu \n"
    << "Get the list and total number of detained flights in full \n"
    << "(0) Exit the program \n"
    << "(1) on the specified route \n"
    << "(2) the number of tickets handed over during the detain \n"
    << "Your choice \n";
    cin >> state_M_detained_trip;
}
int state_M_sold_ticket;
void Main_sold_ticket () {
    cout << "Menu \n"
    << "Get a list and total number of tickets sold \n"
    << "(0) Exit the program \n"
    << "(1) on the specified route \n"
    << "(2) by route duration \n"
    << "(3) at the ticket price \n"
    << "Your choice \n";
    cin >> state_M_sold_ticket;
}
int state_M_passenger;
void Main_passenger () {
    cout << "Menu \n"
    << "Get list and total number of passengers \n"
    << "(0) Exit the program \n"
    << "(1) who left on the specified route \n"
    << "(2) who left on the specified day \n"
    << "(3) who went abroad on a given day \n"
    << "(4) on the basis of putting things in the luggage compartment \n"
    << "(5) by gender \n"
    << "(6) by age \n"
    << "Your choice \n";
    cin >> state_M_passenger;
}
int state_M_unredeemed_ticket;
void Main_unredeemed_ticket () {
    cout << "Menu \n"
    << "Get list and total number of unredeemed tickets \n"
    << "(0) Exit the program \n"
    << "(1) on the specified flight \n"
    << "(2) on the specified day \n"
    << "Your choice \n";
    cin >> state_M_unredeemed_ticket;
}
int state_M_return_ticket;
void Main_return_ticket () {
    cout << "Menu \n"
    << "Get a list and total number of returned tickets  \n"
    << "(0) Exit the program \n"
    << "(1) on the specified flight \n"
    << "(2) on the specified day \n"
    << "Your choice \n";
    cin >> state_M_return_ticket;
}

void split_string(string &str,ifstream &file,int size=256,char znak='-'){
	str="";
	getline(file,str,znak);
}
void split_int(int &f,ifstream &file,char znak='-',int size=256){
    char* cstr= new char[size];
    file.getline(cstr,size,znak);
    f=atoi(cstr);
    delete[] cstr;
}

//головна фукнкція

int main() {
    setlocale(LC_ALL,"Russian");

    system("pause");
    system("cls");
    MainMenu();
    string str, name_train, type_train,status_trip;
    int k_return_ticket_deteined;
	int time,cost;
	int k=0;
	string cou_type;
	int determ_tick;
	int k_ticket;

    string name_ticket,type_ticket,data_ticket,route_ticket,type_ticket_input,data_ticket_input;
    string detained_trip_route_input,canceled_trip_route_input;

    string sold_type_ticket_input,name_ticket_sold,type_ticket_sold,route_ticket_sold;
    int duration_ticket,cost_ticket,sold_duration_ticket_input,sold_cost_ticket_input;

    string train_type_ticket_input;
    string name_ticket_train,type_ticket_train,route_ticket_train;
    int train_duration_ticket,train_cost_ticket,train_duration_ticket_input,train_cost_ticket_input;


    string passsenger_surname, passenger_route,passenger_leave, passenger_abroad,passenger_baggage,passenger_sex;
    int passenger_age;
    string passenger_route_input,passenger_leave_input, passenger_abroad_input,passenger_baggage_input,passenger_sex_input;
    int passenger_age_input;


    //Locomotive
    string name_locomotive, availabiliyu_station_locomotive, chas_prub_locomotive, tech_review_locomotive, repair_locomotive;
    int k_trip_locomotive , k_repair_locomotive, k_route_to_repair_locomotive, age_locomotive;

    string  availabiliyu_station_locomotive_input, chas_prub_locomotive_input, tech_review_locomotive_input, repair_locomotive_input;
    int k_trip_locomotive_input , k_repair_locomotive_input, k_route_to_repair_locomotive_input, age_locomotive_input;

    //Driver
    string surname_driver,position_driver,sex_driver,children_driver,med_reviw_driver;
    int experience_driver,age_driver , k_children_driver,salary_driver;
    string med_reviw_driver_input, sex_driver_input;
    int age_driver_input,salary_driver_input;

     //Worker
    string surname_worker, position_worker,  sex_worker, children_worker,med_reviw_worker;
    int experience_worker,age_worker, k_children_worker,  salary_worker ;

    string head_departement_input,worker_departement_input,worker_sex_input, worker_children_input;
    int worker_age_input,worker_salary_input,year_experience_input;

    //string med_reviw_driver_input, sex_driver_input;
    // int age_driver_input,salary_driver_input;

    int k_detained_ticket_route_input;
    vector<Ticket>ticket_reurn1s;
    vector<Ticket>ticket_reurn2s;
    vector<Ticket>ticket_reurn3s;
    vector<Ticket>ticket_reurn4s;

    vector<Ticket>sold_ticket1s;
    vector<Ticket>sold_ticket2s;
    vector<Ticket>sold_ticket3s;

    vector<Train>train1s;
    vector<Train>train2s;
    vector<Train>train3s;

    vector<Passenger>passenger1s;
    vector<Passenger>passenger2s;
    vector<Passenger>passenger3s;
    vector<Passenger>passenger4s;
    vector<Passenger>passenger5s;
    vector<Passenger>passenger6s;
    vector<Passenger>passenger7s;

    vector<Locomotive>locomotive1s;
    vector<Locomotive>locomotive2s;
    vector<Locomotive>locomotive3s;
    vector<Locomotive>locomotive4s;
    vector<Locomotive>locomotive5s;
    vector<Locomotive>locomotive6s;
    vector<Locomotive>locomotive7s;
    vector<Locomotive>locomotive8s;

    vector<Driver>driver1s;
    vector<Driver>driver2s;
    vector<Driver>driver3s;
    vector<Driver>driver4s;
    vector<Driver>driver5s;

    vector<Worker>worker1s;
    vector<Worker>worker2s;
    vector<Worker>worker3s;
    vector<Worker>worker4s;
    vector<Worker>worker5s;
    vector<Worker>worker6s;
    vector<Worker>worker7s;
    vector<Worker>worker8s;

    vector<Type_trip>canceled_trips;
    vector<Type_trip>detained_trips;
    vector<Type_trip>detained_trip2s;
    int sum_ticket_return_KL,sum_ticket_return_LK,sum_ticket_return_TL,sum_ticket_return_KT;


    while(stateM!=0){
    	 str="";

    	if(stateM==1){
    		system("cls"); //видалити всі записи в консолі
    		Main_worker();

    		ifstream file_worker("Worker.txt");
    		//while(!file_worker.eof()){

    		while(state_M_worker!=0){
    			if(state_M_worker==1){
                    system("cls");


                ifstream fin1("Worker.txt");
                if(!fin1.is_open()){
                 cout<<"Opening error 'Worker.txt'\n";
                }else{
                cout<<"Worker \n";
                cout<<"List of Railway Stations:\n";
                //cout<<"Enter a availabiliy driver medview ( true, false ) : ";
                //cin>>med_reviw_driver_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position|\texperience| gender|\tage|\tkids| k kids1|\tsalary\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin1.eof()){

		    	split_string(surname_worker,fin1);
		    	split_string(position_worker,fin1);
		    	split_int(experience_worker,fin1);
		    	split_string(sex_worker,fin1);
		    	split_int(age_worker,fin1);
		    	split_string(children_worker,fin1);
		    	split_int(k_children_worker,fin1);
		    	split_int(salary_worker,fin1);
		    	//split_string(med_reviw_worker,fin1);

		    	Worker worker1(surname_worker, position_worker, experience_worker, sex_worker, age_worker, children_worker, k_children_worker, salary_worker);
                worker1s.push_back(worker1);
		    	worker1.Print_worker();

		    	}
                cout<<"Total number of workers = "<<worker1s.size();
		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_worker();
                    system("cls");

				}
				if(state_M_worker==2){
                    system("cls");


                ifstream fin1("Worker.txt");
                if(!fin1.is_open()){
                 cout<<"Opening error 'Worker.txt'\n";
                }else{
                cout<<"Worker \n";
                cout<<"Enter the chef department\n chief_driver,\n chief_repair,\n chief_dispatc,\n chief_cashier  : ";
                cin>>head_departement_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position|\texperience| gender|\tage|\tkids| k kids1|\tsalary\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin1.eof()){

		    	split_string(surname_worker,fin1);
		    	split_string(position_worker,fin1);
		    	split_int(experience_worker,fin1);
		    	split_string(sex_worker,fin1);
		    	split_int(age_worker,fin1);
		    	split_string(children_worker,fin1);
		    	split_int(k_children_worker,fin1);
		    	split_int(salary_worker,fin1);
		    	//split_string(med_reviw_worker,fin1);

		    	Worker worker2(surname_worker, position_worker, experience_worker, sex_worker, age_worker, children_worker, k_children_worker, salary_worker);
                worker2s.push_back(worker2);
                if(head_departement_input.compare("chief_driver")==0){
		    	worker2.Print_chief_driver();
                }
                if( head_departement_input.compare("chief_repair")==0 ){
		    	worker2.Print_chief_repair();
                }
                if(head_departement_input.compare("chief_dispatc")==0){
		    	worker2.Print_chief_dispatcher();
                }
                if(head_departement_input.compare("chief_cashier")==0){
		    	worker2.Print_chief_cashier();
                }
		    	}
                cout<<"Total number of workers = "<<worker2s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_worker();
                    system("cls");

				}
				if(state_M_worker==3){
                    system("cls");

                ifstream fin1("Worker.txt");
                if(!fin1.is_open()){
                 cout<<"Opening error 'Worker.txt'\n";
                }else{
                cout<<"Worker \n";
                cout<<"Enter the worker department:\n driver,\n repair,\n dispatcher,\n cashier,\n driver  : ";
                cin>>worker_departement_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position|\texperience| gender|\tage|\tkids| k kids1|\tsalary\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin1.eof()){

		    	split_string(surname_worker,fin1);
		    	split_string(position_worker,fin1);
		    	split_int(experience_worker,fin1);
		    	split_string(sex_worker,fin1);
		    	split_int(age_worker,fin1);
		    	split_string(children_worker,fin1);
		    	split_int(k_children_worker,fin1);
		    	split_int(salary_worker,fin1);
		    	//split_string(med_reviw_worker,fin1);

		    	Worker worker3(surname_worker, position_worker, experience_worker, sex_worker, age_worker, children_worker, k_children_worker, salary_worker);
                worker3s.push_back(worker3);
                if(worker_departement_input.compare("chief_driver")==0 | worker_departement_input.compare("driver")==0){
		    	worker3.Print_all_driver();
                }
                if( worker_departement_input.compare("chief_repair")==0 | worker_departement_input.compare("repair")==0 ){
		    	worker3.Print_all_repair();
                }
                if(worker_departement_input.compare("chief_dispatch")==0 | worker_departement_input.compare("dispatcher")==0){
		    	worker3.Print_all_dispatcher();
                }
                if(worker_departement_input.compare("chief_cashier")==0 | worker_departement_input.compare("cashier")==0){
		    	worker3.Print_all_cashier();
                }
                }
                cout<<"Total number of workers = "<<worker3s.size();


		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_worker();
                    system("cls");


				}
				if(state_M_worker==4){
                    system("cls");

                ifstream fin1("Worker.txt");
                if(!fin1.is_open()){
                 cout<<"Opening error 'Worker.txt'\n";
                }else{
                cout<<"Worker \n";
                cout<<"Enter the experience of the worker (5, 10, 15) years :";
                cin>>year_experience_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position|\texperience| gender|\tage|\tkids| k kids1|\tsalary\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin1.eof()){

		    	split_string(surname_worker,fin1);
		    	split_string(position_worker,fin1);
		    	split_int(experience_worker,fin1);
		    	split_string(sex_worker,fin1);
		    	split_int(age_worker,fin1);
		    	split_string(children_worker,fin1);
		    	split_int(k_children_worker,fin1);
		    	split_int(salary_worker,fin1);
		    	//split_string(med_reviw_worker,fin1);

		    	Worker worker4(surname_worker, position_worker, experience_worker, sex_worker, age_worker, children_worker, k_children_worker, salary_worker);
                worker4s.push_back(worker4);
                if( year_experience_input==5 ){
		    	worker4.Print_worker_experience_5();
                }
                if(year_experience_input==10){
		    	worker4.Print_worker_experience_10();
                }
                if( year_experience_input==15 ){
		    	worker4.Print_worker_experience_15();
                }
		    	}
                cout<<"Total number of workers = "<<worker4s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_worker();
                    system("cls");

				}
				if(state_M_worker==5){
                        system("cls");
                ifstream fin1("Worker.txt");
                if(!fin1.is_open()){
                 cout<<"Opening error 'Worker.txt'\n";
                }else{
                cout<<"Worker \n";
                cout<<"Enter the gender of the worker (male, female)  : ";
                cin>>worker_sex_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position|\texperience| gender|\tage|\tkids| k kids1|\tsalary\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin1.eof()){

		    	split_string(surname_worker,fin1);
		    	split_string(position_worker,fin1);
		    	split_int(experience_worker,fin1);
		    	split_string(sex_worker,fin1);
		    	split_int(age_worker,fin1);
		    	split_string(children_worker,fin1);
		    	split_int(k_children_worker,fin1);
		    	split_int(salary_worker,fin1);
		    	//split_string(med_reviw_worker,fin1);

		    	Worker worker5(surname_worker, position_worker, experience_worker, sex_worker, age_worker, children_worker, k_children_worker, salary_worker);
                worker5s.push_back(worker5);
                if(worker_sex_input.compare("male")==0){
		    	worker5.Print_worker_sex_male();
                }
                if( worker_sex_input.compare("female")==0 ){
		    	worker5.Print_worker_sex_female();
                }
		    	}
                cout<<"Total number of workers = "<<worker5s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_worker();
                    system("cls");

				}
				if(state_M_worker==6){
                    system("cls");
                ifstream fin1("Worker.txt");
                if(!fin1.is_open()){
                 cout<<"Opening error 'Worker.txt'\n";
                }else{
                cout<<"Worker \n";
                cout<<"Enter the age of worker (30, 35, 40, 45, 50) years :";
                cin>>year_experience_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position|\texperience| gender|\tage|\tkids| k kids1|\tsalary\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin1.eof()){

		    	split_string(surname_worker,fin1);
		    	split_string(position_worker,fin1);
		    	split_int(experience_worker,fin1);
		    	split_string(sex_worker,fin1);
		    	split_int(age_worker,fin1);
		    	split_string(children_worker,fin1);
		    	split_int(k_children_worker,fin1);
		    	split_int(salary_worker,fin1);
		    	//split_string(med_reviw_worker,fin1);

		    	Worker worker6(surname_worker, position_worker, experience_worker, sex_worker, age_worker, children_worker, k_children_worker, salary_worker);
                worker6s.push_back(worker6);
                if( year_experience_input==30 ){
		    	worker6.Print_worker_age_30();
                }
                if(year_experience_input==35){
		    	worker6.Print_worker_age_35();
                }
                if( year_experience_input==40 ){
		    	worker6.Print_worker_age_40();
                }
                 if(year_experience_input==45){
		    	worker6.Print_worker_age_45();
                }
                if( year_experience_input==50 ){
		    	worker6.Print_worker_age_50();
                }

		    	}
                cout<<"Total number of workers = "<<worker6s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_worker();
                    system("cls");
				}
				if(state_M_worker==7){
                     system("cls");
                ifstream fin1("Worker.txt");
                if(!fin1.is_open()){
                 cout<<"Opening error 'Worker.txt'\n";
                }else{
                cout<<"Worker \n";
                cout<<"Enter the presence of children (true, false) : ";
                cin>>worker_children_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position|\texperience| gender|\tage|\tkids| k kids1|\tsalary\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin1.eof()){

		    	split_string(surname_worker,fin1);
		    	split_string(position_worker,fin1);
		    	split_int(experience_worker,fin1);
		    	split_string(sex_worker,fin1);
		    	split_int(age_worker,fin1);
		    	split_string(children_worker,fin1);
		    	split_int(k_children_worker,fin1);
		    	split_int(salary_worker,fin1);
		    	//split_string(med_reviw_worker,fin1);

		    	Worker worker7(surname_worker, position_worker, experience_worker, sex_worker, age_worker, children_worker, k_children_worker, salary_worker);
                worker7s.push_back(worker7);
                if(worker_children_input.compare("true")==0){
		    	worker7.Print_worker_children_true();
                }
                if( worker_children_input.compare("false")==0 ){
		    	worker7.Print_worker_children_false();
                }
		    	}
                cout<<"Total number of workers = "<<worker7s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_worker();
                    system("cls");
				}
				if(state_M_worker==8){
				    system("cls");

                ifstream fin1("Worker.txt");
                if(!fin1.is_open()){
                 cout<<"Opening error 'Worker.txt'\n";
                }else{
                cout<<"Worker \n";
                cout<<"Enter the salary of worker (6000, 8000, 10000, 12000, 14000) grn :";
                cin>>salary_driver_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position|\texperience| gender|\tage|\tkids| k kids1|\tsalary\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin1.eof()){

		    	split_string(surname_worker,fin1);
		    	split_string(position_worker,fin1);
		    	split_int(experience_worker,fin1);
		    	split_string(sex_worker,fin1);
		    	split_int(age_worker,fin1);
		    	split_string(children_worker,fin1);
		    	split_int(k_children_worker,fin1);
		    	split_int(salary_worker,fin1);
		    	//split_string(med_reviw_worker,fin1);

		    	Worker worker8(surname_worker, position_worker, experience_worker, sex_worker, age_worker, children_worker, k_children_worker, salary_worker);
                worker8s.push_back(worker8);
                if( salary_driver_input==6000 ){
		    	worker8.Print_worker_salary_6000();
                }
                if(salary_driver_input==8000){
		    	worker8.Print_worker_salary_8000();
                }
                if( salary_driver_input==10000){
		    	worker8.Print_worker_salary_10000();
                }
                if(salary_driver_input==12000){
		    	worker8.Print_worker_salary_12000();
                }
                if( salary_driver_input==14000 ){
		    	worker8.Print_worker_salary_14000();
                }

		    	}
                cout<<"Total number of workers = "<<worker8s.size();
		    	}

		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_worker();
                    system("cls");
				}

    		}

            system("pause");
			system("cls");
            MainMenu();
            system("cls");

		}
		else if(stateM==2){
		    system("cls"); //видалити всі записи в консолі
			Main_driver();
			ifstream file_driver("Driver.txt");

			while(state_M_driver!=0){
    			if(state_M_driver==1){
                     system("cls");


                ifstream fin3("Driver.txt");
                if(!fin3.is_open()){
                 cout<<"Opening error 'Driver.txt'\n";
                }else{
                cout<<"Driver \n";

                cout<<"Enter the sign of passing the medical examination by the driver\n ( true, false ) : ";
                cin>>med_reviw_driver_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position| experience|\tgender| age|\tkids|k kids|salary(grn)|med exam\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin3.eof()){



		    	split_string(surname_driver,fin3);
		    	split_string(position_driver,fin3);
		    	split_int(experience_driver,fin3);
		    	split_string(sex_driver,fin3);
		    	split_int(age_driver,fin3);
		    	split_string(children_driver,fin3);
		    	split_int(k_children_driver,fin3);
		    	split_int(salary_driver,fin3);
		    	split_string(med_reviw_driver,fin3);

		    	Driver driver1(surname_driver, position_driver, experience_driver, sex_driver, age_driver, children_driver, k_children_driver, salary_driver,med_reviw_driver);

		    	driver1s.push_back(driver1);
		    	if(med_reviw_driver_input.compare("true")==0){
                    driver1.Driver_med_review_true();
		    	}
                if(med_reviw_driver_input.compare("false")==0){
                    driver1.Driver_med_review_false();

		    	}
		    	}
                cout<<"Total number of drivers = "<<driver1s.size();


		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_driver();
                    system("cls");

				}
				if(state_M_driver==2){
                    system("cls");


                ifstream fin3("Driver.txt");
                if(!fin3.is_open()){
                 cout<<"Opening error 'Driver.txt'\n";
                }else{
                cout<<"Driver \n";
                cout<<"Enter the gender of the driver (male, female)  : ";
                cin>>sex_driver_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position| experience|\tgender| age|\tkids|k kids|salary(grn)|med exam\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin3.eof()){



		    	split_string(surname_driver,fin3);
		    	split_string(position_driver,fin3);
		    	split_int(experience_driver,fin3);
		    	split_string(sex_driver,fin3);
		    	split_int(age_driver,fin3);
		    	split_string(children_driver,fin3);
		    	split_int(k_children_driver,fin3);
		    	split_int(salary_driver,fin3);
		    	split_string(med_reviw_driver,fin3);

		    	Driver driver2(surname_driver, position_driver, experience_driver, sex_driver, age_driver, children_driver, k_children_driver, salary_driver,med_reviw_driver);

		    	driver2s.push_back(driver2);
		    	if(sex_driver_input.compare("male")==0){
                    driver2.Driver_sex_male();
		    	}
                if(sex_driver_input.compare("female")==0){
                    driver2.Driver_sex_female();

		    	}

		    	}
                cout<<"Total number of drivers = "<<driver2s.size();


		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_driver();
                    system("cls");


				}
				if(state_M_driver==3){
                    system("cls");


                ifstream fin3("Driver.txt");
                if(!fin3.is_open()){
                 cout<<"Opening error 'Driver.txt'\n";
                }else{
                cout<<"Driver \n";
                cout<<"Enter the age of driver (30, 40, 45, 50) years :";
                cin>>age_driver_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position| experience|\tgender| age|\tkids|k kids|salary(grn)|med exam\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin3.eof()){



		    	split_string(surname_driver,fin3);
		    	split_string(position_driver,fin3);
		    	split_int(experience_driver,fin3);
		    	split_string(sex_driver,fin3);
		    	split_int(age_driver,fin3);
		    	split_string(children_driver,fin3);
		    	split_int(k_children_driver,fin3);
		    	split_int(salary_driver,fin3);
		    	split_string(med_reviw_driver,fin3);

		    	Driver driver3(surname_driver, position_driver, experience_driver, sex_driver, age_driver, children_driver, k_children_driver, salary_driver,med_reviw_driver);

		    	driver3s.push_back(driver3);
		    	if(age_driver_input==30){
                    driver3.Print_driver_age_30();
		    	}
                 if(age_driver_input==40){
                    driver3.Print_driver_age_40();

		    	}
		    	if(age_driver_input==45){
                    driver3.Print_driver_age_45();

		    	}
		    	if(age_driver_input==50){
                    driver3.Print_driver_age_50();

		    	}

		    	}
                cout<<"Total number of drivers = "<<driver3s.size();


		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_driver();
                    system("cls");


				}
				if(state_M_driver==4){
                system("cls");

                ifstream fin3("Driver.txt");
                if(!fin3.is_open()){
                 cout<<"Opening error 'Driver.txt'\n";
                }else{
                cout<<"Driver \n";
                cout<<"Enter the salary of driver (8000, 9000, 10000, 12000) grn :";
                cin>>salary_driver_input;
                cout<<"________________________________________________________________________________";
                cout<<"\nsurname| position| experience|\tgender| age|\tkids|k kids|salary(grn)|med exam\n";
                cout<<"________________________________________________________________________________\n";
                while(!fin3.eof()){



		    	split_string(surname_driver,fin3);
		    	split_string(position_driver,fin3);
		    	split_int(experience_driver,fin3);
		    	split_string(sex_driver,fin3);
		    	split_int(age_driver,fin3);
		    	split_string(children_driver,fin3);
		    	split_int(k_children_driver,fin3);
		    	split_int(salary_driver,fin3);
		    	split_string(med_reviw_driver,fin3);

		    	Driver driver4(surname_driver, position_driver, experience_driver, sex_driver, age_driver, children_driver, k_children_driver, salary_driver,med_reviw_driver);

		    	driver4s.push_back(driver4);
		    	if(salary_driver_input==8000){
                    driver4.Print_driver_salary_8000();
		    	}
                 if(salary_driver_input==9000){
                    driver4.Print_driver_salary_9000();

		    	}
		    	if(salary_driver_input==10000){
                    driver4.Print_driver_salary_10000();

		    	}
		    	if(salary_driver_input==12000){
                    driver4.Print_driver_salary_12000();

		    	}
		    	}
                 cout<<"Total number of drivers = "<<driver4s.size();


		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_driver();
                    system("cls");


				}
            }
			system("pause");
			system("cls");
            MainMenu();
            system("cls");
		}
		else if(stateM==3){
		    system("cls"); //видалити всі записи в консолі
		    Main_locomotive();
		    ifstream file_locomotive("Locomotive.txt");

		    while(state_M_locomotive!=0){
    			if(state_M_locomotive==1){
                        system("cls");


                ifstream fin4("Locomotive.txt");
                if(!fin4.is_open()){
                 cout<<"Opening error 'Locomotive.txt'\n";
                }else{
                cout<<"Locomotive \n";
                cout<<"Enter the sign of the locomotive located at this station ( true, false ) : ";
                cin>>availabiliyu_station_locomotive_input;
                cout<<"____________________________________________________________________________";
                cout<<"\nname|avability|arrived|k trip|inspection|repair|k repair|k route to|age\n";
                cout<<"____________________________________________________________________________\n";
                while(!fin4.eof()){


		    	split_string(name_locomotive,fin4);
		    	split_string(availabiliyu_station_locomotive,fin4);
		    	split_string(chas_prub_locomotive,fin4);
		    	split_int(k_trip_locomotive,fin4);
		    	split_string(tech_review_locomotive,fin4);
		    	split_string(repair_locomotive,fin4);
		    	split_int(k_repair_locomotive,fin4);
		    	split_int(k_route_to_repair_locomotive,fin4);
		    	split_int(age_locomotive,fin4);

		    	Locomotive locomotive1( name_locomotive, availabiliyu_station_locomotive, chas_prub_locomotive, k_trip_locomotive, tech_review_locomotive, repair_locomotive, k_repair_locomotive, k_route_to_repair_locomotive, age_locomotive);

		    	locomotive1s.push_back(locomotive1);
		    	if(availabiliyu_station_locomotive_input.compare("true")==0){
                    locomotive1.Print_locomotive_availabiliyu_true();
		    	}
                 if(availabiliyu_station_locomotive_input.compare("false")==0){
                    locomotive1.Print_locomotive_availabiliyu_false();

		    	}

		    	}
                cout<<"Total number of locomotives = "<<locomotive1s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_locomotive();
                    system("cls");

				}
				if(state_M_locomotive==2){
                    system("cls");


                ifstream fin4("Locomotive.txt");
                if(!fin4.is_open()){
                 cout<<"Opening error 'Locomotive.txt'\n";
                }else{

                cout<<"Locomotive \n";

                cout<<"Enter the arrival time ( 11:13, 15:16, 17:23 ) : ";
                cin>>chas_prub_locomotive_input;
                cout<<"____________________________________________________________________________";
                cout<<"\nname|avability|arrived|k trip|inspection|repair|k repair|k route to|age\n";
                cout<<"____________________________________________________________________________\n";
                while(!fin4.eof()){


		    	split_string(name_locomotive,fin4);
		    	split_string(availabiliyu_station_locomotive,fin4);
		    	split_string(chas_prub_locomotive,fin4);
		    	split_int(k_trip_locomotive,fin4);
		    	split_string(tech_review_locomotive,fin4);
		    	split_string(repair_locomotive,fin4);
		    	split_int(k_repair_locomotive,fin4);
		    	split_int(k_route_to_repair_locomotive,fin4);
		    	split_int(age_locomotive,fin4);

		    	Locomotive locomotive2( name_locomotive, availabiliyu_station_locomotive, chas_prub_locomotive, k_trip_locomotive, tech_review_locomotive, repair_locomotive, k_repair_locomotive, k_route_to_repair_locomotive, age_locomotive);

		    	locomotive2s.push_back(locomotive2);
		    	if(chas_prub_locomotive_input.compare("11:13")==0){
                    locomotive2.Print_locomotive_time_11_13();
		    	}
                 if(chas_prub_locomotive_input.compare("15:16")==0){
                    locomotive2.Print_locomotive_time_15_16();
		    	}
		    	if(chas_prub_locomotive_input.compare("17:23")==0){
                    locomotive2.Print_locomotive_time_17_23();

		    	}
		    	}
                cout<<"Total number of locomotives = "<<locomotive2s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_locomotive();
                    system("cls");

				}
				if(state_M_locomotive==3){
                     system("cls");


                ifstream fin4("Locomotive.txt");
                if(!fin4.is_open()){
                 cout<<"Opening error 'Locomotive.txt'\n";
                }else{

                cout<<"Locomotive \n";

                cout<<"Enter the number of flights 1000, 1200, 2100 : ";
                cin>>k_detained_ticket_route_input;
                cout<<"____________________________________________________________________________";
                cout<<"\nname|avability|arrived|k trip|inspection|repair|k repair|k route to|age\n";
                cout<<"____________________________________________________________________________\n";
                while(!fin4.eof()){


		    	split_string(name_locomotive,fin4);
		    	split_string(availabiliyu_station_locomotive,fin4);
		    	split_string(chas_prub_locomotive,fin4);
		    	split_int(k_trip_locomotive,fin4);
		    	split_string(tech_review_locomotive,fin4);
		    	split_string(repair_locomotive,fin4);
		    	split_int(k_repair_locomotive,fin4);
		    	split_int(k_route_to_repair_locomotive,fin4);
		    	split_int(age_locomotive,fin4);

		    	Locomotive locomotive3( name_locomotive, availabiliyu_station_locomotive, chas_prub_locomotive, k_trip_locomotive, tech_review_locomotive, repair_locomotive, k_repair_locomotive, k_route_to_repair_locomotive, age_locomotive);

		    	locomotive3s.push_back(locomotive3);
		    	if(k_detained_ticket_route_input==1000){
                    locomotive3.Print_locomotive_k_route_1000();
		    	}
                 if(k_detained_ticket_route_input==1200){
                    locomotive3.Print_locomotive_k_route_1200();

		    	}
		    	if(k_detained_ticket_route_input==2100){
                    locomotive3.Print_locomotive_k_route_2100();

		    	}

		    	}
                cout<<"Total number of locomotives = "<<locomotive3s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_locomotive();
                    system("cls");


				}
				if(state_M_locomotive==4){
                        system("cls");


                ifstream fin4("Locomotive.txt");
                if(!fin4.is_open()){
                 cout<<"Opening error 'Locomotive.txt'\n";
                }else{

                cout<<"Locomotive \n";

                cout<<"Enter the locomotive inspection mark (true, false) : ";
                cin>>tech_review_locomotive_input;
                cout<<"____________________________________________________________________________";
                cout<<"\nname|avability|arrived|k trip|inspection|repair|k repair|k route to|age\n";
                cout<<"____________________________________________________________________________\n";
                while(!fin4.eof()){


		    	split_string(name_locomotive,fin4);
		    	split_string(availabiliyu_station_locomotive,fin4);
		    	split_string(chas_prub_locomotive,fin4);
		    	split_int(k_trip_locomotive,fin4);
		    	split_string(tech_review_locomotive,fin4);
		    	split_string(repair_locomotive,fin4);
		    	split_int(k_repair_locomotive,fin4);
		    	split_int(k_route_to_repair_locomotive,fin4);
		    	split_int(age_locomotive,fin4);

		    	Locomotive locomotive4( name_locomotive, availabiliyu_station_locomotive, chas_prub_locomotive, k_trip_locomotive, tech_review_locomotive, repair_locomotive, k_repair_locomotive, k_route_to_repair_locomotive, age_locomotive);

		    	locomotive4s.push_back(locomotive4);
		    	if(tech_review_locomotive_input.compare("true")==0){
                    locomotive4.Print_locomotive_tech_view_true();
		    	}
                 if(tech_review_locomotive_input.compare("false")==0){
                    locomotive4.Print_locomotive_tech_view_false();

		    	}

		    	}
                cout<<"Total number of locomotives = "<<locomotive4s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_locomotive();
                    system("cls");

				}
				if(state_M_locomotive==5){
                    system("cls");


                ifstream fin4("Locomotive.txt");
                if(!fin4.is_open()){
                 cout<<"Opening error 'Locomotive.txt'\n";
                }else{
                cout<<"Locomotive \n";
                cout<<"Enter the sign of the locomotives sent for repair (true, false) : ";
                cin>>repair_locomotive_input;
                cout<<"____________________________________________________________________________";
                cout<<"\nname|avability|arrived|k trip|inspection|repair|k repair|k route to|age\n";
                cout<<"____________________________________________________________________________\n";
                while(!fin4.eof()){


		    	split_string(name_locomotive,fin4);
		    	split_string(availabiliyu_station_locomotive,fin4);
		    	split_string(chas_prub_locomotive,fin4);
		    	split_int(k_trip_locomotive,fin4);
		    	split_string(tech_review_locomotive,fin4);
		    	split_string(repair_locomotive,fin4);
		    	split_int(k_repair_locomotive,fin4);
		    	split_int(k_route_to_repair_locomotive,fin4);
		    	split_int(age_locomotive,fin4);

		    	Locomotive locomotive5( name_locomotive, availabiliyu_station_locomotive, chas_prub_locomotive, k_trip_locomotive, tech_review_locomotive, repair_locomotive, k_repair_locomotive, k_route_to_repair_locomotive, age_locomotive);

		    	locomotive5s.push_back(locomotive5);
		    	if(repair_locomotive_input.compare("true")==0){
                    locomotive5.Print_locomotive_repair_true();
		    	}
                 if(repair_locomotive_input.compare("false")==0){
                    locomotive5.Print_locomotive_repair_false();

		    	}

		    	}
                cout<<"Total number of locomotives = "<<locomotive5s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_locomotive();
                    system("cls");

				}
				if(state_M_locomotive==6){
                         system("cls");


                ifstream fin4("Locomotive.txt");
                if(!fin4.is_open()){
                 cout<<"Opening error 'Locomotive.txt'\n";
                }else{
                cout<<"Locomotive \n";
                cout<<"Enter the number of repairs 20, 30, 45 : ";
                cin>>k_repair_locomotive_input;
                cout<<"____________________________________________________________________________";
                cout<<"\nname|avability|arrived|k trip|inspection|repair|k repair|k route to|age\n";
                cout<<"____________________________________________________________________________\n";
                while(!fin4.eof()){


		    	split_string(name_locomotive,fin4);
		    	split_string(availabiliyu_station_locomotive,fin4);
		    	split_string(chas_prub_locomotive,fin4);
		    	split_int(k_trip_locomotive,fin4);
		    	split_string(tech_review_locomotive,fin4);
		    	split_string(repair_locomotive,fin4);
		    	split_int(k_repair_locomotive,fin4);
		    	split_int(k_route_to_repair_locomotive,fin4);
		    	split_int(age_locomotive,fin4);

		    	Locomotive locomotive6( name_locomotive, availabiliyu_station_locomotive, chas_prub_locomotive, k_trip_locomotive, tech_review_locomotive, repair_locomotive, k_repair_locomotive, k_route_to_repair_locomotive, age_locomotive);

		    	locomotive6s.push_back(locomotive6);
		    	if(k_repair_locomotive_input==20){
                    locomotive6.Print_locomotive_k_repair_20();
		    	}
                 if(k_repair_locomotive_input==30){
                    locomotive6.Print_locomotive_k_repair_30();

		    	}
		    	if(k_repair_locomotive_input==45){
                    locomotive6.Print_locomotive_k_repair_45();

		    	}
		    	}
                cout<<"Total number of locomotives = "<<locomotive6s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_locomotive();
                    system("cls");

				}
				if(state_M_locomotive==7){
                         system("cls");
                ifstream fin4("Locomotive.txt");
                if(!fin4.is_open()){
                 cout<<"Opening error 'Locomotive.txt'\n";
                }else{
                cout<<"Locomotive \n";
                cout<<"Enter the number of flights to be repaires 340, 370, 467 : ";
                cin>>k_route_to_repair_locomotive_input;
                cout<<"____________________________________________________________________________";
                cout<<"\nname|avability|arrived|k trip|inspection|repair|k repair|k route to|age\n";
                cout<<"____________________________________________________________________________\n";
                while(!fin4.eof()){


		    	split_string(name_locomotive,fin4);
		    	split_string(availabiliyu_station_locomotive,fin4);
		    	split_string(chas_prub_locomotive,fin4);
		    	split_int(k_trip_locomotive,fin4);
		    	split_string(tech_review_locomotive,fin4);
		    	split_string(repair_locomotive,fin4);
		    	split_int(k_repair_locomotive,fin4);
		    	split_int(k_route_to_repair_locomotive,fin4);
		    	split_int(age_locomotive,fin4);

		    	Locomotive locomotive7( name_locomotive, availabiliyu_station_locomotive, chas_prub_locomotive, k_trip_locomotive, tech_review_locomotive, repair_locomotive, k_repair_locomotive, k_route_to_repair_locomotive, age_locomotive);

		    	locomotive7s.push_back(locomotive7);
		    	if(k_route_to_repair_locomotive_input==340){
                    locomotive7.Print_locomotive_k_route_1000();
		    	}
                 if(k_route_to_repair_locomotive_input==370){
                    locomotive7.Print_locomotive_k_route_1200();

		    	}
		    	if(k_route_to_repair_locomotive_input==467){
                    locomotive7.Print_locomotive_k_route_2100();
		    	}
		    	}
                cout<<"Total number of locomotives = "<<locomotive7s.size();
		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_locomotive();
                    system("cls");

				}
				if(state_M_locomotive==8){
                     system("cls");
                ifstream fin4("Locomotive.txt");
                if(!fin4.is_open()){
                 cout<<"Opening error 'Locomotive.txt'\n";
                }else{
                cout<<"Locomotive \n";
                cout<<"Enter the age of the locomotive 20, 34, 59 years : ";
                cin>>age_locomotive_input;
                cout<<"____________________________________________________________________________";
                cout<<"\nname|avability|arrived|k trip|inspection|repair|k repair|k route to|age\n";
                cout<<"____________________________________________________________________________\n";
                while(!fin4.eof()){


		    	split_string(name_locomotive,fin4);
		    	split_string(availabiliyu_station_locomotive,fin4);
		    	split_string(chas_prub_locomotive,fin4);
		    	split_int(k_trip_locomotive,fin4);
		    	split_string(tech_review_locomotive,fin4);
		    	split_string(repair_locomotive,fin4);
		    	split_int(k_repair_locomotive,fin4);
		    	split_int(k_route_to_repair_locomotive,fin4);
		    	split_int(age_locomotive,fin4);

		    	Locomotive locomotive8( name_locomotive, availabiliyu_station_locomotive, chas_prub_locomotive, k_trip_locomotive, tech_review_locomotive, repair_locomotive, k_repair_locomotive, k_route_to_repair_locomotive, age_locomotive);

		    	locomotive8s.push_back(locomotive8);
		    	if(age_locomotive_input==20){
                    locomotive8.Print_locomotive_age_20();
		    	}
                 if(age_locomotive_input==34){
                    locomotive8.Print_locomotive_age_34();

		    	}
		    	if(age_locomotive_input==59){
                    locomotive8.Print_locomotive_age_59();

		    	}
		    	}
                cout<<"Total number of locomotives = "<<locomotive8s.size();


		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_locomotive();
                    system("cls");

				}
			}
			system("pause");
			system("cls");
            MainMenu();
            system("cls");
		}
		else if(stateM==4){
		    system("cls"); //видалити всі записи в консолі
		    Main_train();
		    ifstream fin5("Train.txt");

		    while(state_M_train!=0){
    			if(state_M_train==1){
    				system("cls");

                ifstream fin5("Train.txt");
                if(!fin5.is_open()){
                 cout<<"Opening error 'Train.txt'\n";
                }else{
                cout<<"Train \n";
                cout<<"Enter a name for the route \n LK(Lviv-Kyiv),\n KL(Kyiv-Lviv),\n KT(Kyiv-Ternopil),\n TL(Ternopil-Lviv) : ";
                cin>>train_type_ticket_input;
                cout<<"______________________________";
                cout<<"\ntrain|\troute|\tduration| cost\n";
                cout<<"______________________________\n";
                while(!fin5.eof()){
		    	split_string(name_ticket_train,fin5);
                split_string(route_ticket_train,fin5);
		    	split_int(train_duration_ticket,fin5);
		    	split_int(train_cost_ticket,fin5);
		    	Train train1(name_ticket_train,route_ticket_train,train_duration_ticket,train_cost_ticket);

		    	train1s.push_back(train1);
		    //	ticket_return1.Print_Ticket();
		    	if(train_type_ticket_input.compare("LK")==0){
                    train1.Print_typeLK();
		    	}
                if(train_type_ticket_input.compare("KL")==0){
                    train1.Print_typeKL();
		    	}
                if(train_type_ticket_input.compare("KT")==0){
                    train1.Print_typeKT();
                    }
                if(train_type_ticket_input.compare("TL")==0){
                    train1.Print_typeTL();
		    	}
		    	}
                cout<<"Total number of trains = "<<train1s.size();

		    	}

		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_train();
                    system("cls");
				}
				if(state_M_train==2){
                    system("cls");

                ifstream fin5("Train.txt");
                if(!fin5.is_open()){
                 cout<<"Opening error 'Train.txt'\n";
                }else{
                cout<<"Train \n";
                cout<<"Enter a duration trip 8, 10, 11, 12 hours : ";
                cin>>train_duration_ticket_input;
                cout<<"______________________________";
                cout<<"\ntrain|\troute|\tduration| cost\n";
                cout<<"______________________________\n";
                while(!fin5.eof()){
		    	split_string(name_ticket_train,fin5);
                split_string(route_ticket_train,fin5);
		    	split_int(train_duration_ticket,fin5);
		    	split_int(train_cost_ticket,fin5);
		    	Train train2(name_ticket_train,route_ticket_train,train_duration_ticket,train_cost_ticket);

		    	train2s.push_back(train2);
		    //	ticket_return1.Print_Ticket();
		    	if(train_duration_ticket_input==8){
                    train2.Print_duration8();
		    	}
                if(train_duration_ticket_input==10){
                    train2.Print_duration10();
		    	}
                if(train_duration_ticket_input==11){
                    train2.Print_duration11();
                    }
                if(train_duration_ticket_input==12){
                    train2.Print_duration12();
		    	}

		    	}
                cout<<"Total number of trains = "<<train2s.size();

		    	}

		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_train();
                    system("cls");

				}
				if(state_M_train==3){
                        system("cls");

                ifstream fin5("Train.txt");
                if(!fin5.is_open()){
                 cout<<"Opening error 'Train.txt'\n";
                }else{
                cout<<"Train \n";
                cout<<"Enter a cost ticket 160, 180, 190, 220 grn : ";
                cin>>train_cost_ticket_input;
                cout<<"______________________________";
                cout<<"\ntrain|\troute|\tduration| cost\n";
                cout<<"______________________________\n";
                while(!fin5.eof()){
		    	split_string(name_ticket_train,fin5);
                split_string(route_ticket_train,fin5);
		    	split_int(train_duration_ticket,fin5);
		    	split_int(train_cost_ticket,fin5);
		    	Train train3(name_ticket_train,route_ticket_train,train_duration_ticket,train_cost_ticket);

		    	train3s.push_back(train3);
		    //	ticket_return1.Print_Ticket();
		    	if(train_cost_ticket_input==160){
                    train3.Print_cost160();
		    	}
                if(train_cost_ticket_input==180){
                    train3.Print_cost180();
		    	}
                if(train_cost_ticket_input==190){
                    train3.Print_cost190();
                    }
                if(train_cost_ticket_input==220){
                    train3.Print_cost_220();
		    	}

		    	}
                cout<<"Total number of trains = "<<train3s.size();

		    	}

		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_train();
                    system("cls");

				}
		}
		    system("pause");
			system("cls");
            MainMenu();
            system("cls");
		}
		else if(stateM==5){
		    system("cls"); //видалити всі записи в консолі
			Main_canceled_trip();

			ifstream file_canceled_trip("Canceled_trip.txt");


            while(state_M_canceled_trip!=0){
    			if(state_M_canceled_trip==1){
                     system("cls"); //видалити всі записи в консолі
                ifstream fin6("Canceled_trip.txt");

                if(!fin6.is_open()){
                 cout<<"Opening error 'Canceled_trip.txt'\n";
                }
                else{
                cout<<"Canceled trip \n";
                cout<<"Enter a name for the route \n LK(Lviv-Kyiv),\n KL(Kyiv-Lviv),\n KT(Kyiv-Ternopil),\n TL(Ternopil-Lviv) : ";
                cin>>canceled_trip_route_input;
                cout<<"______________________________";
                cout<<"\ntrain|\tstatus trip|\troute|\n";
                cout<<"______________________________\n";
                while(!fin6.eof()){
		    	split_string(name_train,fin6);
		    	split_string(status_trip,fin6);
		    	split_string(type_train,fin6);


		    	Type_trip canceled_trip(name_train,status_trip, type_train);

		    	canceled_trips.push_back(canceled_trip);
		    	if(canceled_trip_route_input.compare("LK")==0){
                    canceled_trip.Print_typeLK_only();
		    	}
		    	else if(canceled_trip_route_input.compare("KL")==0){
                    canceled_trip.Print_typeKL_only();
		    	}
		    	else if(canceled_trip_route_input.compare("KT")==0){
                    canceled_trip.Print_typeKT_only();
                    }
		    	else if(canceled_trip_route_input.compare("TL")==0){
                    canceled_trip.Print_typeTL_only();

		    	}
		    	}
                cout<<"Total number of canceled trips = "<<canceled_trips.size();

                }
                    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_canceled_trip();
                    system("cls");
				}
            }
		    system("pause");
			system("cls");
            MainMenu();
            system("cls");

		}
		else if(stateM==6){
		    system("cls"); //видалити всі записи в консолі
			Main_detained_trip();

			ifstream file_detained_trip("Detained_trip.txt");



			while(state_M_detained_trip!=0){

             if(state_M_detained_trip==1){
                system("cls"); //видалити всі записи в консолі
                ifstream fin7("Detained_trip.txt");

                if(!fin7.is_open()){
                 cout<<"Opening error 'Detained_trip.txt'\n";
                }
                else{
                cout<<"Detained trip\n";
                cout<<"Enter a name for the route \n LK(Lviv-Kyiv),\n KL(Kyiv-Lviv),\n KT(Kyiv-Ternopil),\n TL(Ternopil-Lviv) : ";
                cin>>detained_trip_route_input;
                cout<<"________________________________________";
                cout<<"\ntrain|\tstatus trip| route| k ticket\|\n";
                cout<<"________________________________________\n";
                while(!fin7.eof()){
		    	split_string(name_train,fin7);
		    	split_string(status_trip,fin7);
		    	split_string(type_train,fin7);
                split_int(k_return_ticket_deteined,fin7);

		    	Type_trip detained_trip(name_train,status_trip, type_train, k_return_ticket_deteined);

		    	detained_trips.push_back(detained_trip);
		    	if(detained_trip_route_input.compare("LK")==0){
                    detained_trip.Print_typeLK();
		    	}
		    	else if(detained_trip_route_input.compare("KL")==0){
                    detained_trip.Print_typeKL();
		    	}
		    	else if(detained_trip_route_input.compare("KT")==0){
                    detained_trip.Print_typeKT();
                    }
		    	else if(detained_trip_route_input.compare("TL")==0){
                    detained_trip.Print_typeTL();
		    	}
		    	}
                cout<<"Total number of detained trips = "<<detained_trips.size();



                }
                    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_detained_trip();
                    system("cls");

		}
		     if(state_M_detained_trip==2){
                system("cls"); //видалити всі записи в консолі
               ifstream fin7("Detained_trip.txt");

                if(!fin7.is_open()){
                 cout<<"Opening error 'Detained_trip.txt'\n";
                }
                else{
                cout<<"Detained trip\n";
                cout<<"Enter the number of tickets 30, 35, 40, 45, 50 : ";
                cin>>k_detained_ticket_route_input;
                cout<<"________________________________________";
                cout<<"\ntrain|\tstatus trip| route| k ticket|\n";
                cout<<"________________________________________\n";
                while(!fin7.eof()){
		    	split_string(name_train,fin7);
		    	split_string(status_trip,fin7);
		    	split_string(type_train,fin7);
                split_int(k_return_ticket_deteined,fin7);

		    	Type_trip detained_trip2(name_train,status_trip, type_train, k_return_ticket_deteined);

		    	detained_trip2s.push_back(detained_trip2);
		    	if(k_detained_ticket_route_input==30){
                    detained_trip2.Print_type_ticket_30();
		    	}
		    	else if(k_detained_ticket_route_input==35){
                    detained_trip2.Print_type_ticket_35();
		    	}
		    	else if(k_detained_ticket_route_input==40){
                    detained_trip2.Print_type_ticket_40();
		    	}
		    	else if(k_detained_ticket_route_input==45){
                    detained_trip2.Print_type_ticket_45();
		    	}
		    	else if(k_detained_ticket_route_input==50){
                    detained_trip2.Print_type_ticket_50();
		    	}
                }
                cout<<"Total number of detained trips = "<<detained_trip2s.size();


		    	}
		    	cout<<endl;
	    	system("pause");
			system("cls");
            Main_detained_trip();
            system("cls");


                }
			}

	    	system("pause");
			system("cls");
            MainMenu();
            system("cls");
		}
		else if(stateM==7){
		    system("cls"); //видалити всі записи в консолі
			Main_sold_ticket();
			ifstream file_sold_ticket("Sold_ticket.txt");

			while(state_M_sold_ticket!=0){
    			if(state_M_sold_ticket==1){
    				system("cls");

    				ifstream fin8("Sold_ticket.txt");
                if(!fin8.is_open()){
                 cout<<"Opening error 'Sold_ticket.txt'\n";
                }else{
                cout<<"Sold ticket\n";
                cout<<"Enter a name for the route \n LK(Lviv-Kyiv),\n KL(Kyiv-Lviv),\n KT(Kyiv-Ternopil),\n TL(Ternopil-Lviv) : ";
                cin>>sold_type_ticket_input;
                cout<<"_____________________________________";
                cout<<"\ntrain|type ticket|route|duration|cost\n";
                cout<<"_____________________________________\n";
                while(!fin8.eof()){
		    	split_string(name_ticket_sold,fin8);
		    	split_string(type_ticket_sold,fin8);
                split_string(route_ticket_sold,fin8);
		    	split_int(duration_ticket,fin8);
		    	split_int(cost_ticket,fin8);
		    	Ticket sold_ticket1(name_ticket_sold,type_ticket_sold,route_ticket_sold,duration_ticket,cost_ticket);

		    	sold_ticket1s.push_back(sold_ticket1);
		    //	ticket_return1.Print_Ticket();
		    	if(sold_type_ticket_input.compare("LK")==0){
                    sold_ticket1.Print_return_LK_sold();
		    	}
                if(sold_type_ticket_input.compare("KL")==0){
                    sold_ticket1.Print_return_KL_sold();
		    	}
                if(sold_type_ticket_input.compare("KT")==0){
                    sold_ticket1.Print_return_KT_sold();
                    }
                if(sold_type_ticket_input.compare("TL")==0){
                    sold_ticket1.Print_return_TL_sold();
		    	}
		    	}
                cout<<"Total number of sold tickets = "<<sold_ticket1s.size();
		    	}

		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_sold_ticket();
                    system("cls");
				}
				if(state_M_sold_ticket==2){
                        system("cls");

    				ifstream fin8("Sold_ticket.txt");
                if(!fin8.is_open()){
                 cout<<"Opening error 'Sold_ticket.txt'\n";
                }else{
                cout<<"Sold ticket\n";
                cout<<"Enter a duration trip 8, 10, 11, 12 hours : ";
                cin>>sold_duration_ticket_input;
                cout<<"_____________________________________";
                cout<<"\ntrain|type ticket|route|duration|cost\n";
                cout<<"_____________________________________\n";
                while(!fin8.eof()){
		    	split_string(name_ticket_sold,fin8);
		    	split_string(type_ticket_sold,fin8);
                split_string(route_ticket_sold,fin8);
		    	split_int(duration_ticket,fin8);
		    	split_int(cost_ticket,fin8);
		    	Ticket sold_ticket2(name_ticket_sold,type_ticket_sold,route_ticket_sold,duration_ticket,cost_ticket);

		    	sold_ticket2s.push_back(sold_ticket2);
		    //	ticket_return1.Print_Ticket();
		    	if(sold_duration_ticket_input==8){
                    sold_ticket2.Print_return_duration_ticket_sold_8();
		    	}
                if(sold_duration_ticket_input==10){
                    sold_ticket2.Print_return_duration_ticket_sold_10();
		    	}
                if(sold_duration_ticket_input==11){
                    sold_ticket2.Print_return_duration_ticket_sold_11();
                    }
                if(sold_duration_ticket_input==12){
                    sold_ticket2.Print_return_duration_ticket_sold_12();
		    	}

		    	}
                cout<<"Total number of sold tickets = "<<sold_ticket1s.size();

		    	}

		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_sold_ticket();
                    system("cls");

				}
				if(state_M_sold_ticket==3){
                        system("cls");

    				ifstream fin8("Sold_ticket.txt");
                if(!fin8.is_open()){
                 cout<<"Opening error 'Sold_ticket.txt'\n";
                }else{
                cout<<"Sold ticket\n";
                cout<<"Enter a cost ticket 160, 180, 190, 220 grn : ";
                cin>>sold_cost_ticket_input;
                cout<<"_____________________________________";
                cout<<"\ntrain|type ticket|route|duration|cost\n";
                cout<<"_____________________________________\n";
                while(!fin8.eof()){
		    	split_string(name_ticket_sold,fin8);
		    	split_string(type_ticket_sold,fin8);
                split_string(route_ticket_sold,fin8);
		    	split_int(duration_ticket,fin8);
		    	split_int(cost_ticket,fin8);
		    	Ticket sold_ticket3(name_ticket_sold,type_ticket_sold,route_ticket_sold,duration_ticket,cost_ticket);

		    	sold_ticket3s.push_back(sold_ticket3);
		    //	ticket_return1.Print_Ticket();
		    	if(sold_cost_ticket_input==160){
                    sold_ticket3.Print_return_cost_ticket_sold_160();
		    	}
                if(sold_cost_ticket_input==180){
                    sold_ticket3.Print_return_cost_ticket_sold_180();
		    	}
                if(sold_cost_ticket_input==190){
                    sold_ticket3.Print_return_cost_ticket_sold_190();
                    }
                if(sold_cost_ticket_input==220){
                    sold_ticket3.Print_return_cost_ticket_sold_220();
		    	}

		    	}
                cout<<"Total number of sold tickets = "<<sold_ticket3s.size();

		    	}

		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_sold_ticket();
                    system("cls");


				}
		}
			system("pause");
			system("cls");
            MainMenu();
            system("cls");
		}
		else if(stateM==8){
		    system("cls"); //видалити всі записи в консолі
			Main_passenger();
			ifstream file_passenger("Passenger.txt");

			while(state_M_passenger!=0){
    			if(state_M_passenger==1){
    				system("cls");

                ifstream fin9("Passenger.txt");
                if(!fin9.is_open()){
                 cout<<"Opening error 'Passenger.txt'\n";
                }else{
                cout<<"Passenger \n";
                cout<<"Enter a name for the route \n LK(Lviv-Kyiv),\n KL(Kyiv-Lviv),\n KT(Kyiv-Ternopil),\n TL(Ternopil-Lviv) : ";
                cin>>passenger_route_input;
                cout<<"____________________________________________________";
                cout<<"\ntrain\troute\tleave\tabroad\tbaggage\tgender\tage\n";
                cout<<"____________________________________________________\n";
                while(!fin9.eof()){

		    	split_string(passsenger_surname,fin9);
		    	split_string(passenger_route,fin9);
		    	split_string(passenger_leave,fin9);
		    	split_string(passenger_abroad,fin9);
		    	split_string(passenger_baggage,fin9);
		    	split_string(passenger_sex,fin9);
		    	split_int(passenger_age,fin9);


		    	Passenger passenger1(passsenger_surname,passenger_route,passenger_leave, passenger_abroad,passenger_baggage,passenger_sex,passenger_age);

		    	passenger1s.push_back(passenger1);

		    	if(passenger_route_input.compare("LK")==0){
                    passenger1.Pasenger_route_LK();
		    	}
                if(passenger_route_input.compare("KL")==0){
                    passenger1.Pasenger_route_KL();

		    	}
                if(passenger_route_input.compare("KT")==0){
                    passenger1.Pasenger_route_KT();

                }
                if(passenger_route_input.compare("TL")==0){
                    passenger1.Pasenger_route_TL();
		    	}
		    	}
                cout<<"Total number of passengers = "<<passenger1s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_passenger();
                    system("cls");
				}
				if(state_M_passenger==2){
                        system("cls");

                ifstream fin9("Passenger.txt");
                if(!fin9.is_open()){
                 cout<<"Opening error 'Passenger.txt'\n";
                }else{
                cout<<"Passenger \n";
                cout<<"Enter the sign of departure of passenger (true, false): ";
                cin>>passenger_leave_input;
                cout<<"____________________________________________________";
                cout<<"\ntrain\troute\tleave\t abroad\tbaggage\tgender\tage\n";
                cout<<"____________________________________________________\n";
                while(!fin9.eof()){

		    	split_string(passsenger_surname,fin9);
		    	split_string(passenger_route,fin9);
		    	split_string(passenger_leave,fin9);
		    	split_string(passenger_abroad,fin9);
		    	split_string(passenger_baggage,fin9);
		    	split_string(passenger_sex,fin9);
		    	split_int(passenger_age,fin9);


		    	Passenger passenger2(passsenger_surname,passenger_route,passenger_leave, passenger_abroad,passenger_baggage,passenger_sex,passenger_age);

		    	passenger2s.push_back(passenger2);

		    	if(passenger_leave_input.compare("true")==0){
                    passenger2.Pasenger_leave_true();
		    	}
                if(passenger_leave_input.compare("false")==0){
                    passenger2.Pasenger_leave_false();

		    	}

		    	}
                cout<<"Total number of passengers = "<<passenger2s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_passenger();
                    system("cls");

				}
				if(state_M_passenger==3){
                        system("cls");

                ifstream fin9("Passenger.txt");
                if(!fin9.is_open()){
                 cout<<"Opening error 'Passenger.txt'\n";
                }else{
                cout<<"Passenger \n";
                cout<<"Enter the sign of departure abroad of passenger (true, false): ";
                cin>>passenger_abroad_input;
                cout<<"____________________________________________________";
                cout<<"\ntrain\troute\tleave\tabroad\tbaggage\tgender\tage\n";
                cout<<"____________________________________________________\n";
                while(!fin9.eof()){

		    	split_string(passsenger_surname,fin9);
		    	split_string(passenger_route,fin9);
		    	split_string(passenger_leave,fin9);
		    	split_string(passenger_abroad,fin9);
		    	split_string(passenger_baggage,fin9);
		    	split_string(passenger_sex,fin9);
		    	split_int(passenger_age,fin9);


		    	Passenger passenger3(passsenger_surname,passenger_route,passenger_leave, passenger_abroad,passenger_baggage,passenger_sex,passenger_age);

		    	passenger3s.push_back(passenger3);

		    	if(passenger_abroad_input.compare("true")==0){
                    passenger3.Pasenger_abroad_true();
		    	}
                if(passenger_abroad_input.compare("false")==0){
                    passenger3.Pasenger_abroad_false();
		    	}
		    	}
                cout<<"Total number of passengers = "<<passenger3s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_passenger();
                    system("cls");

				}
				if(state_M_passenger==4){
                        system("cls");

                ifstream fin9("Passenger.txt");
                if(!fin9.is_open()){
                 cout<<"Opening error 'Passenger.txt'\n";
                }else{
                cout<<"Passenger \n";
                cout<<"Enter the sign of delivery of things in luggage (true, false): ";
                cin>>passenger_baggage_input;
                cout<<"____________________________________________________";
                cout<<"\ntrain\troute\tleave\tabroad\tbaggage\tgender\tage\n";
                cout<<"____________________________________________________\n";
                while(!fin9.eof()){

		    	split_string(passsenger_surname,fin9);
		    	split_string(passenger_route,fin9);
		    	split_string(passenger_leave,fin9);
		    	split_string(passenger_abroad,fin9);
		    	split_string(passenger_baggage,fin9);
		    	split_string(passenger_sex,fin9);
		    	split_int(passenger_age,fin9);


		    	Passenger passenger4(passsenger_surname,passenger_route,passenger_leave, passenger_abroad,passenger_baggage,passenger_sex,passenger_age);

		    	passenger4s.push_back(passenger4);

		    	if(passenger_baggage_input.compare("true")==0){
                    passenger4.Pasenger_baggage_true();
		    	}
                if(passenger_baggage_input.compare("false")==0){
                    passenger4.Pasenger_baggage_false();
		    	}
		    	}
                cout<<"Total number of passengers = "<<passenger4s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_passenger();
                    system("cls");

				}
				if(state_M_passenger==5){
                        system("cls");

                ifstream fin9("Passenger.txt");
                if(!fin9.is_open()){
                 cout<<"Opening error 'Passenger.txt'\n";
                }else{
                cout<<"Passenger \n";

                cout<<"Enter the gender of the passenger (male,female) : ";
                cin>>passenger_sex_input;
                cout<<"____________________________________________________";
                cout<<"\ntrain\troute\tleave\tabroad\tbaggage\tgender\tage\n";
                cout<<"____________________________________________________\n";
                while(!fin9.eof()){

		    	split_string(passsenger_surname,fin9);
		    	split_string(passenger_route,fin9);
		    	split_string(passenger_leave,fin9);
		    	split_string(passenger_abroad,fin9);
		    	split_string(passenger_baggage,fin9);
		    	split_string(passenger_sex,fin9);
		    	split_int(passenger_age,fin9);


		    	Passenger passenger5(passsenger_surname,passenger_route,passenger_leave, passenger_abroad,passenger_baggage,passenger_sex,passenger_age);

		    	passenger5s.push_back(passenger5);

		    	if(passenger_sex_input.compare("male")==0){
                    passenger5.Pasenger_baggage_male();
		    	}
                if(passenger_sex_input.compare("female")==0){
                    passenger5.Pasenger_baggage_female();
		    	}
		    	}
                cout<<"Total number of passengers = "<<passenger5s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_passenger();
                    system("cls");

				}
				if(state_M_passenger==6){
                        system("cls");

                ifstream fin9("Passenger.txt");
                if(!fin9.is_open()){
                 cout<<"Opening error 'Passenger.txt'\n";
                }else{
                cout<<"Passenger \n";
                cout<<"Enter the age of passenger(25, 30, 35, 40) years : ";
                cin>>passenger_age_input;
                cout<<"____________________________________________________";
                cout<<"\ntrain\troute\tleave\tabroad\tbaggage\tgender\tage\n";
                cout<<"____________________________________________________\n";
                while(!fin9.eof()){

		    	split_string(passsenger_surname,fin9);
		    	split_string(passenger_route,fin9);
		    	split_string(passenger_leave,fin9);
		    	split_string(passenger_abroad,fin9);
		    	split_string(passenger_baggage,fin9);
		    	split_string(passenger_sex,fin9);
		    	split_int(passenger_age,fin9);


		    	Passenger passenger6(passsenger_surname,passenger_route,passenger_leave, passenger_abroad,passenger_baggage,passenger_sex,passenger_age);

		    	passenger6s.push_back(passenger6);

		    	if(passenger_age_input==25){
                    passenger6.Pasenger_age_25();
		    	}
		    	if(passenger_age_input==30){
                    passenger6.Pasenger_age_30();
		    	}
		    	if(passenger_age_input==35){
                    passenger6.Pasenger_age_35();
		    	}
		    	if(passenger_age_input==40){
                    passenger6.Pasenger_age_40();
		    	}

		    	}
                cout<<"Total number of passengers = "<<passenger6s.size();

		    	}
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_passenger();
                    system("cls");

				}
			}
			system("pause");
			system("cls");
            MainMenu();
            system("cls");
		}
		else if(stateM==9){
		    system("cls"); //видалити всі записи в консолі
			Main_unredeemed_ticket();
			ifstream file_unredeemed_ticket("Unredeemed_ticket.txt");

			while(state_M_unredeemed_ticket!=0){
    			if(state_M_unredeemed_ticket==1){
    				system("cls");
    				ifstream fin10("Unredeemed_ticket.txt");
                if(!fin10.is_open()){
                 cout<<"Opening error 'Unredeemed_ticket.txt'\n";
               }else{
                cout<<"Unredeemed ticket \n";
                cout<<"Enter a name for the route \n LK(Lviv-Kyiv),\n KL(Kyiv-Lviv),\n KT(Kyiv-Ternopil),\n TL(Ternopil-Lviv) : ";
                cin>>type_ticket_input;
                cout<<"__________________________________________";
                cout<<"\ntrain|\ttype ticket|\tdata|\troute|\n";
                cout<<"__________________________________________\n";
                while(!fin10.eof()){

		    	split_string(name_ticket,fin10);
		    	split_string(type_ticket,fin10);
		    	split_string(data_ticket,fin10);
		    	split_string(route_ticket,fin10);
		    	Ticket ticket_return4(name_ticket,type_ticket,data_ticket,route_ticket);

		    	ticket_reurn4s.push_back(ticket_return4);
		    //	ticket_return1.Print_Ticket();
		    	if(type_ticket_input.compare("LK")==0){
                    ticket_return4.Print_return_LK();
		    	}
                if(type_ticket_input.compare("KL")==0){
                    ticket_return4.Print_return_KL();
		    	}
                if(type_ticket_input.compare("KT")==0){
                    ticket_return4.Print_return_KT();

                    }
                if(type_ticket_input.compare("TL")==0){

                    ticket_return4.Print_return_TL();
		    	}
            }
                    cout<<"Total number of unredeemed tickets = "<<ticket_reurn4s.size();
		    	 }
		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_unredeemed_ticket();
                    system("cls");
				}
				if(state_M_unredeemed_ticket==2){
    				system("cls");
    				ifstream fin10("Unredeemed_ticket.txt");
                if(!fin10.is_open()){
                 cout<<"Opening error 'Unredeemed_ticket.txt'\n";
                }else{
                cout<<"Unredeemed ticket \n";
                cout<<"Enter the date of the specified flight\n 01.06.2021,\n 07.06.2021,\n 30.05.2021: ";
                cin>>data_ticket_input;
                cout<<"__________________________________________";
                cout<<"\ntrain|\ttype ticket|\tdata |   route|\n";
                cout<<"__________________________________________\n";
                while(!fin10.eof()){

		    	split_string(name_ticket,fin10);
		    	split_string(type_ticket,fin10);
		    	split_string(data_ticket,fin10);
		    	split_string(route_ticket,fin10);
		    	Ticket ticket_return3(name_ticket,type_ticket,data_ticket,route_ticket);

		    	ticket_reurn3s.push_back(ticket_return3);
		    //	ticket_return1.Print_Ticket();
		    	if(data_ticket_input.compare("01.06.2021")==0){
                    ticket_return3.Print_return_data_01_06_2021();
		    	}
                if(data_ticket_input.compare("07.06.2021")==0){
                    ticket_return3.Print_return_data_07_06_2021();
		    	}
                if(data_ticket_input.compare("30.05.2021")==0){
                   ticket_return3.Print_return_data_30_05_2021();
                }
		    	}
                cout<<"Total number of unredeemed tickets = "<<ticket_reurn3s.size();

		    	}

		    	    cout<<endl;

    				system("pause");
		         	system("cls");
                    Main_unredeemed_ticket();
                    system("cls");
				}
		}
			system("pause");
			system("cls");
            MainMenu();
			system("cls");
		}
		else if(stateM==10){
		    system("cls"); //видалити всі записи в консолі
		    Main_return_ticket();
			ifstream file_return_ticket("Return_ticket.txt");

			while(state_M_return_ticket!=0){

    			if(state_M_return_ticket==1){
    				system("cls");


                ifstream fin11("Return_ticket.txt");
                if(!fin11.is_open()){
                 cout<<"Opening error 'Return_ticket.txt'\n";
                }else{
                cout<<"Return ticket \n";
                cout<<"Enter a name for the route \n LK(Lviv-Kyiv),\n KL(Kyiv-Lviv),\n KT(Kyiv-Ternopil),\n TL(Ternopil-Lviv) : ";
                cin>>type_ticket_input;
                cout<<"_____________________________________";
                cout<<"\ntrain\ttype ticket\tdata\troute\n";
                cout<<"_____________________________________\n";
                while(!fin11.eof()){

		    	split_string(name_ticket,fin11);
		    	split_string(type_ticket,fin11);
		    	split_string(data_ticket,fin11);
		    	split_string(route_ticket,fin11);
		    	Ticket ticket_return1(name_ticket,type_ticket,data_ticket,route_ticket);

		    	ticket_reurn1s.push_back(ticket_return1);
		    	if(type_ticket_input.compare("LK")==0){
                    ticket_return1.Print_return_LK();
		    	}
                 if(type_ticket_input.compare("KL")==0){
                    ticket_return1.Print_return_KL();

		    	}
                 if(type_ticket_input.compare("KT")==0){
                    ticket_return1.Print_return_KT();
                    }
                 if(type_ticket_input.compare("TL")==0){
                    ticket_return1.Print_return_TL();
		    	}
		    	}
                    cout<<"Total number of return tickets = "<<ticket_reurn1s.size();

		    	}


		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_return_ticket();
                    system("cls");
				}
				if(state_M_return_ticket==2){
    				system("cls");

                ifstream fin11("Return_ticket.txt");
                if(!fin11.is_open()){
                 cout<<"Opening error 'Return_ticket.txt'\n";

                }else{
                cout<<"Return ticket \n";
                cout<<"Enter the date of the specified flight\n 01.06.2021,\n 07.06.2021,\n 30.05.2021,\n 30.06.2021: ";
                cin>>data_ticket_input;
                cout<<"_____________________________________";
                cout<<"\ntrain\ttype ticket\tdata\troute\n";
                cout<<"_____________________________________\n";
                while(!fin11.eof()){

		    	split_string(name_ticket,fin11);
		    	split_string(type_ticket,fin11);
		    	split_string(data_ticket,fin11);
		    	split_string(route_ticket,fin11);
		    	Ticket ticket_return2(name_ticket,type_ticket,data_ticket,route_ticket);

		    	ticket_reurn2s.push_back(ticket_return2);
		    //	ticket_return1.Print_Ticket();
		    	if(data_ticket_input.compare("01.06.2021")==0){
                    ticket_return2.Print_return_data_01_06_2021();
		    	}
                 if(data_ticket_input.compare("07.06.2021")==0){
                    ticket_return2.Print_return_data_07_06_2021();
		    	}
                 if(data_ticket_input.compare("30.06.2021")==0){
                    ticket_return2.Print_return_data_30_06_2021();
                }
                 if(data_ticket_input.compare("30.05.2021")==0){
                   ticket_return2.Print_return_data_30_05_2021();

                }


		    	}
                    cout<<"Total number of return tickets = "<<ticket_reurn2s.size();
		    	}

		    	    cout<<endl;
    				system("pause");
		         	system("cls");
                    Main_return_ticket();
                    system("cls");
				}
		}
			system("pause");
			system("cls");
            MainMenu();
            system("cls");
		}
	}

	system("cls"); //видалити всі записи в консолі
	cout<<"Work completed\n";
	system("pause");

	return 0;
}
