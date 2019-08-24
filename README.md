# How to reproduce overlay issue

```
# Clone package into ~/repos
mkdir -p ~/repos
cd ~/repos
git clone https://github.com/abaldur/reproduce_overlay_issue.git

# Link package into catkin_ws/src
cd ~/catkin_ws/src
ln -s ~/repos/reproduce_overlay_issue .

# Build
cd ~/catkin_ws
catkin_make
```
