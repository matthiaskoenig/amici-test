# Amici testing

https://github.com/ICB-DCM/AMICI  
http://icb-dcm.github.io/AMICI/index.html  
https://pypi.org/project/amici/0.10.7/  



## requirements
### blas

The python and C++ interfaces require a system installation of BLAS. AMICI has been tested with various native and general purpose MKL implementations such as Accelerate, Intel MKL, cblas, openblas, atlas. The matlab interface uses the MATLAB MKL, which requires no prior installation.

**Intel MKL** : The Intel Math Kernel Library, supporting x86 32-bits and 64-bits. Includes optimizations for Intel Pentium, Core and Intel   Xeon CPUs and Intel Xeon Phi; support for Linux, Windows and Mac OS X.

**ATLAS**: ATLAS : Automatically Tuned Linear Algebra Software, an open source implementation of BLAS APIs for C and Fortran.

ATLAS installation
```
sudo apt-get install libatlas-base-dev
```


### hdf5
?

## install
```
mkvirtualenv amici --python=python3.6
(amici) pip install -r requirements.txt

(amici) pip install jupyterlab
(amici) ipython kernel install --user --name=amici
```

## pypesto
https://github.com/icb-dcm/pypesto  
https://pypi.org/project/pypesto/  
https://pypesto.readthedocs.io/  

