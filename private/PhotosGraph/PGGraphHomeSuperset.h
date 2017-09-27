//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateInterval, NSSet, PGGraphNode;

@interface PGGraphHomeSuperset : NSObject
{
    PGGraphNode *_bestAddressNode;
    NSDateInterval *_dateInterval;
    NSSet *_momentNodes;
}

@property(readonly) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(readonly) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly) PGGraphNode *bestAddressNode; // @synthesize bestAddressNode=_bestAddressNode;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBestAddressNode:(id)arg1 dateInterval:(id)arg2 momentNodes:(id)arg3;

@end

