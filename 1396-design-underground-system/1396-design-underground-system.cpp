class UndergroundSystem {
public:
    
   unordered_map<int, pair<string, int>>checkin;
	unordered_map<string, pair<int, int>>routemap; 
	UndergroundSystem() {
	}

	void checkIn(int id, string stationName, int t) {
		checkin[id] = {stationName, t};
	}

	void checkOut(int id, string stationName, int t) {
		string route = checkin[id].first + '_' + stationName;
		auto &routemappair = routemap[route];
		routemappair.first += (t - checkin[id].second);
		routemappair.second++;
	}

	double getAverageTime(string startStation, string endStation) {
		string route = startStation + '_' + endStation;
		auto &routemappair = routemap[route];
		return ((double)routemappair.first) / ((double)routemappair.second);
	}
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */