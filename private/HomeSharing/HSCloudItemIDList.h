//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeSharing/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface HSCloudItemIDList : NSObject <NSSecureCoding>
{
    NSMutableArray *_itemIDs;
    NSMutableArray *_idTypes;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
- (void)enumerateCloudItemIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3;
- (void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

