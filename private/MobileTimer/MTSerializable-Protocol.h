//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SYChange.h"
#import "SYObject.h"

@class NSData, NSDictionary, PBCodable<NSCopying>;

@protocol MTSerializable <NSObject, SYChange, SYObject>
+ (id <SYChange>)createSYChangeFromProtobuffObject:(PBCodable<NSCopying> *)arg1 changeType:(long long)arg2;
- (NSData *)createProtobufWithOptions:(NSDictionary *)arg1;
- (void)setChangeType:(long long)arg1;
@end

