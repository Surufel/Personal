#!/usr/bin/perl
# Sifer Aseph

open(FILE,"/etc/protocols");

while(<FILE>){
    if(/ICMP/){
        print;
    }
}

close(FILE);
