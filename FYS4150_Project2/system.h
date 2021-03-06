#ifndef SYSTEM_H
#define SYSTEM_H

#include <armadillo>

using namespace arma;

class System {
public:
    System(double omega, int numberOfDimensions, double h, int N);
    void diagonalizeMatrix(mat r, vec L, int N, cube &diagMat);
    void findEigenstate(mat &eigvals, cube eigvecs, cube diagMat, int numberOfEigstates, mat &saveEigenvector);
    void findCoefficients(mat r, vec qNumbers, mat &C);

    void setN(double N);
    void setStepLength(double h);
    void setNumberOfDimensions(int numberOfDimensions);
    void setNumberOfParticles(int numberOfParticles);
    void setComputationTime(double computationTime);
    void setWaveFunction(class WaveFunction* waveFunction);

    class WaveFunction* getWaveFunction()   { return m_waveFunction; }
    double getN()                             { return m_N; }
    double getStepLength()                  { return m_h; }
    int getNumberOfDimensions()             { return m_numberOfDimensions; }
    int getNumberOfParticles()              { return m_numberOfParticles; }
    double getComputationTime()             { return m_computationTime; }

private:
    int                     m_N                      = 0;
    double                  m_h                      = 0;
    int                     m_numberOfDimensions     = 0;
    int                     m_numberOfParticles      = 0;
    double                  m_computationTime        = 0;
    double                  m_omega                  = 0;
    class WaveFunction*     m_waveFunction           = nullptr;
};


#endif // SYSTEM_H
