//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface PPSource : NSObject <NSCopying>
{
    NSString *_bundleId;
    NSString *_groupId;
    NSString *_documentId;
    NSDate *_date;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *documentId; // @synthesize documentId=_documentId;
@property(readonly, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSource:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4;
- (void)dealloc;

@end

