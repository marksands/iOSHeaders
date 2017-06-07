//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CalendarDatabase/NSCopying-Protocol.h>
#import <CalendarDatabase/NSSecureCoding-Protocol.h>

@interface CADObjectID : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _temporary;
    int _entityType;
    int _entityID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isTemporary) _Bool temporary; // @synthesize temporary=_temporary;
@property(readonly, nonatomic) int entityID; // @synthesize entityID=_entityID;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)URIRepresentation;
- (id)stringRepresentation;
- (id)description;
- (id)entityName;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(int)arg1 entityID:(int)arg2;

@end

