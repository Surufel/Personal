#!/usr/bin/perl
# Sifer Aseph

while(<STDIN>){
    if(/str([io])ng\1/){
        $vowel = $1;
        print "We matched $vowel\n";
    }
}
