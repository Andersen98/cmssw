//--------------------------------------------------------------------------
// File and Version Information:
// 	$Id: DcxCloudsToTracks.hh,v 1.11 2004/08/06 05:58:21 bartoldu Exp $
//
// Description:
//	Class Header for |DcxCloudsToTracks| - a version of
//      DcxSparseFinder for CMS
//
// Environment:
//	Software developed for the BaBar Detector at the SLAC B-Factory.
//
// Author List:
//	S. Wagner
//
// Copyright Information:
//	Copyright (C) 1995	SLAC
//
//------------------------------------------------------------------------
#ifndef _DcxCloudsToHelix_
#define _DcxCloudsToHelix_

#include <iostream>
#include <fstream>
#include "RecoTracker/RoadSearchHelixMaker/interface/DcxHel.hh"
#include <vector>
 
class DcxHit;

class DcxCloudsToTracks{
public:
//constructors
  DcxCloudsToTracks();
  DcxCloudsToTracks(std::vector<DcxHit*> &listohits);

//destructor
  virtual ~DcxCloudsToTracks( );

//accessors

//workers
  void check_axial(std::vector<DcxHit*> &l, std::vector<DcxHit*> &o, DcxHel h);
  void check_stereo(std::vector<DcxHit*> &l, std::vector<DcxHit*> &o, DcxHel h);
  void findz_cyl();
//operators
  
//workers

protected:

//data
  double xc_cs, yc_cs, rc_cs, s3_cs, f1_cs, f2_cs, f3_cs;
  double x1t_cs, y1t_cs, x2t_cs, y2t_cs, r1s_cs, r2s_cs, fac_cs;
  double x0_wr, sx_wr, y0_wr, sy_wr, xc_cl, yc_cl, r_cl, xint, yint, zint;
  
//functions
  void makecircle(double x1_cs, double y1_cs,double x2_cs, double y2_cs,
                                             double x3_cs, double y3_cs);
  double find_z_at_cyl(DcxHel he, DcxHit* hi);
  double find_l_at_z(double zi, DcxHel he, DcxHit* hi);

private:

//data

//control

//static control parameters
static double epsilon;
static double half_pi;
//static control sets
public:
  
};// endof DcxCloudsToTracks
 
#endif

