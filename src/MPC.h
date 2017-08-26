#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;

class MPC {
 public:

  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);

  std::vector<double> mpc_x_;

  std::vector<double> mpc_y_;
  double prev_delta_ = 0.;
  double prev_a_ = 0.;

};

#endif /* MPC_H */
