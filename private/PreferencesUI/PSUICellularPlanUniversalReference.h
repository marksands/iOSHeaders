//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface PSUICellularPlanUniversalReference : NSObject <NSCopying, NSCoding>
{
    NSString *_iccid;
}

+ (id)referenceFromPlanItem:(id)arg1;
@property(retain, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithIccid:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

