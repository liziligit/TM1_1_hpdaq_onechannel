#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>
#include <TROOT.h>
#include <TMath.h>
#include <TParameter.h>
#include <TGraph.h>
#include <TH2D.h>
#include <TCanvas.h>
#include <TSystem.h>
#include "rootlib.h"


int pd1_analysis_test(char *fn, char *pedeFile, int ich, int iframe, double upLimit, double lowLimit ){

    pd1Debug pd1d;
	  pd1d.read(fn);

    // pd3d.noiseRange();
//       pd3d.drawRow(ich, iframe);
//	pd3d.fitBeam(ich, iframe);
//   pd3d.fitBeamError(ich);
//    pd3d.beamPosResol(ich, upLimit, lowLimit);
//     pd3d.beamPosResolCheck(ich, upLimit, lowLimit);
pd1d.beamPosFit_pd1(pedeFile, ich, iframe, upLimit, lowLimit);
//pd3d.beamProfile(ich, iframe, upLimit, lowLimit);
//pd3d.framePosResol(ich, iframe, upLimit, lowLimit);
//pd3d.beamIntensityResol(ich, upLimit, lowLimit);
//pd3d.beamSize(ich, upLimit, lowLimit);
//pd3d.beamBadPixel(ich, upLimit, lowLimit);
//pd3d.beamPresentation(ich, upLimit, lowLimit);
//pd3d.beamAngleResol(ich, upLimit, lowLimit);
//pd3d.beamTime(ich, upLimit, lowLimit);
//     pd3d.beamPara(ich);
//	pd3d.beamPara_correction(ich);
//     pd3d.beamFrame(ich);
//     pd3d.beamFrameAveFit(ich);
 //      pd3d.beamFrameAveFitRota(ich);
//	pd3d.beamParaAcu(ich);
//    pd3d.displayInterfaceUpdate(maxPixelSignal);
   // pd3d.displayInterface_copy(maxPixelSignal);
   // pd3d.drawFrameUpdate(0,10);

   // for(int i=300;i<400;i++){
   // pd3d.drawFrame(4,frame);
    // int a;
// scanf("%d",&a);	
   // }
	return 0;
}
