#include <iostream>
#include <vector>
#include "applyInfoCollection.h"
using namespace std;


class CompanyUser {
    private :
        string normalName;
        int securityNumber;
        applyInfoCollection* ApplyInfoCollection;
    public :
        ApplyInfoCollection* getApplyInfoCollection();
};