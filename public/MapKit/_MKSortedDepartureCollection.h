//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _MKSortedDepartureCollection : NSObject
{
    NSMutableArray *_sortedDepartures;
    NSMutableSet *_groupedSequences;
}

@property(retain, nonatomic) NSMutableSet *groupedSequences; // @synthesize groupedSequences=_groupedSequences;
@property(retain, nonatomic) NSMutableArray *sortedDepartures; // @synthesize sortedDepartures=_sortedDepartures;
- (void).cxx_destruct;

@end

