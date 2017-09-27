//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMSharedUtilities/IMItem.h>

#import "IMRemoteObjectCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface IMLocationShareStatusChangeItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    _Bool _actionable;
    _Bool _expired;
    long long _status;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
    long long _direction;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSString *otherUnformattedID; // @synthesize otherUnformattedID=_otherUnformattedID;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(retain, nonatomic) NSString *otherCountryCode; // @synthesize otherCountryCode=_otherCountryCode;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(nonatomic) _Bool actionable; // @synthesize actionable=_actionable;
@property(nonatomic) long long status; // @synthesize status=_status;
- (_Bool)isLastMessageCandidate;
- (id)copyDictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

