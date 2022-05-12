# Beam Spot Calibration
Package for the beam spot calibration.

![buildAndRun](https://github.com/zleba/beamSpot/actions/workflows/test.yml/badge.svg)

There is a `src/main.cc` file showing how to run the algorithm.
The source file with the algorithm `src/BeamSpotStandAlone.cc` and the algorithm to split the data into the time intervals `src/Splitter.cc`.

You can download the data from dropbox.

To run the calibration first clone the repository, then run `make` and finally `./runBS`.
You will need ROOT and Eigen installed in your system.

See also the jupyter notebook in Colab.
