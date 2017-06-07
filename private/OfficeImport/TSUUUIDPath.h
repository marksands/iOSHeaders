//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>
#import <OfficeImport/NSFastEnumeration-Protocol.h>

@class NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration>
{
    NSArray *_uuids;
}

+ (id)lastUUIDFromUUIDPathString:(id)arg1;
@property(readonly, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *UUIDPathString;
@property(readonly, nonatomic) NSUUID *lastUUID;
- (id)UUIDPathByAppendingUUID:(id)arg1;
- (id)initWithUUIDPathString:(id)arg1;
- (id)initWithArray:(id)arg1;

@end

