//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PGGraphNode;

@interface PGPeopleVisitingVisit : NSObject
{
    PGGraphNode *_locationNode;
    NSMutableArray *_momentNodes;
}

@property(readonly) NSMutableArray *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(readonly) PGGraphNode *locationNode; // @synthesize locationNode=_locationNode;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocationNode:(id)arg1;

@end

