#include <string>



using namespace std;

class Person {
	
	private:
	
		string name;
		string gender;
		int age;
		string race;
		bool is_alive;
		
	
	public:
	
		Person(){
			setName("unknown");
			setGender("M");
			setRace("ugly");
			setAge(age);
		}
		
		Person(string n, string g, string r){
			setName(n);
			setGender(g);
			setRace(r);
			setAge(age)
		}
	
		string getStats(){
			return "Name: " + name + "\n" + "  Gender: " + gender + "\n" + "  Race: " + race;
		}
		
	
		string getName(){return name; }
		string getGender(){return gender;}
		int getAge(){return age;}
		string getRace(){return race;}
		bool getAlive(){return is_alive;}
	
		void setName(string n){
			name = n;
		}
		
		void setGender(string g){
			gender = g;
		}
		
		void setRace (string r){
			race = r;
		}
		
		void setAge (int a){
			
			if((0 > a) || (150 < a)){
				age = 25;
			} else {
				age = a;
		}
		
		void setAlive (bool a){
			is_alive = a;
		}
};