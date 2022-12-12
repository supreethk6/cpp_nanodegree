## Conda

### Anaconda download and installation
- https://www.anaconda.com/products/distribution
- Verify the Download Checksum 
  - ``` sha256sum Anaconda3–2022.05–Linux–x86_64.sh ```
- Run Anaconda Installation Script
  - ``` bash Anaconda3-2022.05-Linux-x86_64.sh ```
  - A license agreement will appear. Use the Enter key to review the agreement.
  - The installer will prompt you to accept the default location, or install to a different location.
  - ``` 
    Do you wish the installer to initialize Anaconda3
    by running conda init? [yes|no]
    [no] >>> yes
    ```
  - ``` conda config --set auto_activate_base false ```
  - ``` conda init ``` 
  - ``` conda info ```
  - ``` conda update conda ```
  - ``` conda update anaconda ```
- Create and Activate Anaconda Environments
  ```
  conda create --name cpp_env python=3
  conda activate cpp_env
  conda install xeus-cling -c conda-forge -n cpp_env --yes
  ```
- Restart the conda environment and then install jupyter
  ```
  sudo apt install jupyter
  ```
- Open the workspace in VS code and creata a new ipynb file and select the c++ interpreter
- Happy coding!!!