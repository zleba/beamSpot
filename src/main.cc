#include <iostream>
#include <vector>
#include <tuple>

#include <Eigen/Dense>

#include <TTree.h>
#include <TFile.h>

#include "BeamSpotStandAlone.h"

using namespace std;
using namespace Eigen;

using Belle2::BeamSpotCalib::Event;
using Belle2::BeamSpotCalib::getEvents;
using Belle2::BeamSpotCalib::runBeamSpotAnalysis;

int main()
{

    TFile *file = TFile::Open("data/bucket28.root");
    TTree *tr = (TTree *) file->Get("tree");
    vector<Event> evtsRaw = getEvents(tr);

    auto evts = std::vector<Event>(evtsRaw.begin(), evtsRaw.begin() + 60000);

    vector<double> splitPoints = { evts[20000].t,  evts[40000].t };

    vector<VectorXd> pos;
    vector<MatrixXd> posErr;
    MatrixXd size;
    // get beam spot positions, errors of positions and beam spot size cov matrix
    tie(pos, posErr, size) = runBeamSpotAnalysis(evts, splitPoints);

    for(unsigned i = 0; i < pos.size(); ++i) {
        cout << i << "  "<< pos[i][0] << " "<< pos[i][1] <<" "<< pos[i][2] << endl;

    }

    return 0;

}
