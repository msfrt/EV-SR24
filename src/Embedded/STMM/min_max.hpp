#include<vector>
#include<map>
#include<string>
#include "raptor_CAN2.hpp"

using std::string;
using std::map;
using std::vector;

vector<int> get_values() {
	int min = 10000;
	int max = 0;
	int total = 0;
	string min_key = "";
	string max_key = "";

	for(auto const & [key,val] : stmm_signals) {
		StateSignal & curr_signal = val;
		//stateSignal.value() will give the value associated with the signal
		int value = curr_signal.can_value();
		if(value < min) {
			min = val;
			min_key = key;
		}

		if(value > max) {
			max = val;
			max_key = key;
		}

		total += value;
	}

	float average = total/96;

	vector<int> results = {min,max,min_key,max_key,average};
	return results;

}
