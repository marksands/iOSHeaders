//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface _HDCachedSourceOrder : NSObject
{
    _Bool _userOrdered;
    _Bool _isDefaultSourceOrder;
    NSArray *_sources;
    NSArray *_sourceIDs;
    NSDictionary *_sourcesByID;
}

@property(readonly, nonatomic) _Bool isDefaultSourceOrder; // @synthesize isDefaultSourceOrder=_isDefaultSourceOrder;
@property(readonly, nonatomic) _Bool userOrdered; // @synthesize userOrdered=_userOrdered;
@property(readonly, copy, nonatomic) NSDictionary *sourcesByID; // @synthesize sourcesByID=_sourcesByID;
@property(readonly, copy, nonatomic) NSArray *sourceIDs; // @synthesize sourceIDs=_sourceIDs;
@property(readonly, copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithSources:(id)arg1 sourceIDs:(id)arg2 sourcesByID:(id)arg3 userOrdered:(_Bool)arg4 isDefaultOrder:(_Bool)arg5;
- (id)init;

@end

