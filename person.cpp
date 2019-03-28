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
			name = "unknown";
			gender = "M";
			race = "ugly";
		}
		
		Person(string n, string g, string r){
			name = n;
			gender = g;
			race = r;
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
			age = a;
		}
		
		void setAlive (bool a){
			is_alive = a;
		}
};