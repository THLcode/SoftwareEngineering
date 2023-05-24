#include "ApplyInfoCollection.h"

void ApplyInfoCollection::addApplyInfo(Recruit* recruit) {
	this->applyInfoCollection.push_back(recruit);
}

vector<Recruit*> ApplyInfoCollection::getApplyInfoList() {
	return this->applyInfoCollection;
}

string ApplyInfoCollection::deleteApplyInfo(Recruit* recruit) {
//매우 바꿔야할 것 같음
    for (auto it = this->applyInfoCollection.begin(); it != this->applyInfoCollection.end(); it++) {
        if ((*it) == recruit) {
            this->applyInfoCollection.erase(it);
            return get<0>((*it)->getRecruitDetails()) + " " + to_string(get<1>((*it)->getRecruitDetails())) + " " + get<2>((*it)->getRecruitDetails());
        }
    }
    return "Apply Info is Empty"; //바꿔야겠어..........

}