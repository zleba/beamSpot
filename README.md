# Beam Spot Calibration
Package for the beam spot calibration.

There is a `src/main.cc` file showing how to run the algorithm.
The source file with the algorithm `src/BeamSpotStandAlone.cc` and the algorithm to split the data into the time intervals `src/Splitter.cc`.

Download the data from Dropbox by
```
wget https://www.dropbox.com/s/6qnhj8okl7ub16i/bucket28.root?dl=1 -O data/bucket28.root
```

To run the calibration first clone the repository, then run `make` and finally `./runBS`.
You will need ROOT and Eigen installed in your system.

See also the jupyter notebook in Colab.
