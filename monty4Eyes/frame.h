enum animations {
  S0_probuzeni = 0,
  S1_normal = 1,
  S2_vesele_mrk = 2,
  S3_do_rozzlobeni = 3,
  S4_do_smutku = 4,
  S5_do_spanku = 5,
  S6_do_srdicka = 6,
  S7_do_udiveni = 7,
  S8_normal_default_possition = 8,
  S9_sleeping_default_possition = 9,
  def = 99
} animState;

//this is the size of each animation, based on order in enum above
int size_array[] = {7, 13, 11, 27, 26, 7, 19, 29, 1, 1};
int loop_array[] = {1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};

#include "data/animation_0_probuzeni.h"
#include "data/animation_1_normal.h"
#include "data/animation_2_vesele_mrk.h"
#include "data/animation_3_do_rozzlobeni.h"
#include "data/animation_4_do_smutku.h"
#include "data/animation_5_do_spanku.h"
#include "data/animation_6_do_srdicka.h"
#include "data/animation_7_do_udiveni.h"
#include "data/normal_default_possition.h"
#include "data/sleeping_default_possition.h"
