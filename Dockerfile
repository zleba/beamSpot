FROM rootproject/root
RUN apt-get update && apt-get install -y libeigen3-dev
WORKDIR ${HOME}
