//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSDictionary, NSURL, NSUUID;

@interface WBSCloudTabCloseRequest : NSObject <NSCopying>
{
    NSUUID *_sourceDeviceUUID;
    NSUUID *_requestUUID;
    NSUUID *_destinationDeviceUUID;
    NSUUID *_tabUUID;
    NSURL *_url;
    NSDate *_lastModified;
}

+ (id)destinationDeviceUUIDInDictionary:(id)arg1;
+ (_Bool)isCloudTabCloseRequestDictionary:(id)arg1;
+ (id)_dictionaryWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5;
@property(readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSUUID *tabUUID; // @synthesize tabUUID=_tabUUID;
@property(readonly, nonatomic) NSUUID *destinationDeviceUUID; // @synthesize destinationDeviceUUID=_destinationDeviceUUID;
@property(readonly, nonatomic) NSUUID *requestUUID; // @synthesize requestUUID=_requestUUID;
- (void).cxx_destruct;
- (_Bool)matchesCloudTab:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5 requestUUID:(id)arg6;
- (id)initWithDictionary:(id)arg1 requestUUID:(id)arg2;

@end

