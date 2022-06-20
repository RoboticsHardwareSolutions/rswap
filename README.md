# rswap

swap uint/int 16/32 

for start using:  
`$ cd ~/your_project_root_directory`    
`git submodule add git@gitlab.com:RoboticsHardwareSolutions/rlibs/rtimer.git`

OR   
`$ cd ~/your_project_root_directory`  
`$ mkdir rswap`  
after copy content of repository to folder rcan

For using in CMake project add in CMakeLists.txt next string
```
include(rswap/rswap.cmake)

include_directories( ... ${RSWAP_DIRECTORIES})

add_executable(... ${RSWAP_EXECUTABLE_FILES})


