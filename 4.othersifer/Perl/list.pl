#!/usr/bin/perl
# Sifer Aseph

opendir(CURRENT,".");
@list = readdir(CURRENT);
closedir(CURRENT);

foreach $item (@list){
    if($item !~ /^\./){
        print "$item\n";
    }
}
