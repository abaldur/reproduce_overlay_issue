# How to reproduce overlay issue

mkdir ~/repos
cd ~/repos
git clone https://github.com/abaldur/reproduce_overlay_issue.git

cd ~/catkin_ws/src
ln -s ~/repos/reproduce_overlay_issue .
cd ../
catkin_make
