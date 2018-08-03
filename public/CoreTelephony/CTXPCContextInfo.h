//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSUUID;

@interface CTXPCContextInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_uuid;
    NSString *_accountID;
    long long _slotID;
    NSString *_labelID;
    NSString *_label;
    NSString *_phoneNumber;
}

+ (_Bool)supportsSecureCoding;
+ (id)contextWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *labelID; // @synthesize labelID=_labelID;
@property(readonly, nonatomic) long long slotID; // @synthesize slotID=_slotID;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)context;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3;

@end

