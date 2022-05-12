


main: src/main.cc src/BeamSpotStandAlone.cc src/Splitter.cc  include/BeamSpotStandAlone.h include/Splitter.h include/tools.h
	g++ -g -O2 `root-config --cflags`  -Iinclude -I/usr/include/eigen3/   src/BeamSpotStandAlone.cc src/main.cc  src/Splitter.cc  `root-config --libs` -o runBS
