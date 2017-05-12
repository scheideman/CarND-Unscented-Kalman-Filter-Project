# Unscented Kalman Filter Project
Self-Driving Car Engineer Nanodegree Program
---

Below is the visualization of the UKF output. 

![Alt text](images/gtVSest.png?raw=true "Visualize result")

The RMSE I got was: {0.0716588,0.0823478,0.276016,0.21879} for {px,py,vx,vy}

The parameters I had to tune were the initialization values for the mean state and covariance, as well as the process noise. For the process noise, the lectures recommended half of the maximum acceleration you would expect of the object you are tracking. I ended up doing guess and check and found std_a_ = 2 and std_yawdd_ = (2 * M_PI) / 8 to give the best results. Below is the NIS plot for the radar measurements. 

![Alt text](images/radar-nis.png?raw=true "Radar NIS")


## Dependencies

* cmake >= v3.5
* make >= v4.1
* gcc/g++ >= v5.4

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./UnscentedKF path/to/input.txt path/to/output.txt`. You can find
   some sample inputs in 'data/'.
    - eg. `./UnscentedKF ../data/obj_pose-laser-radar-synthetic-input.txt`
