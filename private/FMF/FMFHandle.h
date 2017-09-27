//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isFamilyMember;
    _Bool _pending;
    _Bool _reachable;
    NSString *_identifier;
    NSString *_serverId;
    NSNumber *_dsid;
    NSArray *_aliasServerIds;
    NSArray *_invitationSentToIds;
    NSDictionary *_expiresByGroupId;
    NSString *_hashedDSID;
    NSNumber *_trackingTimestamp;
    NSNumber *_favoriteOrder;
    NSString *__prettyNameInternal;
    long long _idsStatus;
    NSString *_qualifiedIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)familyHandleWithId:(id)arg1 dsid:(id)arg2;
+ (id)handleWithId:(id)arg1 serverId:(id)arg2;
+ (id)handleWithId:(id)arg1;
@property(copy, nonatomic) NSString *qualifiedIdentifier; // @synthesize qualifiedIdentifier=_qualifiedIdentifier;
@property(nonatomic) _Bool reachable; // @synthesize reachable=_reachable;
@property(nonatomic) long long idsStatus; // @synthesize idsStatus=_idsStatus;
@property(copy, nonatomic) NSString *_prettyNameInternal; // @synthesize _prettyNameInternal=__prettyNameInternal;
@property(copy, nonatomic) NSNumber *favoriteOrder; // @synthesize favoriteOrder=_favoriteOrder;
@property(copy, nonatomic) NSNumber *trackingTimestamp; // @synthesize trackingTimestamp=_trackingTimestamp;
@property(nonatomic, getter=isPending) _Bool pending; // @synthesize pending=_pending;
@property(copy, nonatomic) NSString *hashedDSID; // @synthesize hashedDSID=_hashedDSID;
@property(copy, nonatomic) NSDictionary *expiresByGroupId; // @synthesize expiresByGroupId=_expiresByGroupId;
@property(copy, nonatomic) NSArray *invitationSentToIds; // @synthesize invitationSentToIds=_invitationSentToIds;
@property(copy, nonatomic) NSArray *aliasServerIds; // @synthesize aliasServerIds=_aliasServerIds;
@property(nonatomic) _Bool isFamilyMember; // @synthesize isFamilyMember=_isFamilyMember;
@property(copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isPhoneNumber;
- (void)clearFavoriteOrder;
- (id)recordId;
- (id)prettyName;
- (long long)prettyNameCompare:(id)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSharingThroughGroupId:(id)arg1;
- (void)setICloudId:(id)arg1;
- (void)abPreferencesDidChange;
- (void)addressBookDidChange;

@end

