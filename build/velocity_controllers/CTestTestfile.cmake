# CMake generated Testfile for 
# Source directory: /home/jaime/RM3_ws/src/ros2_controllers/velocity_controllers
# Build directory: /home/jaime/RM3_ws/build/velocity_controllers
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_load_joint_group_velocity_controller "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/jaime/RM3_ws/build/velocity_controllers/test_results/velocity_controllers/test_load_joint_group_velocity_controller.gtest.xml" "--package-name" "velocity_controllers" "--output-file" "/home/jaime/RM3_ws/build/velocity_controllers/ament_cmake_gmock/test_load_joint_group_velocity_controller.txt" "--command" "/home/jaime/RM3_ws/build/velocity_controllers/test_load_joint_group_velocity_controller" "--gtest_output=xml:/home/jaime/RM3_ws/build/velocity_controllers/test_results/velocity_controllers/test_load_joint_group_velocity_controller.gtest.xml")
set_tests_properties(test_load_joint_group_velocity_controller PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/jaime/RM3_ws/build/velocity_controllers/test_load_joint_group_velocity_controller" TIMEOUT "60" WORKING_DIRECTORY "/home/jaime/RM3_ws/build/velocity_controllers" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/jaime/RM3_ws/src/ros2_controllers/velocity_controllers/CMakeLists.txt;53;ament_add_gmock;/home/jaime/RM3_ws/src/ros2_controllers/velocity_controllers/CMakeLists.txt;0;")
add_test(test_joint_group_velocity_controller "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/jaime/RM3_ws/build/velocity_controllers/test_results/velocity_controllers/test_joint_group_velocity_controller.gtest.xml" "--package-name" "velocity_controllers" "--output-file" "/home/jaime/RM3_ws/build/velocity_controllers/ament_cmake_gmock/test_joint_group_velocity_controller.txt" "--command" "/home/jaime/RM3_ws/build/velocity_controllers/test_joint_group_velocity_controller" "--gtest_output=xml:/home/jaime/RM3_ws/build/velocity_controllers/test_results/velocity_controllers/test_joint_group_velocity_controller.gtest.xml")
set_tests_properties(test_joint_group_velocity_controller PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/jaime/RM3_ws/build/velocity_controllers/test_joint_group_velocity_controller" TIMEOUT "60" WORKING_DIRECTORY "/home/jaime/RM3_ws/build/velocity_controllers" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/foxy/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/home/jaime/RM3_ws/src/ros2_controllers/velocity_controllers/CMakeLists.txt;64;ament_add_gmock;/home/jaime/RM3_ws/src/ros2_controllers/velocity_controllers/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
