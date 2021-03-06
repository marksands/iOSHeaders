//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCFeedGroupInsertionDescriptor.h"

@class NSSet;

@interface FCEditorialFeedGroupInsertionDescriptor : NSObject <FCFeedGroupInsertionDescriptor>
{
    NSSet *_groupTypesToExhaust;
    unsigned long long _minPrecedingTopicGroups;
}

@property(readonly, nonatomic) unsigned long long minPrecedingTopicGroups; // @synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups;
@property(readonly, copy, nonatomic) NSSet *groupTypesToExhaust; // @synthesize groupTypesToExhaust=_groupTypesToExhaust;
- (void).cxx_destruct;
- (_Bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGroupTypesToExhaust:(id)arg1 minPrecedingTopicGroups:(unsigned long long)arg2;
- (id)init;

@end

