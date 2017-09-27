//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface PHAMonitoringSystemInfo : NSObject <NSSecureCoding>
{
    unsigned long long _diskBytesReadPerInterval;
    unsigned long long _diskBytesWritePerInterval;
}

+ (_Bool)supportsSecureCoding;
@property unsigned long long diskBytesWritePerInterval; // @synthesize diskBytesWritePerInterval=_diskBytesWritePerInterval;
@property unsigned long long diskBytesReadPerInterval; // @synthesize diskBytesReadPerInterval=_diskBytesReadPerInterval;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

