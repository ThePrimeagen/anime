# anime
The repo that everyone deserves

Yes, this contains all my background images.

## Sources
I am going to try to start adding sources.  A lot of these would take me
forever to find the sources, so all sources are added post my realization.

## Cycling your bg image (i3)

First make sure you have feh installed:  

`sudo apt install feh`

Clone this repository. Make sure to replace YOUR_PATH with your desired location (you will need this in a second).  

`git clone https://github.com/ThePrimeagen/anime.git /YOUR_PATH`

Then put the following in your shell profile (.bashrc or .zshrc) and replace YOUR_PATH with the path you used earlier (the "$HOME" stands for the "~" in your path):  

`export PATH="$PATH:$HOME/YOUR_PATH/build"`

Lastly, use the source command on your shell profile and your good to go. To cycle your background image simply type "cycle" in your terminal and click enter.

BONUS: Add the following line to your i3 config file "~/.config/i3/config" to run this on startup.

`exec --no-startup-id cycle`

# Cites
[powder.jpg](https://www.inprnt.com/gallery/nezuminata)
[ThePrimeagen.jepg](https://twitter.com/PhunToken/status/1508883727316836356)
[catumbrella.jpg](https://www.pixiv.net/en/artworks/82667169)
[omao_1.jpeg](https://twitter.com/omao51061954/status/1538480692094697472)
[hatsune.jpg](https://www.pixiv.net/en/artworks/38215125)
