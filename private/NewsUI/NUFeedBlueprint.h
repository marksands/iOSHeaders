//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface NUFeedBlueprint : NSObject
{
    NSMutableArray *_sections;
}

@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)sectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) unsigned long long numberOfSections;
- (id)init;

@end

