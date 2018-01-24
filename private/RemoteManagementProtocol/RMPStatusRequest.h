//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CEMPayloadBase.h"

@class NSArray, NSString;

@interface RMPStatusRequest : CEMPayloadBase
{
    NSString *_requestType;
    NSString *_UDID;
    NSString *_userShortName;
    NSArray *_messages;
}

+ (id)request;
+ (id)MessagesItem_StatesItem_ReasonItem_allowedKeys;
+ (id)MessagesItem_StatesItem_AssetsUsedItem_allowedKeys;
+ (id)MessagesItem_StatesItem_allowedKeys;
+ (id)MessagesItem_allowedKeys;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSString *userShortName; // @synthesize userShortName=_userShortName;
@property(retain, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(retain, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)serializeMessagesItem_StatesItem_ReasonItem:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializeMessagesItem_StatesItem_AssetsUsedItem:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializeMessagesItem_StatesItem:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializeMessagesItem:(id)arg1 withAssetProviders:(id)arg2;
- (_Bool)validMessagesItem_StatesItem_ReasonItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (_Bool)validMessagesItem_StatesItem_AssetsUsedItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (_Bool)validMessagesItem_StatesItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (_Bool)validMessagesItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (id)serialize;
- (_Bool)loadStatusFromDictionary:(id)arg1 error:(id *)arg2;

@end

