//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)UUID;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CFString *)_cfUUIDString;
@property(readonly, copy) NSString *UUIDString;
- (void)getUUIDBytes:(unsigned char [16])arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithUUIDBytes:(unsigned char [16])arg1;
- (id)initWithUUIDString:(id)arg1;
- (id)init;

@end

