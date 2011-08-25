/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under 
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef PAIR_CLASS

PairStyle(lj/cut/coul/long/tip4p/opt,PairLJCutCoulLongTIP4POpt)

#else

#ifndef LMP_PAIR_LJ_CUT_COUL_LONG_TIP4P_OPT_H
#define LMP_PAIR_LJ_CUT_COUL_LONG_TIP4P_OPT_H

#include "pair_lj_cut_coul_long_tip4p.h"

namespace LAMMPS_NS {

class PairLJCutCoulLongTIP4POpt : public PairLJCutCoulLongTIP4P {
 public:
  PairLJCutCoulLongTIP4POpt(class LAMMPS *);
  virtual void compute(int, int);

 protected:
  template < const int, const int, const int, const int, const int >
  void eval();

};

}

#endif
#endif
