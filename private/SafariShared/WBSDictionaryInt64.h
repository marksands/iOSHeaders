//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCoding-Protocol.h>
#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@interface WBSDictionaryInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying>
{
    unordered_map_7f7b3f19 _map;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const unordered_map_7f7b3f19 *map;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMovableMap:(unordered_map_7f7b3f19 *)arg1;
- (id)initWithMap:(const unordered_map_7f7b3f19 *)arg1;
- (id)init;

@end

