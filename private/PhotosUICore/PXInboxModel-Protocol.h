//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSDate, NSString;

@protocol PXInboxModel <NSObject, NSCopying>
@property(readonly, nonatomic) NSArray *leftPreviewItems;
@property(nonatomic, getter=isSeen) _Bool seen;
@property(readonly, nonatomic) _Bool userIsSender;
@property(readonly, copy, nonatomic) NSArray *senderNames;
@property(readonly, nonatomic) unsigned long long assetsCount;
@property(readonly, copy, nonatomic) NSString *inboxModelTitle;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSDate *creationDate;

@optional
@property(readonly, nonatomic) NSString *keyCommentGUID;
@property(readonly, nonatomic) NSString *ownerEmail;
@property(readonly, nonatomic) NSString *ownerLastName;
@property(readonly, nonatomic) NSString *ownerFirstName;
@property(readonly, nonatomic) NSArray *assetsForOneUp;
- (void)fetchLeftPreviewItemsWithCompletion:(void (^)(NSArray *))arg1;
@end

