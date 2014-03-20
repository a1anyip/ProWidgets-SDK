#! /usr/local/bin/perl
use POSIX qw/strftime/;
NIC->variable("DATE") = strftime("%d.%m.%Y", localtime);
NIC->variable("YEAR") = strftime("%Y", localtime);