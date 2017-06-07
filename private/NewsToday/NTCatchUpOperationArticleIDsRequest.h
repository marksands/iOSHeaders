//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSDictionary, NSOrderedSet;
@protocol NSCopying><NSSecureCoding;

@interface NTCatchUpOperationArticleIDsRequest : NSObject <NSCopying>
{
    NSObject<NSCopying><NSSecureCoding> *_identifier;
    NSOrderedSet *_articleIDs;
    NSDictionary *_overrideHeadlineMetadataByArticleID;
}

@property(copy, nonatomic) NSDictionary *overrideHeadlineMetadataByArticleID; // @synthesize overrideHeadlineMetadataByArticleID=_overrideHeadlineMetadataByArticleID;
@property(copy, nonatomic) NSOrderedSet *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(copy, nonatomic) NSObject<NSCopying><NSSecureCoding> *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArticleIDs:(id)arg1 overrideHeadlineMetadataByArticleID:(id)arg2;
- (id)init;

@end

