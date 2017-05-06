#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;

Tools::Tools() {}

Tools::~Tools() {}

VectorXd Tools::CalculateRMSE(const vector<VectorXd> &estimations,
                              const vector<VectorXd> &ground_truth) {
  VectorXd rmse(5);
	rmse << 0,0,0,0,0;
  if(estimations.size() == 0 || (estimations.size() != ground_truth.size()) ){
    std::cout << "Error with input into CalculateRMSE function" << std::endl;
    return rmse;
	}

	//accumulate squared residuals
	for(unsigned int i=0; i < estimations.size(); ++i){
		VectorXd c = estimations[i] - ground_truth[i];
		c = c.array() * c.array();
		rmse += c;
	}

  rmse = rmse / estimations.size();
  rmse = rmse.array().sqrt();
  return rmse;
}
