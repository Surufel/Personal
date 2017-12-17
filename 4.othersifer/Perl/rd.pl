#!/usr/bin/perl
# Sifer Aseph

$startdir = "/lib";

list_dirs($startdir);

sub list_dirs(){
    my $dir = shift(@_);

    opendir(TOP,$dir);
    my @files = readdir(TOP);
    closedir(TOP);

    foreach $file (@files){
        if(-d "$dir/$file"){
            print "$file\n";
        }
    }
}
