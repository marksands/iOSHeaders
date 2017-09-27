//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface MFMailAccountProxy : NSObject
{
    NSDictionary *_properties;
}

@property(readonly, nonatomic) id mailAccount;
- (_Bool)_isRestricted;
- (_Bool)_isActive;
@property(readonly, nonatomic) _Bool isManaged;
@property(readonly, nonatomic) _Bool supportsMailDrop;
@property(readonly, nonatomic) _Bool restrictsRepliesAndForwards;
@property(readonly, nonatomic) _Bool supportsThreadOperations;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)_emailAddressesAndAliases;
@property(readonly, nonatomic) NSArray *fromEmailAddressesIncludingDisabled;
@property(readonly, nonatomic) NSArray *fromEmailAddresses;
@property(readonly, nonatomic) NSArray *emailAddresses;
@property(readonly, nonatomic) NSString *firstEmailAddress;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *fullUserName;
@property(readonly, nonatomic) _Bool isDefaultDeliveryAccount;
- (void)dealloc;
- (id)_initWithProperties:(id)arg1;

@end

