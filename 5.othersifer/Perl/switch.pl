#!/usr/bin/perl
# Sifer Aseph

while(<STDIN>){
    $_ =~ s/^([^:]*:)([^:]*:)/\2\1/;
    print;
}
