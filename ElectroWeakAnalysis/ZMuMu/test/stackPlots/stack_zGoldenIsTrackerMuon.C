// stack macro
// Pasquale Noli

#include <sstream>
#include <string>
#include "stack_common.h"

void stack_zGoldenIsTrackerMuon() {

  //TCut cut_zGolden("zGoldenMass>60 && zGoldenMass<120 &&  zGoldenDau1Pt> 20 && zGoldenDau2Pt>20 && zGoldenDau1TrkIso< 3.0 && zGoldenDau1TrkIso < 3.0 && abs(zGoldenDau1Eta)<2.4 &&  abs(zGoldenDau2Eta)<2.4 && zGoldenDau1Chi2<10 && zGoldenDau2Chi2<10 && abs(zGoldenDau1dxyFromBS)<0.2 && abs(zGoldenDau2dxyFromBS)<0.2 && (zGoldenDau1NofStripHits + zGoldenDau1NofPixelHits)>9 && zGoldenDau1NofPixelHits>0 && ( zGoldenDau2NofStripHits +zGoldenDau2NofPixelHits )>9 &&  zGoldenDau2NofPixelHits>0 && zGoldenDau1NofMuonHits>0 && zGoldenDau2NofMuonHits>0 && zGoldenDau1NofMuMatches>1 && zGoldenDau2NofMuMatches>1  && (zGoldenDau1HLTBit==1 || zGoldenDau2HLTBit==1) ");

 makePlots("zGoldenDau1TrackerMuonBit", "zGoldenDau2TrackerMuonBit",massCut + kin_common , 1, "IsTrackerMuon",  0.1, 3, -0.5 ,2.5, true);

  hs->GetXaxis()->SetTitle("IsTrackerMuon");
  string yTag = "events"; // use the correct rebin
  hs->GetYaxis()->SetTitle(yTag.c_str());
  c1->SaveAs("IsTrackerMuon.eps");
  c1->SaveAs("IsTrackerMuon.gif");
  //c1->SaveAs("IsTrackerMuon.pdf");

  //TCut Ncut("zGoldenMass>60 && zGoldenMass<120 &&  zGoldenDau1Pt> 20 && zGoldenDau2Pt>20 && zGoldenDau1TrkIso< 3.0 && zGoldenDau1TrkIso < 3.0 && abs(zGoldenDau1Eta)<2.4 &&  abs(zGoldenDau2Eta)<2.4 && zGoldenDau1Chi2<10 && zGoldenDau2Chi2<10 && abs(zGoldenDau1dxyFromBS)<0.2 && abs(zGoldenDau2dxyFromBS)<0.2 && (zGoldenDau1NofStripHits + zGoldenDau1NofPixelHits)>9 && zGoldenDau1NofPixelHits>0 && ( zGoldenDau2NofStripHits +zGoldenDau2NofPixelHits )>9 &&  zGoldenDau2NofPixelHits>0 && zGoldenDau1NofMuonHits>0 && zGoldenDau2NofMuonHits>0 && zGoldenDau1NofMuMatches>1 && zGoldenDau2NofMuMatches>1  && zGoldenDau1TrackerMuonBit ==1 && zGoldenDau2TrackerMuonBit ==1  && (zGoldenDau1HLTBit==1 || zGoldenDau2HLTBit==1) ");

  //evalEff("zGoldenDau1TrackerMuonBit", "zGoldenDau2TrackerMuonBit",  cut_zGolden, Ncut,  100, -0.5, 99.5); 

}


