//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ARTechniqueGatherContext : NSObject
{
    id _parentContext;
    NSMutableArray *_gatheredData;
}

@property(retain, nonatomic) NSMutableArray *gatheredData; // @synthesize gatheredData=_gatheredData;
@property(retain, nonatomic) id parentContext; // @synthesize parentContext=_parentContext;
- (void).cxx_destruct;
- (id)initWithParentContext:(id)arg1;

@end
