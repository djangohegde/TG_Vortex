
#include "enums.hpp"
#include <cmath>

#define _USE_MATH_DEFINES

void init()
{

    double x_range = std::vector<double>(params::N_POINTS_P_AXIS, 0.0);
    double y_range = std::vector<double>(params::N_POINTS_P_AXIS, 0.0);
    double z_range = std::vector<double>(params::N_POINTS_P_AXIS, 0.0);

    double coordinates_x = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);
    double coordinates_y = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);
    double coordinates_z = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);

for (int i = 0; i < params::N_POINTS_P_AXIS; ++i) {
        coordinates_x[i][0][0] = x_range[i];

            for (int j = 0; j < params::N_POINTS_P_AXIS; ++j) {
                coordinates_y[i][j][0] = y_range[i];

                    for (int k = 0; k < params::N_POINTS_P_AXIS; ++k) {
                        coordinates_x[i][j][k] = z_range[i];
        
        }
    }
}
    
for ( int i = 0; i < params::N_POINTS_P_AXIS; ++i) {

    double x_range[i] = i*2*M_PI/params::N_POINTS_P_AXIS;
    double y_range[i] = i*2*M_PI/params::N_POINTS_P_AXIS; 
    double z_range[i] = i*2*M_PI/params::N_POINTS_P_AXIS;
    
    }

}

void cross_prodct(double ax, double ay, double az, double bx, double by, double bz)

{

double res_x = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);
double res_y = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);
double res_z = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);

double a_x = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);
double a_y = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);
double a_z = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);

double b_x = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);
double b_y = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);
double b_z = std::vector<std::vector<std::vector<double>>>(params::N_POINTS_P_AXIS, 0.0);


for ( int i = 0; i < params::N_POINTS_P_AXIS; ++i) {
    for ( int j = 0; j < params::N_POINTS_P_AXIS; ++j) {
        for ( int k = 0; k < params::N_POINTS_P_AXIS; ++k) {

            double res_x[i][j][k] = ay[i][j][k]*bz[i][j][k] - az[i][j][k]*by[i][j][k];
            double res_y[i][j][k] = az[i][j][k]*bx[i][j][k] - ax[i][j][k]*bz[i][j][k];
            double res_z[i][j][k] = ax[i][j][k]*by[i][j][k] - ay[i][j][k]*bx[i][j][k];
            
            }
        }
    }
}