#include "ApplyInfoCollection.h"
#include "SearchRecruitInfo.h"
//하는 사람이 채워넣어야함
void ApplyInfoCollection::addApplyInfo(string companyNumber) {
    SearchRecruitInfo searchRecruitInfo;
    vector<Recruit*> recruitList = searchRecruitInfo.showRecruitInfoList(companyNumber);

    
}

vector<Recruit*> ApplyInfoCollection::getApplyInfoList() {

}

string ApplyInfoCollection::cancelApplyInfo(Recruit* recruit) {

}