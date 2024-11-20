#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return


# Custom aliases
alias ls='eza -lah --icons=always'
alias grep='grep --color=auto'
alias hyprlandconfig='nvim /home/kiroshi/.config/hypr/hyprland.conf'
alias sddmconfig='sudo vim /etc/sddm.conf.d/kde_settings.conf'
alias r='ranger'
alias x='clear -x'
alias sbash='source ~/.bashrc'
alias gpt='chatgpt.sh'
alias rename='qmv -f do'
alias bashrc='nvim ~/.bashrc'
alias v='nvim'
alias sddm='cd /usr/share/sddm/themes/'
alias spotify-theme-change='spicetify config current_theme'
alias spotify-color-change='spicetify config color_scheme'
alias spotify-build='spicetify apply'
# username@hostname 
PS1='\u \h  \W '

# Launch starship
# eval "$(starship init bash)"

# Import color scheme from pywal
wal -i ~/themes/current-wallpaper.jpg 1> /dev/null 2>&1

# Fastfetch with custom logo
fastfetch --kitty-direct /home/kiroshi/themes/current-fasfetch-logo.png --logo-width "30"

# Created by `pipx` on 2024-10-31 20:42:37
export PATH="$PATH:/home/kiroshi/.local/bin"

# Path for executable scripts
export PATH="$PATH:$HOME/scripts"
export PATH="$PATH:$HOME/scripts/themer"

# Define a editor for qmv tool
export EDITOR=nvim

# Path for Starship
export STARSHIP_CONFIG=~/.config/starship/starship.toml

# the fuck
eval "$(thefuck --alias)"

export PATH=$PATH:/home/kiroshi/.spicetify
