//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@class NSDate, NSDictionary, NSString;

@interface NSError (HDIDSError)
- (_Bool)hd_isResponseTimeout;
@property(readonly, nonatomic, getter=hd_isFromRequest) _Bool hd_fromRequest;
@property(readonly, nonatomic) NSDictionary *hd_persistentUserInfo;
@property(readonly, nonatomic) NSString *hd_messageIDSDeviceIdentifier;
@property(readonly, nonatomic) NSString *hd_messageIDSIdentifier;
@property(readonly, nonatomic) NSDate *hd_messageSent;
@property(readonly, nonatomic) unsigned short hd_messageID;
@end

