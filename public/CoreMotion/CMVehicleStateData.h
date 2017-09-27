//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject <NSSecureCoding, NSCopying>
{
    CMMotionTimeRange *fTimeRange;
    NSString *fDeviceId;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *deviceId;
@property(readonly, nonatomic) CMMotionTimeRange *timeRange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTimeRange:(id)arg1 deviceId:(id)arg2;

@end

